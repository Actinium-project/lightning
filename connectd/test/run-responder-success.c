#include <assert.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <unistd.h>
#include <ccan/err/err.h>
#include <ccan/io/io.h>
#include <common/status.h>
#include <wire/wire.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for fromwire_fail */
const void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

/* No randomness please, we want to replicate test vectors. */
#include <sodium/randombytes.h>

static void seed_randomness(u8 *secret, size_t len);
#define randombytes_buf(secret, len) seed_randomness((secret), (len))

struct handshake;
static struct io_plan *test_write(struct io_conn *conn,
				  const void *data, size_t len,
				  struct io_plan *(*next)(struct io_conn *,
							  struct handshake *),
				  struct handshake *h);

static struct io_plan *test_read(struct io_conn *conn,
				 void *data, size_t len,
				 struct io_plan *(*next)(struct io_conn *,
							 struct handshake *),
				 struct handshake *h);

#define SUPERVERBOSE status_debug
void status_fmt(enum log_level level UNUSED,
		const struct node_id *node_id,
		const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vprintf(fmt, ap);
	printf("\n");
	va_end(ap);
}

#undef io_write
#undef io_read

#define io_write(conn, data, len, cb, cb_arg) \
	test_write((conn), (data), (len), (cb), (cb_arg))

#define io_read(conn, data, len, cb, cb_arg) \
	test_read((conn), (data), (len), (cb), (cb_arg))

#include "../handshake.c"
#include <common/utils.h>
#include <ccan/array_size/array_size.h>
#include <ccan/str/hex/hex.h>

static struct pubkey pubkey(const char *str)
{
	struct pubkey p;
	if (!pubkey_from_hexstr(str, strlen(str), &p))
		abort();
	return p;
}

static struct privkey privkey(const char *str)
{
	struct privkey p;
	if (!hex_decode(str, strlen(str), &p, sizeof(p)))
		abort();
	return p;
}

static bool secret_eq_str(const struct secret *s, const char *str)
{
	struct secret expect;
	if (!hex_decode(str, strlen(str), &expect, sizeof(expect)))
		abort();
	return secret_eq_consttime(s, &expect);
}

secp256k1_context *secp256k1_ctx;
static struct pubkey ls_pub, e_pub;
static struct privkey ls_priv, e_priv;

static void seed_randomness(u8 *secret, size_t len)
{
	assert(len == sizeof(e_priv));
	memcpy(secret, &e_priv, len);
}

