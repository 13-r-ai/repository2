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

#ifndef _TD_COMMON_TOKEN_H_
#define _TD_COMMON_TOKEN_H_

#define TK_OR            1
#define TK_AND           2
#define TK_UNION         3
#define TK_ALL           4
#define TK_MINUS         5
#define TK_EXCEPT        6
#define TK_INTERSECT     7
#define TK_NK_BITAND     8
#define TK_NK_BITOR      9
#define TK_NK_LSHIFT     10
#define TK_NK_RSHIFT     11
#define TK_NK_PLUS       12
#define TK_NK_MINUS      13
#define TK_NK_STAR       14
#define TK_NK_SLASH      15
#define TK_NK_REM        16
#define TK_NK_CONCAT     17
#define TK_CREATE        18
#define TK_ACCOUNT       19
#define TK_NK_ID         20
#define TK_PASS          21
#define TK_NK_STRING     22
#define TK_ALTER         23
#define TK_PPS           24
#define TK_TSERIES       25
#define TK_STORAGE       26
#define TK_STREAMS       27
#define TK_QTIME         28
#define TK_DBS           29
#define TK_USERS         30
#define TK_CONNS         31
#define TK_STATE         32
#define TK_USER          33
#define TK_PRIVILEGE     34
#define TK_DROP          35
#define TK_GRANT         36
#define TK_ON            37
#define TK_TO            38
#define TK_REVOKE        39
#define TK_FROM          40
#define TK_NK_COMMA      41
#define TK_READ          42
#define TK_WRITE         43
#define TK_NK_DOT        44
#define TK_DNODE         45
#define TK_PORT          46
#define TK_NK_INTEGER    47
#define TK_DNODES        48
#define TK_NK_IPTOKEN    49
#define TK_LOCAL         50
#define TK_QNODE         51
#define TK_BNODE         52
#define TK_SNODE         53
#define TK_MNODE         54
#define TK_DATABASE      55
#define TK_USE           56
#define TK_IF            57
#define TK_NOT           58
#define TK_EXISTS        59
#define TK_BUFFER        60
#define TK_CACHELAST     61
#define TK_COMP          62
#define TK_DURATION      63
#define TK_NK_VARIABLE   64
#define TK_FSYNC         65
#define TK_MAXROWS       66
#define TK_MINROWS       67
#define TK_KEEP          68
#define TK_PAGES         69
#define TK_PAGESIZE      70
#define TK_PRECISION     71
#define TK_REPLICA       72
#define TK_STRICT        73
#define TK_WAL           74
#define TK_VGROUPS       75
#define TK_SINGLE_STABLE 76
#define TK_RETENTIONS    77
#define TK_SCHEMALESS    78
#define TK_NK_COLON      79
#define TK_TABLE         80
#define TK_NK_LP         81
#define TK_NK_RP         82
#define TK_STABLE        83
#define TK_ADD           84
#define TK_COLUMN        85
#define TK_MODIFY        86
#define TK_RENAME        87
#define TK_TAG           88
#define TK_SET           89
#define TK_NK_EQ         90
#define TK_USING         91
#define TK_TAGS          92
#define TK_COMMENT       93
#define TK_BOOL          94
#define TK_TINYINT       95
#define TK_SMALLINT      96
#define TK_INT           97
#define TK_INTEGER       98
#define TK_BIGINT        99
#define TK_FLOAT         100
#define TK_DOUBLE        101
#define TK_BINARY        102
#define TK_TIMESTAMP     103
#define TK_NCHAR         104
#define TK_UNSIGNED      105
#define TK_JSON          106
#define TK_VARCHAR       107
#define TK_MEDIUMBLOB    108
#define TK_BLOB          109
#define TK_VARBINARY     110
#define TK_DECIMAL       111
#define TK_MAX_DELAY     112
#define TK_WATERMARK     113
#define TK_ROLLUP        114
#define TK_TTL           115
#define TK_SMA           116
#define TK_FIRST         117
#define TK_LAST          118
#define TK_SHOW          119
#define TK_DATABASES     120
#define TK_TABLES        121
#define TK_STABLES       122
#define TK_MNODES        123
#define TK_MODULES       124
#define TK_QNODES        125
#define TK_FUNCTIONS     126
#define TK_INDEXES       127
#define TK_ACCOUNTS      128
#define TK_APPS          129
#define TK_CONNECTIONS   130
#define TK_LICENCE       131
#define TK_GRANTS        132
#define TK_QUERIES       133
#define TK_SCORES        134
#define TK_TOPICS        135
#define TK_VARIABLES     136
#define TK_BNODES        137
#define TK_SNODES        138
#define TK_CLUSTER       139
#define TK_TRANSACTIONS  140
#define TK_LIKE          141
#define TK_INDEX         142
#define TK_FULLTEXT      143
#define TK_FUNCTION      144
#define TK_INTERVAL      145
#define TK_TOPIC         146
#define TK_AS            147
#define TK_CONSUMER      148
#define TK_GROUP         149
#define TK_DESC          150
#define TK_DESCRIBE      151
#define TK_RESET         152
#define TK_QUERY         153
#define TK_CACHE         154
#define TK_EXPLAIN       155
#define TK_ANALYZE       156
#define TK_VERBOSE       157
#define TK_NK_BOOL       158
#define TK_RATIO         159
#define TK_NK_FLOAT      160
#define TK_COMPACT       161
#define TK_VNODES        162
#define TK_IN            163
#define TK_OUTPUTTYPE    164
#define TK_AGGREGATE     165
#define TK_BUFSIZE       166
#define TK_STREAM        167
#define TK_INTO          168
#define TK_TRIGGER       169
#define TK_AT_ONCE       170
#define TK_WINDOW_CLOSE  171
#define TK_KILL          172
#define TK_CONNECTION    173
#define TK_TRANSACTION   174
#define TK_BALANCE       175
#define TK_VGROUP        176
#define TK_MERGE         177
#define TK_REDISTRIBUTE  178
#define TK_SPLIT         179
#define TK_SYNCDB        180
#define TK_DELETE        181
#define TK_NULL          182
#define TK_NK_QUESTION   183
#define TK_NK_ARROW      184
#define TK_ROWTS         185
#define TK_TBNAME        186
#define TK_QSTARTTS      187
#define TK_QENDTS        188
#define TK_WSTARTTS      189
#define TK_WENDTS        190
#define TK_WDURATION     191
#define TK_CAST          192
#define TK_NOW           193
#define TK_TODAY         194
#define TK_TIMEZONE      195
#define TK_COUNT         196
#define TK_LAST_ROW      197
#define TK_BETWEEN       198
#define TK_IS            199
#define TK_NK_LT         200
#define TK_NK_GT         201
#define TK_NK_LE         202
#define TK_NK_GE         203
#define TK_NK_NE         204
#define TK_MATCH         205
#define TK_NMATCH        206
#define TK_CONTAINS      207
#define TK_JOIN          208
#define TK_INNER         209
#define TK_SELECT        210
#define TK_DISTINCT      211
#define TK_WHERE         212
#define TK_PARTITION     213
#define TK_BY            214
#define TK_SESSION       215
#define TK_STATE_WINDOW  216
#define TK_SLIDING       217
#define TK_FILL          218
#define TK_VALUE         219
#define TK_NONE          220
#define TK_PREV          221
#define TK_LINEAR        222
#define TK_NEXT          223
#define TK_HAVING        224
#define TK_ORDER         225
#define TK_SLIMIT        226
#define TK_SOFFSET       227
#define TK_LIMIT         228
#define TK_OFFSET        229
#define TK_ASC           230
#define TK_NULLS         231
#define TK_ID            232
#define TK_NK_BITNOT     233
#define TK_INSERT        234
#define TK_VALUES        235
#define TK_IMPORT        236
#define TK_NK_SEMI       237
#define TK_FILE          238

#define TK_NK_SPACE   300
#define TK_NK_COMMENT 301
#define TK_NK_ILLEGAL 302
#define TK_NK_HEX     303  // hex number  0x123
#define TK_NK_OCT     304  // oct number
#define TK_NK_BIN     305  // bin format data 0b111

#define TK_NK_NIL 65535

#endif /*_TD_COMMON_TOKEN_H_*/
