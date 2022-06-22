/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// clang-format off

#if 0
#undef TD_MSG_INFO_
#undef TD_MSG_NUMBER_
#undef TD_MSG_DICT_
#undef TD_MSG_SEG_CODE_
#endif

#if defined(TD_MSG_INFO_)

#undef TD_NEW_MSG_SEG
#undef TD_DEF_MSG_TYPE
#define TD_NEW_MSG_SEG(TYPE) "null",
#define TD_DEF_MSG_TYPE(TYPE, MSG, REQ, RSP) MSG, MSG "-rsp",

char *tMsgInfo[] = {

#elif defined(TD_MSG_NUMBER_)

#undef TD_NEW_MSG_SEG
#undef TD_DEF_MSG_TYPE
#define TD_NEW_MSG_SEG(TYPE) TYPE##_NUM,
#define TD_DEF_MSG_TYPE(TYPE, MSG, REQ, RSP) TYPE##_NUM, TYPE##_RSP_NUM,

enum {

#elif defined(TD_MSG_DICT_)

#undef TD_NEW_MSG_SEG
#undef TD_DEF_MSG_TYPE
#define TD_NEW_MSG_SEG(TYPE) TYPE##_NUM,
#define TD_DEF_MSG_TYPE(TYPE, MSG, REQ, RSP)

int32_t tMsgDict[] = {

#elif defined(TD_MSG_SEG_CODE_)

#undef TD_NEW_MSG_SEG
#undef TD_DEF_MSG_TYPE
#define TD_NEW_MSG_SEG(TYPE) TYPE##_SEG_CODE,
#define TD_DEF_MSG_TYPE(TYPE, MSG, REQ, RSP)

enum {

#else

#undef TD_NEW_MSG_SEG
#undef TD_DEF_MSG_TYPE
#define TD_NEW_MSG_SEG(TYPE) TYPE = ((TYPE##_SEG_CODE) << 8),
#define TD_DEF_MSG_TYPE(TYPE, MSG, REQ, RSP) TYPE, TYPE##_RSP,

enum {
#endif
  TD_NEW_MSG_SEG(TDMT_DND_MSG)
  TD_DEF_MSG_TYPE(TDMT_DND_CREATE_MNODE, "dnode-create-mnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_DROP_MNODE, "dnode-drop-mnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_CREATE_QNODE, "dnode-create-qnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_DROP_QNODE, "dnode-drop-qnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_CREATE_SNODE, "dnode-create-snode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_DROP_SNODE, "dnode-drop-snode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_CREATE_BNODE, "dnode-create-bnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_DROP_BNODE, "dnode-drop-bnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_CREATE_VNODE, "create-vnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_DROP_VNODE, "drop-vnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_SERVER_STATUS, "server-status", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_NET_TEST, "net-test", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_DND_CONFIG_DNODE, "config-dnode", NULL, NULL)

  TD_NEW_MSG_SEG(TDMT_MND_MSG)
  TD_DEF_MSG_TYPE(TDMT_MND_CONNECT, "connect", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_ACCT, "create-acct", NULL, NULL)	
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_ACCT, "alter-acct", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_ACCT, "drop-acct", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_USER, "create-user", NULL, NULL)	
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_USER, "alter-user", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_USER, "drop-user", NULL, NULL) 
  TD_DEF_MSG_TYPE(TDMT_MND_GET_USER_AUTH, "get-user-auth", NULL, NULL) 
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_DNODE, "create-dnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CONFIG_DNODE, "config-dnode", NULL, NULL) 
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_DNODE, "drop-dnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_MNODE, "create-mnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_MNODE, "alter-mnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_MNODE, "drop-mnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_QNODE, "create-qnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_QNODE, "alter-qnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_QNODE, "drop-qnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_QNODE_LIST, "qnode-list", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_SNODE, "create-snode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_SNODE, "alter-snode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_SNODE, "drop-snode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_BNODE, "create-bnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_BNODE, "alter-bnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_BNODE, "drop-bnode", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_DB, "create-db", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_DB, "drop-db", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_USE_DB, "use-db", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_DB, "alter-db", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_SYNC_DB, "sync-db", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_COMPACT_DB, "compact-db", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_GET_DB_CFG, "get-db-cfg", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_VGROUP_LIST, "vgroup-list", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_FUNC, "create-func", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_RETRIEVE_FUNC, "retrieve-func", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_FUNC, "drop-func", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_STB, "create-stb", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_STB, "alter-stb", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_STB, "drop-stb", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_TABLE_META, "table-meta", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_SMA, "create-sma", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_SMA, "drop-sma", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_STREAM, "create-stream", SCMCreateStreamReq, SCMCreateStreamRsp)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_STREAM, "alter-stream", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_STREAM, "drop-stream", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_INDEX, "create-index", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_INDEX, "drop-index", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_GET_INDEX, "get-index", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_GET_TABLE_INDEX, "get-table-index", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_TABLE_CFG, "table-cfg", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_CREATE_TOPIC, "create-topic", SMCreateTopicReq, SMCreateTopicRsp)
  TD_DEF_MSG_TYPE(TDMT_MND_ALTER_TOPIC, "alter-topic", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_DROP_TOPIC, "drop-topic", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_SUBSCRIBE, "subscribe", SCMSubscribeReq, SCMSubscribeRsp)
  TD_DEF_MSG_TYPE(TDMT_MND_MQ_ASK_EP, "ask-ep", SMqAskEpReq, SMqAskEpRsp)
  TD_DEF_MSG_TYPE(TDMT_MND_MQ_CONSUMER_LOST, "consumer-lost", SMqConsumerLostMsg, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_MQ_CONSUMER_RECOVER, "consumer-recover", SMqConsumerRecoverMsg, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_MQ_DO_REBALANCE, "do-rebalance", SMqDoRebalanceMsg, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_MQ_DROP_CGROUP, "drop-cgroup", SMqDropCGroupReq, SMqDropCGroupRsp)
  TD_DEF_MSG_TYPE(TDMT_MND_MQ_COMMIT_OFFSET, "mnode-commit-offset", SMqCMCommitOffsetReq, SMqCMCommitOffsetRsp)
  TD_DEF_MSG_TYPE(TDMT_MND_MQ_TIMER, "mq-tmr", SMTimerReq, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_TELEM_TIMER, "telem-tmr", SMTimerReq, SMTimerReq)
  TD_DEF_MSG_TYPE(TDMT_MND_TRANS_TIMER, "trans-tmr", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_KILL_TRANS, "kill-trans", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_KILL_QUERY, "kill-query", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_KILL_CONN, "kill-conn", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_HEARTBEAT, "heartbeat", SClientHbBatchReq, SClientHbBatchRsp)
  TD_DEF_MSG_TYPE(TDMT_MND_STATUS, "status", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_SHOW, "show", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_SYSTABLE_RETRIEVE, "retrieve", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_GRANT, "grant", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_AUTH, "auth", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_APPLY_MSG, "mnode-apply", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_BALANCE_VGROUP, "balance-vgroup", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_MERGE_VGROUP, "merge-vgroup", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_REDISTRIBUTE_VGROUP, "redistribute-vgroup", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_SPLIT_VGROUP, "split-vgroup", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MND_SHOW_VARIABLES, "show-variables", NULL, NULL)

  TD_NEW_MSG_SEG(TDMT_VND_MSG)
  TD_DEF_MSG_TYPE(TDMT_VND_SUBMIT, "submit", SSubmitReq, SSubmitRsp)
  TD_DEF_MSG_TYPE(TDMT_VND_QUERY, "query", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_QUERY_CONTINUE, "query-continue", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_QUERY_HEARTBEAT, "query-heartbeat", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_FETCH, "fetch", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_CREATE_TABLE, "create-table", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_ALTER_TABLE, "alter-table", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_DROP_TABLE, "drop-table", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_UPDATE_TAG_VAL, "update-tag-val", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_TABLE_META, "vnode-table-meta", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_TABLES_META, "vnode-tables-meta", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_TABLE_CFG, "vnode-table-cfg", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_CREATE_STB, "vnode-create-stb", SVCreateStbReq, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_ALTER_STB, "vnode-alter-stb", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_DROP_STB, "vnode-drop-stb", SVDropStbReq, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_MQ_VG_CHANGE, "vnode-mq-vg-change", SMqRebVgReq, SMqRebVgRsp)
  TD_DEF_MSG_TYPE(TDMT_VND_MQ_VG_DELETE, "vnode-mq-vg-delete", SMqVDeleteReq, SMqVDeleteRsp)
  TD_DEF_MSG_TYPE(TDMT_VND_MQ_COMMIT_OFFSET, "vnode-commit-offset", STqOffset, STqOffset)
  TD_DEF_MSG_TYPE(TDMT_VND_CANCEL_TASK, "vnode-cancel-task", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_DROP_TASK, "vnode-drop-task", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_CREATE_TOPIC, "vnode-create-topic", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_ALTER_TOPIC, "vnode-alter-topic", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_DROP_TOPIC, "vnode-drop-topic", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_EXPLAIN, "vnode-explain", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_SUBSCRIBE, "vnode-subscribe", SMVSubscribeReq, SMVSubscribeRsp)
  TD_DEF_MSG_TYPE(TDMT_VND_CONSUME, "vnode-consume", SMqPollReq, SMqDataBlkRsp)
  TD_DEF_MSG_TYPE(TDMT_VND_STREAM_TRIGGER, "vnode-stream-trigger", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_STREAM_DISPATCH_WRITE, "vnode-stream-task-dispatch-write", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_CREATE_SMA, "vnode-create-sma", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_CANCEL_SMA, "vnode-cancel-sma", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_DROP_SMA, "vnode-drop-sma", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_SUBMIT_RSMA, "vnode-submit-rsma", SSubmitReq, SSubmitRsp)
  TD_DEF_MSG_TYPE(TDMT_VND_DELETE, "delete-data", SVDeleteReq, SVDeleteRsp)
  TD_DEF_MSG_TYPE(TDMT_VND_ALTER_CONFIG, "alter-config", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_ALTER_REPLICA, "alter-replica", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_ALTER_CONFIRM, "alter-confirm", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_ALTER_HASHRANGE, "alter-hashrange", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_COMPACT, "compact", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_VND_DROP_TTL_TABLE, "drop-ttl-stb", NULL, NULL)
  TD_NEW_MSG_SEG(TDMT_QND_MSG)

  //shared by snode and vnode
  TD_NEW_MSG_SEG(TDMT_STREAM_MSG)
  TD_DEF_MSG_TYPE(TDMT_STREAM_TASK_DEPLOY, "stream-task-deploy", SStreamTaskDeployReq, SStreamTaskDeployRsp)
  TD_DEF_MSG_TYPE(TDMT_STREAM_TASK_DROP, "stream-task-drop", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_STREAM_TASK_RUN, "stream-task-run", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_STREAM_TASK_DISPATCH, "stream-task-dispatch", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_STREAM_TASK_RECOVER, "stream-task-recover", NULL, NULL)

  TD_NEW_MSG_SEG(TDMT_SCH_MSG)
  TD_DEF_MSG_TYPE(TDMT_SCH_LINK_BROKEN, "link-broken", NULL, NULL)

  TD_NEW_MSG_SEG(TDMT_MON_MSG)
  TD_DEF_MSG_TYPE(TDMT_MON_MM_INFO, "monitor-minfo", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MON_VM_INFO, "monitor-vinfo", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MON_QM_INFO, "monitor-qinfo", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MON_SM_INFO, "monitor-sinfo", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MON_BM_INFO, "monitor-binfo", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MON_VM_LOAD, "monitor-vload", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MON_MM_LOAD, "monitor-mload", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_MON_QM_LOAD, "monitor-qload", NULL, NULL)

  TD_NEW_MSG_SEG(TDMT_SYNC_MSG)
  TD_DEF_MSG_TYPE(TDMT_SYNC_TIMEOUT, "sync-timer", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_PING, "sync-ping", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_PING_REPLY, "sync-ping-reply", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_CLIENT_REQUEST, "sync-client-request", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_CLIENT_REQUEST_REPLY, "sync-client-request-reply", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_REQUEST_VOTE, "sync-request-vote", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_REQUEST_VOTE_REPLY, "sync-request-vote-reply", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_APPEND_ENTRIES, "sync-append-entries", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_APPEND_ENTRIES_REPLY, "sync-append-entries-reply", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_NOOP, "sync-noop", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_UNKNOWN, "sync-unknown", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_COMMON_RESPONSE, "sync-common-response", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_APPLY_MSG, "sync-apply-msg", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_CONFIG_CHANGE, "sync-config-change", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_CONFIG_CHANGE_FINISH, "sync-config-change-finish", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_SNAPSHOT_SEND, "sync-snapshot-send", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_SNAPSHOT_RSP, "sync-snapshot-rsp", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_LEADER_TRANSFER, "sync-leader-transfer", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_SET_MNODE_STANDBY, "set-mnode-standby", NULL, NULL)
  TD_DEF_MSG_TYPE(TDMT_SYNC_SET_VNODE_STANDBY, "set-vnode-standby", NULL, NULL)
  
#if defined(TD_MSG_NUMBER_)
  TDMT_MAX
#endif
};
