/* This file was generated by generate-wire.py */
/* Do not modify this file! Modify the _csv file it was generated from. */
/* Original template can be found at tools/gen/header_template */

#ifndef LIGHTNING_CONNECTD_CONNECTD_GOSSIPD_WIREGEN_H
#define LIGHTNING_CONNECTD_CONNECTD_GOSSIPD_WIREGEN_H
#include <ccan/tal/tal.h>
#include <wire/tlvstream.h>
#include <wire/wire.h>
#include <common/node_id.h>
#include <common/per_peer_state.h>
#include <common/wireaddr.h>

enum connectd_gossipd_wire {
        /*  Communication between gossipd and connectd. */
        WIRE_GOSSIPD_NEW_PEER = 4000,
        /*  if success: + gossip fd and gossip_store fd */
        WIRE_GOSSIPD_NEW_PEER_REPLY = 4100,
        /*  Connectd asks gossipd for any known addresses for that node. */
        WIRE_GOSSIPD_GET_ADDRS = 4001,
        WIRE_GOSSIPD_GET_ADDRS_REPLY = 4101,
};

const char *connectd_gossipd_wire_name(int e);

/**
 * Determine whether a given message type is defined as a message.
 *
 * Returns true if the message type is part of the message definitions we have
 * generated parsers for, false if it is a custom message that cannot be
 * handled internally.
 */
bool connectd_gossipd_wire_is_defined(u16 type);


/* WIRE: GOSSIPD_NEW_PEER */
/*  Communication between gossipd and connectd. */
u8 *towire_gossipd_new_peer(const tal_t *ctx, const struct node_id *id, bool gossip_queries_feature, bool initial_routing_sync);
bool fromwire_gossipd_new_peer(const void *p, struct node_id *id, bool *gossip_queries_feature, bool *initial_routing_sync);

/* WIRE: GOSSIPD_NEW_PEER_REPLY */
/*  if success: + gossip fd and gossip_store fd */
u8 *towire_gossipd_new_peer_reply(const tal_t *ctx, bool success, const struct gossip_state *gs);
bool fromwire_gossipd_new_peer_reply(const tal_t *ctx, const void *p, bool *success, struct gossip_state **gs);

/* WIRE: GOSSIPD_GET_ADDRS */
/*  Connectd asks gossipd for any known addresses for that node. */
u8 *towire_gossipd_get_addrs(const tal_t *ctx, const struct node_id *id);
bool fromwire_gossipd_get_addrs(const void *p, struct node_id *id);

/* WIRE: GOSSIPD_GET_ADDRS_REPLY */
u8 *towire_gossipd_get_addrs_reply(const tal_t *ctx, const struct wireaddr *addrs);
bool fromwire_gossipd_get_addrs_reply(const tal_t *ctx, const void *p, struct wireaddr **addrs);


#endif /* LIGHTNING_CONNECTD_CONNECTD_GOSSIPD_WIREGEN_H */
// SHA256STAMP:5565fac68fbf90e24ef5f8230483b52952d342080d44ce9fb8ae0e9843ad1529
