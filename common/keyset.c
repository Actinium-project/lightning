#include <common/derive_basepoints.h>
#include <common/key_derive.h>
#include <common/keyset.h>

bool derive_keyset(const struct pubkey *per_commitment_point,
		   const struct basepoints *self,
		   const struct basepoints *other,
		   bool option_static_remotekey,
		   struct keyset *keyset)
{
        /* BOLT-531c8d7d9b01ab610b8a73a0deba1b9e9c83e1ed #3:
	 *
	 * ### `localpubkey`, `local_htlcpubkey`, `remote_htlcpubkey`, `local_delayedpubkey`, and `remote_delayedpubkey` Derivation
	 *
	 * These pubkeys are simply generated by addition from their base points:
	 *
	 *	pubkey = basepoint + SHA256(per_commitment_point || basepoint) * G
	 *
	 * The `localpubkey` uses the local node's `payment_basepoint`;
	 * the `local_htlcpubkey` uses the local node's `htlc_basepoint`;
	 * the `remote_htlcpubkey` uses the remote node's `htlc_basepoint`;
	 * the `local_delayedpubkey` uses the local node's `delayed_payment_basepoint`;
	 * and the `remote_delayedpubkey` uses the remote node's `delayed_payment_basepoint`.
	 */
	if (!derive_simple_key(&self->payment,
			       per_commitment_point,
			       &keyset->self_payment_key))
		return false;

	/* BOLT-531c8d7d9b01ab610b8a73a0deba1b9e9c83e1ed #3:
	 *
	 * ### `remotepubkey` Derivation
	 *
	 * If `option_static_remotekey` is negotiated the `remotepubkey`
	 * is simply the remote node's `payment_basepoint`, otherwise it is
	 * calculated as above using the remote node's `payment_basepoint`.
	 */
	if (option_static_remotekey)
		keyset->other_payment_key = other->payment;
	else if (!derive_simple_key(&other->payment,
				    per_commitment_point,
				    &keyset->other_payment_key))
		return false;

	if (!derive_simple_key(&self->htlc,
			       per_commitment_point,
			       &keyset->self_htlc_key))
		return false;

	if (!derive_simple_key(&other->htlc,
			       per_commitment_point,
			       &keyset->other_htlc_key))
		return false;

	if (!derive_simple_key(&self->delayed_payment,
			       per_commitment_point,
			       &keyset->self_delayed_payment_key))
		return false;

	/* BOLT #3:
	 *
	 * ### `revocationpubkey` Derivation
	 *
	 * The `revocationpubkey` is a blinded key: when the local node wishes
	 * to create a new commitment for the remote node, it uses its own
	 * `revocation_basepoint` and the remote node's `per_commitment_point`
	 * to derive a new `revocationpubkey` for the commitment.
	 */
	if (!derive_revocation_key(&other->revocation,
				   per_commitment_point,
				   &keyset->self_revocation_key))
		return false;

	return true;
}