/* BOLT #8:
 *  # Act One
 *  input: 0x00036360e856310ce5d294e8be33fc807077dc56ac80d95d9cd4ddbd21325eff73f70df6086551151f58b8afe6c195782c6a
 *  # re=0x036360e856310ce5d294e8be33fc807077dc56ac80d95d9cd4ddbd21325eff73f7
 *  # h=0x9e0e7de8bb75554f21db034633de04be41a2b8a18da7a319a03c803bf02b396c
 *  # ss=0x1e2fb3c8fe8fb9f262f649f64d26ecf0f2c0a805a767cf02dc2d77a6ef1fdcc3
 *  # HKDF(0x2640f52eebcd9e882958951c794250eedb28002c05d7dc2ea0f195406042caf1,0x1e2fb3c8fe8fb9f262f649f64d26ecf0f2c0a805a767cf02dc2d77a6ef1fdcc3)
 *  # ck,temp_k1=0xb61ec1191326fa240decc9564369dbb3ae2b34341d1e11ad64ed89f89180582f,0xe68f69b7f096d7917245f5e5cf8ae1595febe4d4644333c99f9c4a1282031c9f
 *  # decryptWithAD(0xe68f69b7f096d7917245f5e5cf8ae1595febe4d4644333c99f9c4a1282031c9f, 0x000000000000000000000000, 0x9e0e7de8bb75554f21db034633de04be41a2b8a18da7a319a03c803bf02b396c, 0x0df6086551151f58b8afe6c195782c6a)
 *  # h=0x9d1ffbb639e7e20021d9259491dc7b160aab270fb1339ef135053f6f2cebe9ce
 *  # Act Two
 *  # e.pub=0x02466d7fcae563e5cb09a0d1870bb580344804617879a14949cf22285f1bae3f27 e.priv=0x2222222222222222222222222222222222222222222222222222222222222222
 *  # h=0x38122f669819f906000621a14071802f93f2ef97df100097bcac3ae76c6dc0bf
 *  # ss=0xc06363d6cc549bcb7913dbb9ac1c33fc1158680c89e972000ecd06b36c472e47
 *  # HKDF(0xb61ec1191326fa240decc9564369dbb3ae2b34341d1e11ad64ed89f89180582f,0xc06363d6cc549bcb7913dbb9ac1c33fc1158680c89e972000ecd06b36c472e47)
 *  # ck,temp_k2=0xe89d31033a1b6bf68c07d22e08ea4d7884646c4b60a9528598ccb4ee2c8f56ba,0x908b166535c01a935cf1e130a5fe895ab4e6f3ef8855d87e9b7581c4ab663ddc
 *  # encryptWithAD(0x908b166535c01a935cf1e130a5fe895ab4e6f3ef8855d87e9b7581c4ab663ddc, 0x000000000000000000000000, 0x38122f669819f906000621a14071802f93f2ef97df100097bcac3ae76c6dc0bf, <empty>)
 *  # c=0x6e2470b93aac583c9ef6eafca3f730ae
 *  # h=0x90578e247e98674e661013da3c5c1ca6a8c8f48c90b485c0dfa1494e23d56d72
 *  output: 0x0002466d7fcae563e5cb09a0d1870bb580344804617879a14949cf22285f1bae3f276e2470b93aac583c9ef6eafca3f730ae
 *  # Act Three
 *  input: 0x00b9e3a702e93e3a9948c2ed6e5fd7590a6e1c3a0344cfc9d5b57357049aa22355361aa02e55a8fc28fef5bd6d71ad0c38228dc68b1c466263b47fdf31e560e139ba
 *  # decryptWithAD(0x908b166535c01a935cf1e130a5fe895ab4e6f3ef8855d87e9b7581c4ab663ddc, 0x000000000100000000000000, 0x90578e247e98674e661013da3c5c1ca6a8c8f48c90b485c0dfa1494e23d56d72, 0xb9e3a702e93e3a9948c2ed6e5fd7590a6e1c3a0344cfc9d5b57357049aa22355361aa02e55a8fc28fef5bd6d71ad0c3822)
 *  # rs=0x034f355bdcb7cc0af728ef3cceb9615d90684bb5b2ca5f859ab0f0b704075871aa
 *  # h=0x5dcb5ea9b4ccc755e0e3456af3990641276e1d5dc9afd82f974d90a47c918660
 *  # ss=0xb36b6d195982c5be874d6d542dc268234379e1ae4ff1709402135b7de5cf0766
 *  # HKDF(0xe89d31033a1b6bf68c07d22e08ea4d7884646c4b60a9528598ccb4ee2c8f56ba,0xb36b6d195982c5be874d6d542dc268234379e1ae4ff1709402135b7de5cf0766)
 *  # ck,temp_k3=0x919219dbb2920afa8db80f9a51787a840bcf111ed8d588caf9ab4be716e42b01,0x981a46c820fb7a241bc8184ba4bb1f01bcdfafb00dde80098cb8c38db9141520
 *  # decryptWithAD(0x981a46c820fb7a241bc8184ba4bb1f01bcdfafb00dde80098cb8c38db9141520, 0x000000000000000000000000, 0x5dcb5ea9b4ccc755e0e3456af3990641276e1d5dc9afd82f974d90a47c918660, 0x8dc68b1c466263b47fdf31e560e139ba)
 *  # HKDF(0x919219dbb2920afa8db80f9a51787a840bcf111ed8d588caf9ab4be716e42b01,zero)
 *  output: rk,sk=0x969ab31b4d288cedf6218839b27a3e2140827047f2c0f01bf5c04435d43511a9,0xbb9020b8965f4df047e07f955f3c4b88418984aadc5cdb35096b9ea8fa5c3442
 */

