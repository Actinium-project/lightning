#include "../channel.c"
#include "../invoice.c"
#include "../peer_control.c"
#include <ccan/alignof/alignof.h>
#include <common/errcode.h>

bool deprecated_apis = false;

/* AUTOGENERATED MOCKS START */
/* Generated stub for bigsize_get */
size_t bigsize_get(const u8 *p UNNEEDED, size_t max UNNEEDED, bigsize_t *val UNNEEDED)
{ fprintf(stderr, "bigsize_get called!\n"); abort(); }
/* Generated stub for bigsize_put */
size_t bigsize_put(u8 buf[BIGSIZE_MAX_LEN] UNNEEDED, bigsize_t v UNNEEDED)
{ fprintf(stderr, "bigsize_put called!\n"); abort(); }
/* Generated stub for bitcoind_getutxout_ */
void bitcoind_getutxout_(struct bitcoind *bitcoind UNNEEDED,
			 const struct bitcoin_txid *txid UNNEEDED, const u32 outnum UNNEEDED,
			 void (*cb)(struct bitcoind *bitcoind UNNEEDED,
				    const struct bitcoin_tx_output *txout UNNEEDED,
				    void *arg) UNNEEDED,
			 void *arg UNNEEDED)
{ fprintf(stderr, "bitcoind_getutxout_ called!\n"); abort(); }
/* Generated stub for bolt11_decode */
struct bolt11 *bolt11_decode(const tal_t *ctx UNNEEDED, const char *str UNNEEDED,
			     const char *description UNNEEDED, char **fail UNNEEDED)
{ fprintf(stderr, "bolt11_decode called!\n"); abort(); }
/* Generated stub for bolt11_encode_ */
char *bolt11_encode_(const tal_t *ctx UNNEEDED,
		     const struct bolt11 *b11 UNNEEDED, bool n_field UNNEEDED,
		     bool (*sign)(const u5 *u5bytes UNNEEDED,
				  const u8 *hrpu8 UNNEEDED,
				  secp256k1_ecdsa_recoverable_signature *rsig UNNEEDED,
				  void *arg) UNNEEDED,
		     void *arg UNNEEDED)
{ fprintf(stderr, "bolt11_encode_ called!\n"); abort(); }
/* Generated stub for broadcast_tx */
void broadcast_tx(struct chain_topology *topo UNNEEDED,
		  struct channel *channel UNNEEDED, const struct bitcoin_tx *tx UNNEEDED,
		  void (*failed)(struct channel *channel UNNEEDED,
				 bool success UNNEEDED,
				 const char *err))
{ fprintf(stderr, "broadcast_tx called!\n"); abort(); }
/* Generated stub for channel_tell_depth */
bool channel_tell_depth(struct lightningd *ld UNNEEDED,
				 struct channel *channel UNNEEDED,
				 const struct bitcoin_txid *txid UNNEEDED,
				 u32 depth UNNEEDED)
{ fprintf(stderr, "channel_tell_depth called!\n"); abort(); }
/* Generated stub for command_check_only */
bool command_check_only(const struct command *cmd UNNEEDED)
{ fprintf(stderr, "command_check_only called!\n"); abort(); }
/* Generated stub for command_fail */
struct command_result *command_fail(struct command *cmd UNNEEDED, errcode_t code UNNEEDED,
				    const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "command_fail called!\n"); abort(); }
/* Generated stub for command_failed */
struct command_result *command_failed(struct command *cmd UNNEEDED,
				      struct json_stream *result)

{ fprintf(stderr, "command_failed called!\n"); abort(); }
/* Generated stub for command_its_complicated */
struct command_result *command_its_complicated(const char *why UNNEEDED)
{ fprintf(stderr, "command_its_complicated called!\n"); abort(); }
/* Generated stub for command_param_failed */
struct command_result *command_param_failed(void)

{ fprintf(stderr, "command_param_failed called!\n"); abort(); }
/* Generated stub for command_still_pending */
struct command_result *command_still_pending(struct command *cmd)

{ fprintf(stderr, "command_still_pending called!\n"); abort(); }
/* Generated stub for command_success */
struct command_result *command_success(struct command *cmd UNNEEDED,
				       struct json_stream *response)

