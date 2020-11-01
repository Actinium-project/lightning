int unused_main(int argc, char *argv[]);
#define main unused_main
#include "../queries.c"
#include "../gossip_generation.c"
#undef main
#include <common/json_stream.h>
#include <stdio.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for daemon_conn_read_next */
struct io_plan *daemon_conn_read_next(struct io_conn *conn UNNEEDED,
				      struct daemon_conn *dc UNNEEDED)
{ fprintf(stderr, "daemon_conn_read_next called!\n"); abort(); }
/* Generated stub for daemon_conn_wake */
void daemon_conn_wake(struct daemon_conn *dc UNNEEDED)
{ fprintf(stderr, "daemon_conn_wake called!\n"); abort(); }
/* Generated stub for decode_channel_update_timestamps */
struct channel_update_timestamps *decode_channel_update_timestamps(const tal_t *ctx UNNEEDED,
				 const struct tlv_reply_channel_range_tlvs_timestamps_tlv *timestamps_tlv UNNEEDED)
{ fprintf(stderr, "decode_channel_update_timestamps called!\n"); abort(); }
/* Generated stub for decode_scid_query_flags */
bigsize_t *decode_scid_query_flags(const tal_t *ctx UNNEEDED,
				   const struct tlv_query_short_channel_ids_tlvs_query_flags *qf UNNEEDED)
{ fprintf(stderr, "decode_scid_query_flags called!\n"); abort(); }
/* Generated stub for decode_short_ids */
struct short_channel_id *decode_short_ids(const tal_t *ctx UNNEEDED, const u8 *encoded UNNEEDED)
{ fprintf(stderr, "decode_short_ids called!\n"); abort(); }
/* Generated stub for find_peer */
struct peer *find_peer(struct daemon *daemon UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "find_peer called!\n"); abort(); }
/* Generated stub for fmt_wireaddr_without_port */
char *fmt_wireaddr_without_port(const tal_t *ctx UNNEEDED, const struct wireaddr *a UNNEEDED)
{ fprintf(stderr, "fmt_wireaddr_without_port called!\n"); abort(); }
/* Generated stub for fromwire_gossipd_dev_set_max_scids_encode_size */
bool fromwire_gossipd_dev_set_max_scids_encode_size(const void *p UNNEEDED, u32 *max UNNEEDED)
{ fprintf(stderr, "fromwire_gossipd_dev_set_max_scids_encode_size called!\n"); abort(); }
/* Generated stub for fromwire_gossipd_local_channel_update */
bool fromwire_gossipd_local_channel_update(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, bool *disable UNNEEDED, u16 *cltv_expiry_delta UNNEEDED, struct amount_msat *htlc_minimum_msat UNNEEDED, u32 *fee_base_msat UNNEEDED, u32 *fee_proportional_millionths UNNEEDED, struct amount_msat *htlc_maximum_msat UNNEEDED)
{ fprintf(stderr, "fromwire_gossipd_local_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_hsmd_cupdate_sig_reply */
bool fromwire_hsmd_cupdate_sig_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **cu UNNEEDED)
{ fprintf(stderr, "fromwire_hsmd_cupdate_sig_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsmd_node_announcement_sig_reply */
bool fromwire_hsmd_node_announcement_sig_reply(const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_hsmd_node_announcement_sig_reply called!\n"); abort(); }
/* Generated stub for get_node */
struct node *get_node(struct routing_state *rstate UNNEEDED,
		      const struct node_id *id UNNEEDED)
{ fprintf(stderr, "get_node called!\n"); abort(); }
/* Generated stub for gossip_store_get */
const u8 *gossip_store_get(const tal_t *ctx UNNEEDED,
			   struct gossip_store *gs UNNEEDED,
			   u64 offset UNNEEDED)
{ fprintf(stderr, "gossip_store_get called!\n"); abort(); }
/* Generated stub for gossip_time_now */
struct timeabs gossip_time_now(const struct routing_state *rstate UNNEEDED)
{ fprintf(stderr, "gossip_time_now called!\n"); abort(); }
/* Generated stub for handle_channel_update */
u8 *handle_channel_update(struct routing_state *rstate UNNEEDED, const u8 *update TAKES UNNEEDED,
			  struct peer *peer UNNEEDED,
			  struct short_channel_id *unknown_scid UNNEEDED)
{ fprintf(stderr, "handle_channel_update called!\n"); abort(); }
/* Generated stub for handle_node_announcement */
u8 *handle_node_announcement(struct routing_state *rstate UNNEEDED, const u8 *node UNNEEDED,
			     struct peer *peer UNNEEDED, bool *was_unknown UNNEEDED)
{ fprintf(stderr, "handle_node_announcement called!\n"); abort(); }
/* Generated stub for json_add_member */
void json_add_member(struct json_stream *js UNNEEDED,
		     const char *fieldname UNNEEDED,
		     bool quote UNNEEDED,
		     const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "json_add_member called!\n"); abort(); }
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
/* Generated stub for master_badmsg */
void master_badmsg(u32 type_expected UNNEEDED, const u8 *msg)
{ fprintf(stderr, "master_badmsg called!\n"); abort(); }
/* Generated stub for new_reltimer_ */
struct oneshot *new_reltimer_(struct timers *timers UNNEEDED,
			      const tal_t *ctx UNNEEDED,
			      struct timerel expire UNNEEDED,
			      void (*cb)(void *) UNNEEDED, void *arg UNNEEDED)
{ fprintf(stderr, "new_reltimer_ called!\n"); abort(); }
/* Generated stub for notleak_ */
void *notleak_(const void *ptr UNNEEDED, bool plus_children UNNEEDED)
{ fprintf(stderr, "notleak_ called!\n"); abort(); }
/* Generated stub for peer_supplied_good_gossip */
void peer_supplied_good_gossip(struct peer *peer UNNEEDED, size_t amount UNNEEDED)
{ fprintf(stderr, "peer_supplied_good_gossip called!\n"); abort(); }
/* Generated stub for queue_peer_from_store */
void queue_peer_from_store(struct peer *peer UNNEEDED,
			   const struct broadcastable *bcast UNNEEDED)
{ fprintf(stderr, "queue_peer_from_store called!\n"); abort(); }
/* Generated stub for queue_peer_msg */
void queue_peer_msg(struct peer *peer UNNEEDED, const u8 *msg TAKES UNNEEDED)
{ fprintf(stderr, "queue_peer_msg called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for status_fmt */
void status_fmt(enum log_level level UNNEEDED,
		const struct node_id *peer UNNEEDED,
		const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "status_fmt called!\n"); abort(); }
/* Generated stub for towire_errorfmt */
u8 *towire_errorfmt(const tal_t *ctx UNNEEDED,
		    const struct channel_id *channel UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_errorfmt called!\n"); abort(); }
/* Generated stub for towire_hsmd_cupdate_sig_req */
u8 *towire_hsmd_cupdate_sig_req(const tal_t *ctx UNNEEDED, const u8 *cu UNNEEDED)
{ fprintf(stderr, "towire_hsmd_cupdate_sig_req called!\n"); abort(); }
/* Generated stub for towire_hsmd_node_announcement_sig_req */
u8 *towire_hsmd_node_announcement_sig_req(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED)
{ fprintf(stderr, "towire_hsmd_node_announcement_sig_req called!\n"); abort(); }
/* Generated stub for towire_wireaddr */
void towire_wireaddr(u8 **pptr UNNEEDED, const struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "towire_wireaddr called!\n"); abort(); }
/* Generated stub for wire_sync_read */
u8 *wire_sync_read(const tal_t *ctx UNNEEDED, int fd UNNEEDED)
{ fprintf(stderr, "wire_sync_read called!\n"); abort(); }
/* Generated stub for wire_sync_write */
bool wire_sync_write(int fd UNNEEDED, const void *msg TAKES UNNEEDED)
{ fprintf(stderr, "wire_sync_write called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int main(void)
{
	u8 *update;
	setup_locale();

	update = tal_hexdata(NULL, "010276df7e70c63cc2b63ef1c062b99c6d934a80ef2fd4dae9e1d86d277f47674af3255a97fa52ade7f129263f591ed784996eba6383135896cc117a438c8029328206226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006700000100005d50f933000000900000000000000000000003e80000000a",
			     strlen("010276df7e70c63cc2b63ef1c062b99c6d934a80ef2fd4dae9e1d86d277f47674af3255a97fa52ade7f129263f591ed784996eba6383135896cc117a438c8029328206226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006700000100005d50f933000000900000000000000000000003e80000000a"));
	assert(crc32_of_update(update) == 0x1112fa30);
	tal_free(update);

	update = tal_hexdata(NULL, "010206737e9e18d3e4d0ab4066ccaecdcc10e648c5f1c5413f1610747e0d463fa7fa39c1b02ea2fd694275ecfefe4fe9631f24afd182ab75b805e16cd550941f858c06226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006d00000100005d50f935010000300000000000000000000000640000000b00000000000186a0",
			     strlen("010206737e9e18d3e4d0ab4066ccaecdcc10e648c5f1c5413f1610747e0d463fa7fa39c1b02ea2fd694275ecfefe4fe9631f24afd182ab75b805e16cd550941f858c06226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006d00000100005d50f935010000300000000000000000000000640000000b00000000000186a0"));
	assert(crc32_of_update(update) == 0xf32ce968);
	tal_free(update);
	return 0;
}