/* Here's what we expect: */
static const char *expect_output[] = {
	"0002466d7fcae563e5cb09a0d1870bb580344804617879a14949cf22285f1bae3f276e2470b93aac583c9ef6eafca3f730ae"
};

static const char *expect_input[] = {
	"00036360e856310ce5d294e8be33fc807077dc56ac80d95d9cd4ddbd21325eff73f70df6086551151f58b8afe6c195782c6a",
	"00b9e3a702e93e3a9948c2ed6e5fd7590a6e1c3a0344cfc9d5b57357049aa22355361aa02e55a8fc28fef5bd6d71ad0c38228dc68b1c466263b47fdf31e560e139ba"
};

static const char expect_sk[] =
	"bb9020b8965f4df047e07f955f3c4b88418984aadc5cdb35096b9ea8fa5c3442";
static const char expect_rk[] =
	"969ab31b4d288cedf6218839b27a3e2140827047f2c0f01bf5c04435d43511a9";

static struct io_plan *test_write(struct io_conn *conn,
				  const void *data, size_t len,
				  struct io_plan *(*next)(struct io_conn *,
							  struct handshake *),
				  struct handshake *h)
{
	static int upto;
	char *got;

	assert(upto < ARRAY_SIZE(expect_output));
	got = tal_hexstr(NULL, data, len);
	assert(streq(expect_output[upto], got));
	tal_free(got);
	upto++;

	return next(conn, h);
}

static struct io_plan *test_read(struct io_conn *conn,
				 void *data, size_t len,
				 struct io_plan *(*next)(struct io_conn *,
							 struct handshake *),
				 struct handshake *h)
{
	static int upto;

	assert(upto < ARRAY_SIZE(expect_input));
	if (!hex_decode(expect_input[upto], strlen(expect_input[upto]),
			data, len))
		abort();
	upto++;

	return next(conn, h);
}

static struct io_plan *success(struct io_conn *conn UNUSED,
			       const struct pubkey *them UNUSED,
			       const struct wireaddr_internal *addr UNUSED,
			       const struct crypto_state *cs,
			       void *unused UNUSED)
{
	assert(secret_eq_str(&cs->sk, expect_sk));
	assert(secret_eq_str(&cs->rk, expect_rk));

	/* No memory leaks please */
	secp256k1_context_destroy(secp256k1_ctx);
	tal_free(tmpctx);
	exit(0);
}

struct secret *hsm_do_ecdh(const tal_t *ctx, const struct pubkey *point)
{
	struct secret *ss = tal(ctx, struct secret);
	if (secp256k1_ecdh(secp256k1_ctx, ss->data, &point->pubkey,
			   ls_priv.secret.data, NULL, NULL) != 1)
		return tal_free(ss);
	return ss;
}

int main(void)
{
	setup_locale();

	struct wireaddr_internal dummy;

	secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY
						 | SECP256K1_CONTEXT_SIGN);
	setup_tmpctx();


	/* BOLT #8:
	 *
	 *    name: transport-responder successful handshake
	 *    ls.priv=2121212121212121212121212121212121212121212121212121212121212121
	 *    ls.pub=028d7500dd4c12685d1f568b4c2b5048e8534b873319f3a8daa612b469132ec7f7
	 *    e.priv=0x2222222222222222222222222222222222222222222222222222222222222222
	 *    e.pub=0x02466d7fcae563e5cb09a0d1870bb580344804617879a14949cf22285f1bae3f27
	 */
	ls_priv = privkey("2121212121212121212121212121212121212121212121212121212121212121");
	ls_pub = pubkey("028d7500dd4c12685d1f568b4c2b5048e8534b873319f3a8daa612b469132ec7f7");
	e_priv = privkey("2222222222222222222222222222222222222222222222222222222222222222");
	e_pub = pubkey("02466d7fcae563e5cb09a0d1870bb580344804617879a14949cf22285f1bae3f27");

	dummy.itype = ADDR_INTERNAL_WIREADDR;
	dummy.u.wireaddr.addrlen = 0;
	responder_handshake((void *)tmpctx, &ls_pub, &dummy, success, NULL);
	/* Should not exit! */
	abort();
}