{ fprintf(stderr, "command_success called!\n"); abort(); }
/* Generated stub for connect_succeeded */
void connect_succeeded(struct lightningd *ld UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "connect_succeeded called!\n"); abort(); }
/* Generated stub for delay_then_reconnect */
void delay_then_reconnect(struct channel *channel UNNEEDED, u32 seconds_delay UNNEEDED,
			  const struct wireaddr_internal *addrhint TAKES UNNEEDED)
{ fprintf(stderr, "delay_then_reconnect called!\n"); abort(); }
/* Generated stub for dup_fee_states */
struct fee_states *dup_fee_states(const tal_t *ctx UNNEEDED,
				  const struct fee_states *fee_states TAKES UNNEEDED)
{ fprintf(stderr, "dup_fee_states called!\n"); abort(); }
/* Generated stub for encode_scriptpubkey_to_addr */
char *encode_scriptpubkey_to_addr(const tal_t *ctx UNNEEDED,
				  const struct chainparams *chainparams UNNEEDED,
				  const u8 *scriptPubkey UNNEEDED)
{ fprintf(stderr, "encode_scriptpubkey_to_addr called!\n"); abort(); }
/* Generated stub for failmsg_incorrect_or_unknown */
const u8 *failmsg_incorrect_or_unknown(const tal_t *ctx UNNEEDED,
				       const struct htlc_in *hin UNNEEDED)
{ fprintf(stderr, "failmsg_incorrect_or_unknown called!\n"); abort(); }
/* Generated stub for fatal */
void   fatal(const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "fatal called!\n"); abort(); }
/* Generated stub for featurebits_or */
u8 *featurebits_or(const tal_t *ctx UNNEEDED, const u8 *f1 TAKES UNNEEDED, const u8 *f2 TAKES UNNEEDED)
{ fprintf(stderr, "featurebits_or called!\n"); abort(); }
/* Generated stub for feature_is_set */
bool feature_is_set(const u8 *features UNNEEDED, size_t bit UNNEEDED)
{ fprintf(stderr, "feature_is_set called!\n"); abort(); }
/* Generated stub for fixup_htlcs_out */
void fixup_htlcs_out(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "fixup_htlcs_out called!\n"); abort(); }
/* Generated stub for fmt_wireaddr_without_port */
char *fmt_wireaddr_without_port(const tal_t *ctx UNNEEDED, const struct wireaddr *a UNNEEDED)
{ fprintf(stderr, "fmt_wireaddr_without_port called!\n"); abort(); }
/* Generated stub for fromwire_channel_dev_memleak_reply */
bool fromwire_channel_dev_memleak_reply(const void *p UNNEEDED, bool *leak UNNEEDED)
{ fprintf(stderr, "fromwire_channel_dev_memleak_reply called!\n"); abort(); }
/* Generated stub for fromwire_connect_peer_connected */
bool fromwire_connect_peer_connected(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct node_id *id UNNEEDED, struct wireaddr_internal *addr UNNEEDED, struct per_peer_state **pps UNNEEDED, u8 **features UNNEEDED)
{ fprintf(stderr, "fromwire_connect_peer_connected called!\n"); abort(); }
/* Generated stub for fromwire_gossip_get_incoming_channels_reply */
bool fromwire_gossip_get_incoming_channels_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct route_info **public_route_info UNNEEDED, bool **public_deadends UNNEEDED, struct route_info **private_route_info UNNEEDED, bool **private_deadends UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_get_incoming_channels_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_get_channel_basepoints_reply */
bool fromwire_hsm_get_channel_basepoints_reply(const void *p UNNEEDED, struct basepoints *basepoints UNNEEDED, struct pubkey *funding_pubkey UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_get_channel_basepoints_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_sign_commitment_tx_reply */
bool fromwire_hsm_sign_commitment_tx_reply(const void *p UNNEEDED, struct bitcoin_signature *sig UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_sign_commitment_tx_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_sign_invoice_reply */
bool fromwire_hsm_sign_invoice_reply(const void *p UNNEEDED, secp256k1_ecdsa_recoverable_signature *sig UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_sign_invoice_reply called!\n"); abort(); }
/* Generated stub for fromwire_onchain_dev_memleak_reply */
bool fromwire_onchain_dev_memleak_reply(const void *p UNNEEDED, bool *leak UNNEEDED)
{ fprintf(stderr, "fromwire_onchain_dev_memleak_reply called!\n"); abort(); }
/* Generated stub for get_block_height */
u32 get_block_height(const struct chain_topology *topo UNNEEDED)
{ fprintf(stderr, "get_block_height called!\n"); abort(); }
/* Generated stub for get_feerate */
u32 get_feerate(const struct fee_states *fee_states UNNEEDED,
		enum side funder UNNEEDED,
		enum side side UNNEEDED)
{ fprintf(stderr, "get_feerate called!\n"); abort(); }
/* Generated stub for get_offered_bolt11features */
u8 *get_offered_bolt11features(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "get_offered_bolt11features called!\n"); abort(); }
/* Generated stub for htlc_is_trimmed */
bool htlc_is_trimmed(enum side htlc_owner UNNEEDED,
		     struct amount_msat htlc_amount UNNEEDED,
		     u32 feerate_per_kw UNNEEDED,
		     struct amount_sat dust_limit UNNEEDED,
		     enum side side UNNEEDED)
{ fprintf(stderr, "htlc_is_trimmed called!\n"); abort(); }
/* Generated stub for htlc_set_fail */
void htlc_set_fail(struct htlc_set *set UNNEEDED, const u8 *failmsg TAKES UNNEEDED)
{ fprintf(stderr, "htlc_set_fail called!\n"); abort(); }
/* Generated stub for htlc_set_fulfill */
void htlc_set_fulfill(struct htlc_set *set UNNEEDED, const struct preimage *preimage UNNEEDED)
{ fprintf(stderr, "htlc_set_fulfill called!\n"); abort(); }
/* Generated stub for json_add_log */
void json_add_log(struct json_stream *result UNNEEDED,
		  const struct log_book *lr UNNEEDED,
		  const struct node_id *node_id UNNEEDED,
		  enum log_level minlevel UNNEEDED)
{ fprintf(stderr, "json_add_log called!\n"); abort(); }
/* Generated stub for json_add_member */
void json_add_member(struct json_stream *js UNNEEDED,
		     const char *fieldname UNNEEDED,
		     bool quote UNNEEDED,
		     const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "json_add_member called!\n"); abort(); }
/* Generated stub for json_add_uncommitted_channel */
void json_add_uncommitted_channel(struct json_stream *response UNNEEDED,
				  const struct uncommitted_channel *uc UNNEEDED)
{ fprintf(stderr, "json_add_uncommitted_channel called!\n"); abort(); }
/* Generated stub for json_array_end */
void json_array_end(struct json_stream *js UNNEEDED)
{ fprintf(stderr, "json_array_end called!\n"); abort(); }
/* Generated stub for json_array_start */
void json_array_start(struct json_stream *js UNNEEDED, const char *fieldname UNNEEDED)
{ fprintf(stderr, "json_array_start called!\n"); abort(); }
/* Generated stub for json_member_direct */
char *json_member_direct(struct json_stream *js UNNEEDED,
			 const char *fieldname UNNEEDED, size_t extra UNNEEDED)
{ fprintf(stderr, "json_member_direct called!\n"); abort(); }
/* Generated stub for json_object_end */
void json_object_end(struct json_stream *js UNNEEDED)
{ fprintf(stderr, "json_object_end called!\n"); abort(); }
/* Generated stub for json_object_start */
void json_object_start(struct json_stream *ks UNNEEDED, const char *fieldname UNNEEDED)
{ fprintf(stderr, "json_object_start called!\n"); abort(); }
/* Generated stub for json_stream_fail */
struct json_stream *json_stream_fail(struct command *cmd UNNEEDED,
				     errcode_t code UNNEEDED,
				     const char *errmsg UNNEEDED)
{ fprintf(stderr, "json_stream_fail called!\n"); abort(); }
/* Generated stub for json_stream_success */
struct json_stream *json_stream_success(struct command *cmd UNNEEDED)
{ fprintf(stderr, "json_stream_success called!\n"); abort(); }
/* Generated stub for json_to_address_scriptpubkey */
enum address_parse_result json_to_address_scriptpubkey(const tal_t *ctx UNNEEDED,
			     const struct chainparams *chainparams UNNEEDED,
			     const char *buffer UNNEEDED,
			     const jsmntok_t *tok UNNEEDED, const u8 **scriptpubkey UNNEEDED)
{ fprintf(stderr, "json_to_address_scriptpubkey called!\n"); abort(); }
/* Generated stub for json_tok_channel_id */
bool json_tok_channel_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			 struct channel_id *cid UNNEEDED)
{ fprintf(stderr, "json_tok_channel_id called!\n"); abort(); }
/* Generated stub for json_to_node_id */
bool json_to_node_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			       struct node_id *id UNNEEDED)
{ fprintf(stderr, "json_to_node_id called!\n"); abort(); }
/* Generated stub for json_to_short_channel_id */
bool json_to_short_channel_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			      struct short_channel_id *scid UNNEEDED)
{ fprintf(stderr, "json_to_short_channel_id called!\n"); abort(); }
/* Generated stub for kill_uncommitted_channel */
void kill_uncommitted_channel(struct uncommitted_channel *uc UNNEEDED,
			      const char *why UNNEEDED)
{ fprintf(stderr, "kill_uncommitted_channel called!\n"); abort(); }
/* Generated stub for log_ */
void log_(struct log *log UNNEEDED, enum log_level level UNNEEDED,
	  const struct node_id *node_id UNNEEDED,
	  bool call_notifier UNNEEDED,
	  const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "log_ called!\n"); abort(); }
/* Generated stub for new_bolt11 */
struct bolt11 *new_bolt11(const tal_t *ctx UNNEEDED,
			  const struct amount_msat *msat TAKES UNNEEDED)
{ fprintf(stderr, "new_bolt11 called!\n"); abort(); }
/* Generated stub for new_log */
struct log *new_log(const tal_t *ctx UNNEEDED, struct log_book *record UNNEEDED,
		    const struct node_id *default_node_id UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "new_log called!\n"); abort(); }
/* Generated stub for new_reltimer_ */
struct oneshot *new_reltimer_(struct timers *timers UNNEEDED,
			      const tal_t *ctx UNNEEDED,
			      struct timerel expire UNNEEDED,
			      void (*cb)(void *) UNNEEDED, void *arg UNNEEDED)
{ fprintf(stderr, "new_reltimer_ called!\n"); abort(); }
/* Generated stub for node_id_cmp */
int node_id_cmp(const struct node_id *a UNNEEDED, const struct node_id *b UNNEEDED)
{ fprintf(stderr, "node_id_cmp called!\n"); abort(); }
/* Generated stub for node_id_to_hexstr */
char *node_id_to_hexstr(const tal_t *ctx UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "node_id_to_hexstr called!\n"); abort(); }
/* Generated stub for notify_connect */
void notify_connect(struct lightningd *ld UNNEEDED, struct node_id *nodeid UNNEEDED,
		    struct wireaddr_internal *addr UNNEEDED)
{ fprintf(stderr, "notify_connect called!\n"); abort(); }
/* Generated stub for notify_disconnect */
void notify_disconnect(struct lightningd *ld UNNEEDED, struct node_id *nodeid UNNEEDED)
{ fprintf(stderr, "notify_disconnect called!\n"); abort(); }
/* Generated stub for notify_invoice_payment */
void notify_invoice_payment(struct lightningd *ld UNNEEDED, struct amount_msat amount UNNEEDED,
			    struct preimage preimage UNNEEDED, const struct json_escape *label UNNEEDED)
{ fprintf(stderr, "notify_invoice_payment called!\n"); abort(); }
/* Generated stub for onchaind_funding_spent */
enum watch_result onchaind_funding_spent(struct channel *channel UNNEEDED,
					 const struct bitcoin_tx *tx UNNEEDED,
					 u32 blockheight UNNEEDED)
{ fprintf(stderr, "onchaind_funding_spent called!\n"); abort(); }
/* Generated stub for param */
bool param(struct command *cmd UNNEEDED, const char *buffer UNNEEDED,
	   const jsmntok_t params[] UNNEEDED, ...)
{ fprintf(stderr, "param called!\n"); abort(); }
/* Generated stub for param_array */
struct command_result *param_array(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				   const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				   const jsmntok_t **arr UNNEEDED)
{ fprintf(stderr, "param_array called!\n"); abort(); }
/* Generated stub for param_bin_from_hex */
struct command_result *param_bin_from_hex(struct command *cmd UNNEEDED, const char *name UNNEEDED,
					  const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
					  u8 **bin UNNEEDED)
{ fprintf(stderr, "param_bin_from_hex called!\n"); abort(); }
/* Generated stub for param_bitcoin_address */
struct command_result *param_bitcoin_address(struct command *cmd UNNEEDED,
					     const char *name UNNEEDED,
					     const char *buffer UNNEEDED,
					     const jsmntok_t *tok UNNEEDED,
					     const u8 **scriptpubkey UNNEEDED)
{ fprintf(stderr, "param_bitcoin_address called!\n"); abort(); }
/* Generated stub for param_bool */
struct command_result *param_bool(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				  const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				  bool **b UNNEEDED)
{ fprintf(stderr, "param_bool called!\n"); abort(); }
/* Generated stub for param_channel_id */
struct command_result *param_channel_id(struct command *cmd UNNEEDED,
					const char *name UNNEEDED,
					const char *buffer UNNEEDED,
					const jsmntok_t *tok UNNEEDED,
					struct channel_id **cid UNNEEDED)
{ fprintf(stderr, "param_channel_id called!\n"); abort(); }
/* Generated stub for param_escaped_string */
struct command_result *param_escaped_string(struct command *cmd UNNEEDED,
					    const char *name UNNEEDED,
					    const char *buffer UNNEEDED,
					    const jsmntok_t *tok UNNEEDED,
					    const char **str UNNEEDED)
{ fprintf(stderr, "param_escaped_string called!\n"); abort(); }
/* Generated stub for param_label */
struct command_result *param_label(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				   const char * buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				   struct json_escape **label UNNEEDED)
{ fprintf(stderr, "param_label called!\n"); abort(); }
/* Generated stub for param_loglevel */
struct command_result *param_loglevel(struct command *cmd UNNEEDED,
				      const char *name UNNEEDED,
				      const char *buffer UNNEEDED,
				      const jsmntok_t *tok UNNEEDED,
				      enum log_level **level UNNEEDED)
{ fprintf(stderr, "param_loglevel called!\n"); abort(); }
/* Generated stub for param_msat */
struct command_result *param_msat(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				  const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				  struct amount_msat **msat UNNEEDED)
{ fprintf(stderr, "param_msat called!\n"); abort(); }
/* Generated stub for param_node_id */
struct command_result *param_node_id(struct command *cmd UNNEEDED,
				     const char *name UNNEEDED,
				     const char *buffer UNNEEDED,
				     const jsmntok_t *tok UNNEEDED,
				     struct node_id **id UNNEEDED)
{ fprintf(stderr, "param_node_id called!\n"); abort(); }
/* Generated stub for param_number */
struct command_result *param_number(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				    const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				    unsigned int **num UNNEEDED)
{ fprintf(stderr, "param_number called!\n"); abort(); }
/* Generated stub for param_short_channel_id */
struct command_result *param_short_channel_id(struct command *cmd UNNEEDED,
					      const char *name UNNEEDED,
					      const char *buffer UNNEEDED,
					      const jsmntok_t *tok UNNEEDED,
					      struct short_channel_id **scid UNNEEDED)
{ fprintf(stderr, "param_short_channel_id called!\n"); abort(); }
/* Generated stub for param_string */
struct command_result *param_string(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				    const char * buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				    const char **str UNNEEDED)
{ fprintf(stderr, "param_string called!\n"); abort(); }
/* Generated stub for param_tok */
struct command_result *param_tok(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				 const char *buffer UNNEEDED, const jsmntok_t * tok UNNEEDED,
				 const jsmntok_t **out UNNEEDED)
{ fprintf(stderr, "param_tok called!\n"); abort(); }
/* Generated stub for param_u64 */
struct command_result *param_u64(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				 const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				 uint64_t **num UNNEEDED)
{ fprintf(stderr, "param_u64 called!\n"); abort(); }
/* Generated stub for peer_get_owning_subd */
struct subd *peer_get_owning_subd(struct peer *peer UNNEEDED)
{ fprintf(stderr, "peer_get_owning_subd called!\n"); abort(); }
/* Generated stub for peer_memleak_done */
void peer_memleak_done(struct command *cmd UNNEEDED, struct subd *leaker UNNEEDED)
{ fprintf(stderr, "peer_memleak_done called!\n"); abort(); }
/* Generated stub for peer_start_channeld */
void peer_start_channeld(struct channel *channel UNNEEDED,
			 struct per_peer_state *pps UNNEEDED,
			 const u8 *funding_signed UNNEEDED,
			 bool reconnected UNNEEDED)
{ fprintf(stderr, "peer_start_channeld called!\n"); abort(); }
/* Generated stub for peer_start_closingd */
void peer_start_closingd(struct channel *channel UNNEEDED,
			 struct per_peer_state *pps UNNEEDED,
			 bool reconnected UNNEEDED,
			 const u8 *channel_reestablish UNNEEDED)
{ fprintf(stderr, "peer_start_closingd called!\n"); abort(); }
/* Generated stub for peer_start_openingd */
void peer_start_openingd(struct peer *peer UNNEEDED,
			 struct per_peer_state *pps UNNEEDED,
			 const u8 *msg UNNEEDED)
{ fprintf(stderr, "peer_start_openingd called!\n"); abort(); }
/* Generated stub for per_peer_state_set_fds */
void per_peer_state_set_fds(struct per_peer_state *pps UNNEEDED,
			    int peer_fd UNNEEDED, int gossip_fd UNNEEDED, int gossip_store_fd UNNEEDED)
{ fprintf(stderr, "per_peer_state_set_fds called!\n"); abort(); }
/* Generated stub for plugin_hook_call_ */
void plugin_hook_call_(struct lightningd *ld UNNEEDED, const struct plugin_hook *hook UNNEEDED,
		       void *payload UNNEEDED, void *cb_arg UNNEEDED)
{ fprintf(stderr, "plugin_hook_call_ called!\n"); abort(); }
/* Generated stub for plugins_collect_featurebits */
u8 *plugins_collect_featurebits(const tal_t *ctx UNNEEDED, const struct plugins *plugins UNNEEDED,
				enum plugin_features_type type UNNEEDED)
{ fprintf(stderr, "plugins_collect_featurebits called!\n"); abort(); }
/* Generated stub for subd_release_channel */
void subd_release_channel(struct subd *owner UNNEEDED, void *channel UNNEEDED)
{ fprintf(stderr, "subd_release_channel called!\n"); abort(); }
/* Generated stub for subd_req_ */
void subd_req_(const tal_t *ctx UNNEEDED,
	       struct subd *sd UNNEEDED,
	       const u8 *msg_out UNNEEDED,
	       int fd_out UNNEEDED, size_t num_fds_in UNNEEDED,
	       void (*replycb)(struct subd * UNNEEDED, const u8 * UNNEEDED, const int * UNNEEDED, void *) UNNEEDED,
	       void *replycb_data UNNEEDED)
{ fprintf(stderr, "subd_req_ called!\n"); abort(); }
/* Generated stub for subd_send_msg */
void subd_send_msg(struct subd *sd UNNEEDED, const u8 *msg_out UNNEEDED)
{ fprintf(stderr, "subd_send_msg called!\n"); abort(); }
/* Generated stub for towire_channel_dev_memleak */
u8 *towire_channel_dev_memleak(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_channel_dev_memleak called!\n"); abort(); }
/* Generated stub for towire_channel_dev_reenable_commit */
u8 *towire_channel_dev_reenable_commit(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_channel_dev_reenable_commit called!\n"); abort(); }
/* Generated stub for towire_channel_send_shutdown */
u8 *towire_channel_send_shutdown(const tal_t *ctx UNNEEDED, const u8 *shutdown_scriptpubkey UNNEEDED)
{ fprintf(stderr, "towire_channel_send_shutdown called!\n"); abort(); }
/* Generated stub for towire_channel_specific_feerates */
u8 *towire_channel_specific_feerates(const tal_t *ctx UNNEEDED, u32 feerate_base UNNEEDED, u32 feerate_ppm UNNEEDED)
{ fprintf(stderr, "towire_channel_specific_feerates called!\n"); abort(); }
/* Generated stub for towire_connectctl_connect_to_peer */
u8 *towire_connectctl_connect_to_peer(const tal_t *ctx UNNEEDED, const struct node_id *id UNNEEDED, u32 seconds_waited UNNEEDED, const struct wireaddr_internal *addrhint UNNEEDED)
{ fprintf(stderr, "towire_connectctl_connect_to_peer called!\n"); abort(); }
/* Generated stub for towire_connectctl_peer_disconnected */
u8 *towire_connectctl_peer_disconnected(const tal_t *ctx UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "towire_connectctl_peer_disconnected called!\n"); abort(); }
/* Generated stub for towire_errorfmt */
u8 *towire_errorfmt(const tal_t *ctx UNNEEDED,
		    const struct channel_id *channel UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_errorfmt called!\n"); abort(); }
/* Generated stub for towire_gossip_get_incoming_channels */
u8 *towire_gossip_get_incoming_channels(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_gossip_get_incoming_channels called!\n"); abort(); }
/* Generated stub for towire_hsm_get_channel_basepoints */
u8 *towire_hsm_get_channel_basepoints(const tal_t *ctx UNNEEDED, const struct node_id *peerid UNNEEDED, u64 dbid UNNEEDED)
{ fprintf(stderr, "towire_hsm_get_channel_basepoints called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_commitment_tx */
u8 *towire_hsm_sign_commitment_tx(const tal_t *ctx UNNEEDED, const struct node_id *peer_id UNNEEDED, u64 channel_dbid UNNEEDED, const struct bitcoin_tx *tx UNNEEDED, const struct pubkey *remote_funding_key UNNEEDED, struct amount_sat funding_amount UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_commitment_tx called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_invoice */
u8 *towire_hsm_sign_invoice(const tal_t *ctx UNNEEDED, const u8 *u5bytes UNNEEDED, const u8 *hrp UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_invoice called!\n"); abort(); }
/* Generated stub for towire_onchain_dev_memleak */
u8 *towire_onchain_dev_memleak(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_onchain_dev_memleak called!\n"); abort(); }
/* Generated stub for towire_temporary_node_failure */
u8 *towire_temporary_node_failure(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_temporary_node_failure called!\n"); abort(); }
/* Generated stub for txfilter_add_scriptpubkey */
void txfilter_add_scriptpubkey(struct txfilter *filter UNNEEDED, const u8 *script TAKES UNNEEDED)
{ fprintf(stderr, "txfilter_add_scriptpubkey called!\n"); abort(); }
/* Generated stub for version */
const char *version(void)
{ fprintf(stderr, "version called!\n"); abort(); }
/* Generated stub for wallet_annotate_txout */
void wallet_annotate_txout(struct wallet *w UNNEEDED, const struct bitcoin_txid *txid UNNEEDED,
			   int outnum UNNEEDED, enum wallet_tx_type type UNNEEDED, u64 channel UNNEEDED)
{ fprintf(stderr, "wallet_annotate_txout called!\n"); abort(); }
/* Generated stub for wallet_channel_close */
void wallet_channel_close(struct wallet *w UNNEEDED, u64 wallet_id UNNEEDED)
{ fprintf(stderr, "wallet_channel_close called!\n"); abort(); }
/* Generated stub for wallet_channel_save */
void wallet_channel_save(struct wallet *w UNNEEDED, struct channel *chan UNNEEDED)
{ fprintf(stderr, "wallet_channel_save called!\n"); abort(); }
/* Generated stub for wallet_channel_stats_load */
void wallet_channel_stats_load(struct wallet *w UNNEEDED, u64 cdbid UNNEEDED, struct channel_stats *stats UNNEEDED)
{ fprintf(stderr, "wallet_channel_stats_load called!\n"); abort(); }
/* Generated stub for wallet_channeltxs_add */
void wallet_channeltxs_add(struct wallet *w UNNEEDED, struct channel *chan UNNEEDED,
			    const int type UNNEEDED, const struct bitcoin_txid *txid UNNEEDED,
			   const u32 input_num UNNEEDED, const u32 blockheight UNNEEDED)
{ fprintf(stderr, "wallet_channeltxs_add called!\n"); abort(); }
/* Generated stub for wallet_htlcs_load_in_for_channel */
bool wallet_htlcs_load_in_for_channel(struct wallet *wallet UNNEEDED,
				      struct channel *chan UNNEEDED,
				      struct htlc_in_map *htlcs_in UNNEEDED)
{ fprintf(stderr, "wallet_htlcs_load_in_for_channel called!\n"); abort(); }
/* Generated stub for wallet_htlcs_load_out_for_channel */
bool wallet_htlcs_load_out_for_channel(struct wallet *wallet UNNEEDED,
				       struct channel *chan UNNEEDED,
				       struct htlc_out_map *htlcs_out UNNEEDED,
				       struct htlc_in_map *remaining_htlcs_in UNNEEDED)
{ fprintf(stderr, "wallet_htlcs_load_out_for_channel called!\n"); abort(); }
/* Generated stub for wallet_init_channels */
bool wallet_init_channels(struct wallet *w UNNEEDED)
{ fprintf(stderr, "wallet_init_channels called!\n"); abort(); }
/* Generated stub for wallet_invoice_create */
bool wallet_invoice_create(struct wallet *wallet UNNEEDED,
			   struct invoice *pinvoice UNNEEDED,
			   const struct amount_msat *msat TAKES UNNEEDED,
			   const struct json_escape *label TAKES UNNEEDED,
			   u64 expiry UNNEEDED,
			   const char *b11enc UNNEEDED,
			   const char *description UNNEEDED,
			   const u8 *features UNNEEDED,
			   const struct preimage *r UNNEEDED,
			   const struct sha256 *rhash UNNEEDED)
{ fprintf(stderr, "wallet_invoice_create called!\n"); abort(); }
/* Generated stub for wallet_invoice_delete */
bool wallet_invoice_delete(struct wallet *wallet UNNEEDED,
			   struct invoice invoice UNNEEDED)
{ fprintf(stderr, "wallet_invoice_delete called!\n"); abort(); }
/* Generated stub for wallet_invoice_delete_expired */
void wallet_invoice_delete_expired(struct wallet *wallet UNNEEDED,
				   u64 max_expiry_time UNNEEDED)
{ fprintf(stderr, "wallet_invoice_delete_expired called!\n"); abort(); }
/* Generated stub for wallet_invoice_details */
const struct invoice_details *wallet_invoice_details(const tal_t *ctx UNNEEDED,
						     struct wallet *wallet UNNEEDED,
						     struct invoice invoice UNNEEDED)
{ fprintf(stderr, "wallet_invoice_details called!\n"); abort(); }
/* Generated stub for wallet_invoice_find_by_label */
bool wallet_invoice_find_by_label(struct wallet *wallet UNNEEDED,
				  struct invoice *pinvoice UNNEEDED,
				  const struct json_escape *label UNNEEDED)
{ fprintf(stderr, "wallet_invoice_find_by_label called!\n"); abort(); }
/* Generated stub for wallet_invoice_find_by_rhash */
bool wallet_invoice_find_by_rhash(struct wallet *wallet UNNEEDED,
				  struct invoice *pinvoice UNNEEDED,
				  const struct sha256 *rhash UNNEEDED)
{ fprintf(stderr, "wallet_invoice_find_by_rhash called!\n"); abort(); }
/* Generated stub for wallet_invoice_find_unpaid */
bool wallet_invoice_find_unpaid(struct wallet *wallet UNNEEDED,
				struct invoice *pinvoice UNNEEDED,
				const struct sha256 *rhash UNNEEDED)
{ fprintf(stderr, "wallet_invoice_find_unpaid called!\n"); abort(); }
/* Generated stub for wallet_invoice_iterate */
bool wallet_invoice_iterate(struct wallet *wallet UNNEEDED,
			    struct invoice_iterator *it UNNEEDED)
{ fprintf(stderr, "wallet_invoice_iterate called!\n"); abort(); }
/* Generated stub for wallet_invoice_iterator_deref */
const struct invoice_details *wallet_invoice_iterator_deref(const tal_t *ctx UNNEEDED,
			      struct wallet *wallet UNNEEDED,
			      const struct invoice_iterator *it UNNEEDED)
{ fprintf(stderr, "wallet_invoice_iterator_deref called!\n"); abort(); }
/* Generated stub for wallet_invoice_resolve */
void wallet_invoice_resolve(struct wallet *wallet UNNEEDED,
			    struct invoice invoice UNNEEDED,
			    struct amount_msat received UNNEEDED)
{ fprintf(stderr, "wallet_invoice_resolve called!\n"); abort(); }
/* Generated stub for wallet_invoice_waitany */
void wallet_invoice_waitany(const tal_t *ctx UNNEEDED,
			    struct wallet *wallet UNNEEDED,
			    u64 lastpay_index UNNEEDED,
			    void (*cb)(const struct invoice * UNNEEDED, void*) UNNEEDED,
			    void *cbarg UNNEEDED)
{ fprintf(stderr, "wallet_invoice_waitany called!\n"); abort(); }
/* Generated stub for wallet_invoice_waitone */
void wallet_invoice_waitone(const tal_t *ctx UNNEEDED,
			    struct wallet *wallet UNNEEDED,
			    struct invoice invoice UNNEEDED,
			    void (*cb)(const struct invoice * UNNEEDED, void*) UNNEEDED,
			    void *cbarg UNNEEDED)
{ fprintf(stderr, "wallet_invoice_waitone called!\n"); abort(); }
/* Generated stub for wallet_peer_delete */
void wallet_peer_delete(struct wallet *w UNNEEDED, u64 peer_dbid UNNEEDED)
{ fprintf(stderr, "wallet_peer_delete called!\n"); abort(); }
/* Generated stub for wallet_total_forward_fees */
struct amount_msat wallet_total_forward_fees(struct wallet *w UNNEEDED)
{ fprintf(stderr, "wallet_total_forward_fees called!\n"); abort(); }
/* Generated stub for wallet_transaction_add */
void wallet_transaction_add(struct wallet *w UNNEEDED, const struct bitcoin_tx *tx UNNEEDED,
			    const u32 blockheight UNNEEDED, const u32 txindex UNNEEDED)
{ fprintf(stderr, "wallet_transaction_add called!\n"); abort(); }
/* Generated stub for wallet_transaction_annotate */
void wallet_transaction_annotate(struct wallet *w UNNEEDED,
				 const struct bitcoin_txid *txid UNNEEDED,
				 enum wallet_tx_type type UNNEEDED, u64 channel_id UNNEEDED)
{ fprintf(stderr, "wallet_transaction_annotate called!\n"); abort(); }
/* Generated stub for wallet_transaction_locate */
struct txlocator *wallet_transaction_locate(const tal_t *ctx UNNEEDED, struct wallet *w UNNEEDED,
					    const struct bitcoin_txid *txid UNNEEDED)
{ fprintf(stderr, "wallet_transaction_locate called!\n"); abort(); }
/* Generated stub for watch_txid */
struct txwatch *watch_txid(const tal_t *ctx UNNEEDED,
			   struct chain_topology *topo UNNEEDED,
			   struct channel *channel UNNEEDED,
			   const struct bitcoin_txid *txid UNNEEDED,
			   enum watch_result (*cb)(struct lightningd *ld UNNEEDED,
						   struct channel *channel UNNEEDED,
						   const struct bitcoin_txid * UNNEEDED,
						   const struct bitcoin_tx * UNNEEDED,
						   unsigned int depth))
{ fprintf(stderr, "watch_txid called!\n"); abort(); }
/* Generated stub for watch_txo */
struct txowatch *watch_txo(const tal_t *ctx UNNEEDED,
			   struct chain_topology *topo UNNEEDED,
			   struct channel *channel UNNEEDED,
			   const struct bitcoin_txid *txid UNNEEDED,
			   unsigned int output UNNEEDED,
			   enum watch_result (*cb)(struct channel *channel UNNEEDED,
						   const struct bitcoin_tx *tx UNNEEDED,
						   size_t input_num UNNEEDED,
						   const struct block *block))
{ fprintf(stderr, "watch_txo called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

#if DEVELOPER
/* Generated stub for dev_disconnect_permanent */
bool dev_disconnect_permanent(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "dev_disconnect_permanent called!\n"); abort(); }
#endif

static void add_inchan(struct route_info **inchans, int n)
{
	struct route_info r;
	memset(&r.pubkey, n, sizeof(r.pubkey));
	memset(&r.short_channel_id, n, sizeof(r.short_channel_id));
	r.fee_base_msat = r.fee_proportional_millionths = r.cltv_expiry_delta
		= n;
	tal_arr_expand(inchans, r);
}

static void add_peer(struct lightningd *ld, int n, enum channel_state state,
		     bool connected)
{
	struct peer *peer = tal(ld, struct peer);
	struct channel *c = tal(peer, struct channel);

	memset(&peer->id, n, sizeof(peer->id));
	list_head_init(&peer->channels);
	list_add_tail(&ld->peers, &peer->list);

	c->state = state;
	c->owner = connected ? (void *)peer : NULL;
	/* Channel has incoming capacity n*1000 - 1 millisatoshi */
	c->funding.satoshis = n+1;
	c->our_msat = AMOUNT_MSAT(1);
	c->our_config.channel_reserve = AMOUNT_SAT(1);
	c->channel_info.their_config.channel_reserve = AMOUNT_SAT(0);
	list_add_tail(&peer->channels, &c->list);
}

/* There *is* padding in this structure, after pubkey and after cltv_expiry_delta. */
STRUCTEQ_DEF(route_info,
	     ALIGNOF(struct short_channel_id) - 1 - sizeof(u16),
	     pubkey,
	     cltv_expiry_delta,
	     short_channel_id,
	     fee_base_msat,
	     fee_proportional_millionths);

int main(void)
{
	struct lightningd *ld;
	bool any_offline;
	struct route_info *inchans;
	bool *deadends;
	struct route_info **ret;
	size_t n;

	setup_locale();
	secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY
						 | SECP256K1_CONTEXT_SIGN);
	setup_tmpctx();
	ld = tal(tmpctx, struct lightningd);

	list_head_init(&ld->peers);

	inchans = tal_arr(tmpctx, struct route_info, 0);
	deadends = tal_arrz(tmpctx, bool, 100);

	/* 1. Nothing to choose from -> NULL result. */
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, deadends, &any_offline) == NULL);
	assert(any_offline == false);

	/* 2. inchan but no corresponding peer -> NULL result. */
	add_inchan(&inchans, 0);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, deadends, &any_offline) == NULL);
	assert(any_offline == false);

	/* 3. inchan but its peer in awaiting lockin -> NULL result. */
	add_peer(ld, 0, CHANNELD_AWAITING_LOCKIN, true);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, deadends, &any_offline) == NULL);
	assert(any_offline == false);

	/* 4. connected peer but no corresponding inchan -> NULL result. */
	add_peer(ld, 1, CHANNELD_NORMAL, true);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, deadends, &any_offline) == NULL);
	assert(any_offline == false);

	/* 5. inchan but its peer (replaced with one) offline -> NULL result. */
	list_del_from(&ld->peers, &list_tail(&ld->peers, struct peer, list)->list);
	add_peer(ld, 1, CHANNELD_NORMAL, false);
	add_inchan(&inchans, 1);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, deadends, &any_offline) == NULL);
	assert(any_offline == true);

	/* 6. Finally, a correct peer! */
	add_inchan(&inchans, 2);
	add_peer(ld, 2, CHANNELD_NORMAL, true);

	ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, deadends, &any_offline);
	assert(tal_count(ret) == 1);
	assert(tal_count(ret[0]) == 1);
	assert(any_offline == true); /* Peer 1 is offline */
	assert(route_info_eq(ret[0], &inchans[2]));

	/* 7. Correct peer with just enough capacity_to_pay_us */
	ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1999), inchans, deadends, &any_offline);
	assert(tal_count(ret) == 1);
	assert(tal_count(ret[0]) == 1);
	assert(any_offline == false); /* Other candidate insufficient funds. */
	assert(route_info_eq(ret[0], &inchans[2]));

	/* 8. Not if we ask for too much! Our balance is 1msat. */
	ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(2000), inchans, deadends, &any_offline);
	assert(ret == NULL);
	assert(any_offline == false); /* Other candidate insufficient funds. */

	/* 9. Add another peer */
	add_inchan(&inchans, 3);
	add_peer(ld, 3, CHANNELD_NORMAL, true);

	/* Simulate selection ratios between excesses 25% and 50% of capacity*/
	for (size_t i = n = 0; i < 1000; i++) {
		ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1499), inchans, deadends, &any_offline);
		assert(tal_count(ret) == 1);
		assert(tal_count(ret[0]) == 1);
		assert(any_offline == false); /* Other candidate insufficient funds. */
		assert(route_info_eq(ret[0], &inchans[2])
		       || route_info_eq(ret[0], &inchans[3]));
		n += route_info_eq(ret[0], &inchans[2]);
	}

	/* Handwave over probability of this happening!  Within 20% */
	printf("Number of selections with excess 25 percent of capacity: %zu\n"
	       "Number of selections with excess 50 percent of capacity: %zu\n",
	       n, 1000 - n);
	assert(n > 333 - 66 && n < 333 + 66);

	/* 10. Last peer's capacity goes from 3 to 2 sat*/
		list_tail(&list_tail(&ld->peers, struct peer, list)->channels, struct channel, list)->
				channel_info.their_config.channel_reserve = AMOUNT_SAT(1);
		ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1499), inchans, deadends, &any_offline);

		/* Simulate selection ratios between excesses 25% and 75% of capacity*/
	for (size_t i = n = 0; i < 1000; i++) {
		ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1499), inchans, deadends, &any_offline);
		assert(tal_count(ret) == 1);
		assert(tal_count(ret[0]) == 1);
		assert(any_offline == false); /* Other candidate insufficient funds. */
		assert(route_info_eq(ret[0], &inchans[2])
		       || route_info_eq(ret[0], &inchans[3]));
		n += route_info_eq(ret[0], &inchans[2]);
	}

	/* Handwave over probability of this happening!  Within 20% */
	printf("Number of selections with excess 25 percent of capacity: %zu\n"
	       "Number of selections with excess 75 percent of capacity: %zu\n",
	       n, 1000 - n);
	assert(n > 250 - 50 && n < 250 + 50);

	/* No memory leaks please */
	secp256k1_context_destroy(secp256k1_ctx);
	tal_free(tmpctx);

	/* FIXME: Do BOLT comparison! */
	return 0;
}
