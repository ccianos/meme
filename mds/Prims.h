/* This file is copyright by Immersive Systems, Inc.  All rights
 * reserved.  You are permitted to use this file subject to
 * the provisions and restrictions in the license agreement, which
 * is in the file LICENSE or LICENSE.txt or LICENSE.html.  If this
 * set of files does not contain a file by one of the three
 * preceding names, please contact the Metatopia project at
 * sourceforge.net or at immersive.com.
 */

#define NOT							1
#define AND							2
#define OR							3
#define XOR							4
#define PLUS						5
#define MINUS						6
#define TIMES						7
#define DIVIDE						8
#define MOD							9
#define DUP							10
#define DROP						11
#define SWAP						12
#define OVER						13
#define ROT							14
#define PICK						15
#define QUES_DUP					16
#define TO_R						17
#define R_FROM						18
#define R_FETCH						19
#define DEPTH						20
#define LESS						21
#define EQUAL						22
#define GREATER						23
#define ZERO_LESS					24
#define ZERO_EQUAL					25
#define ZERO_GREATER				26
#define U_LESS						27
#define ONE_PLUS					28
#define TWO_PLUS					29
#define TWO_MINUS					30
#define U_M_TIMES					31
#define TWO_DIVIDE					32
#define PMAX						33
#define PMIN						34
#define ABS							35
#define NEGATE						36
#define FETCH						37
#define C_FETCH						38
#define W_FETCH						39
#define STORE						40
#define C_STORE						41
#define W_STORE						42
#define PLUS_STORE					43
#define CMOVE						44
#define CMOVE_UP					45
#define FILL						46
#define COUNT						47
#define DASH_TRAILING				48
#define I							49
#define J							50
#define EXIT						51
#define EXECUTE						52
#define KEY							53
#define EMIT						54
#define ALLOT						55
#define FIND						56
#define VFIND						57
#define PAREN						58
#define FLOAD						59
#define EXPECT						60
#define ABORT						61
#define QUIT						62
#define DECIMAL						63
#define HEX							64
#define COLD						65
#define HERE						66
#define TIB							67
#define DOT				68
#define U_DOT			69
#define PWORD			70
#define COMMA			71
#define PLUS_LOOP		72
#define DOT_QUOTE		73
#define COLON			74
#define SEMICOLON		75
#define ABORT_QUOTE		76
#define BEGIN			77
#define COMPILE			78
#define CONSTANT		79
#define VARIABLE		80
#define CREATE			81
#define USER			82
#define USER_SIZE		83
#define DO				84
#define DOES			85
#define ELSE			86
#define IF				87
#define IMMEDIATE		88
#define LEAVE			89
#define LITERAL			90
#define LOOP			91
#define REPEAT			92
#define THEN			93
#define UNTIL			94
#define WHILE			95
#define LEFT_BRACKET	96
#define BRAC_TICK		97
#define BRAC_COMPILE	98
#define RIGHT_BRACKET	99
#define CR				100
#define DOT_PAREN		101
#define TYPE			102
#define TO_BODY			103
#define TICK			104
#define FINISHED		105
#define BYE				106
#define BACKSLASH		107
#define UNNEST			108
#define P_DO			109
#define PAREN_LOOP		110
#define PAREN_PLUS_LOOP	111
#define P_DOES			112
#define PAREN_LIT		113
#define PAREN_TICK		114
#define PAREN_ABORT_QUOTE	115
#define P_DOT_QUOTE		116
#define BRANCH			117
#define QUES_BRANCH		118
#define PAREN_COMPILE	119
#define LOSE			120
#define SPFETCH			121
#define SPSTORE			122
#define RPFETCH			123
#define RPSTORE			124
#define UPFETCH			125
#define UPSTORE			126
#define TICK_WORD		127
#define FORW_MARK		128
#define FORW_RESOLVE	129
#define BACK_MARK		130
#define BACK_RESOLVE	131
#define QUOTE_CREATE	132
#define DIVIDE_MOD		133
#define DIGIT			134
#define NUM_QUESTION	135
#define QUES_DO			136
#define PAREN_QUESTION_DO	137
#define QUES_LEAVE		138
#define KEY_QUESTION	139
#define SHIFT			140
#define HIDE			141
#define REVEAL			142
#define INPUT_FILE_NAME	143
#define QUOTE_LOAD		144
#define ORIGIN			145
#define SEMI_S			146
#define CANONICAL		147
#define MAXDP			148
#define MAXPRIMITIVE	149
#define PER_N			150
#define THIRTY_TWO_BACKSLASH	151
#define SIXTEEN_BACKSLASH	152
#define ERRNO			153
#define WHY				154
#define BL				155
#define SINDEX			156
#define FOPEN			157
#define FCLOSE			158
#define FGETC			159
#define FGETS			160
#define FPUTC			161
#define FPUTS			162
#define FGETLINE		163
#define FCR				164
#define FSEEK			165
#define FTELL			166
#define FSIZE			167
#define FFLUSH			168
#define FUNGETC			169
#define FNEWLINE		170
#define SYSCALL			171
#define U_M_DIVIDE_MOD	172
#define COMMAND			173
#define CHDIR			174
#define SHIFTA			175
#define TORELBIT		176
#define	FPLUS			177
#define	FMINUS			178
#define	FTIMES						179
#define	FDIVIDE						180
#define	FMOD						181
#define	FNEGATE						182
#define	FSIN						183
#define	FCOS						184
#define	FTAN						185
#define	FLOG						186
#define	FLN							187
#define	FATAN						188
#define	FATAN2						189
#define	FASIN						190
#define	FACOS						191
#define	FCEIL						192
#define	FCOSH						193
#define	FSINH						194
#define	TANH						195
#define	FSQRT						196
#define	FEXP						197
#define	FABS						198
#define	FFLOOR						199
#define	FPOW						200
#define	FDUP						201
#define	FDROP						202
#define	FOVER						203
#define	FSWAP						204
#define	FROT						205
#define	FMINROT						206
#define	FDEPTH						207
#define	FPSTORE						208
#define	FSTORE						209
#define	FFETCH						210
#define	FINT						211
#define	FFLOAT						212
#define	FPOP						213
#define	FPUSH						214
#define	FSTRING						215
#define	ESTRING						216
#define	FEQ							217
#define	FNEQ						218
#define	FLT							219
#define	FGT							220
#define	FLEQ						221
#define	FGEQ						222
#define	FZEQ						223
#define	FZNEQ						224
#define	FZLT						225
#define	FZGT						226
#define	FZLEQ						227
#define	FZGEQ						228
#define	FPICK						229
#define	FNUMQUES					230
#define	FNUMBER						231
#define FPAREN_LIT					232
#define FPRESENT					233
#define DPLUS						234
#define DMINUS						235
#define DNEGATE						236
#define TIM_DIV_MOD					237
#define ALLOCLOC					238
#define FREELOC						239
#define GETLOC						240
#define SETLOC						241
#define LOCNAME						242
#define FREENAMES					243
#define DOLOCNAME					244
#define THROW						245
#define CCALL						246
#define SYS_EXPECT					247
#define	INTERPLINE					248
#define PAUSE						249
#define SINGLE						250
#define MULTI						251
#define ALLOC_MEM					252
#define FREE_MEM					253
#define TOMAINTASK					254
#define	MAINTASK					255
#define	NFRAMES						256
#define MAXCODEFIELD				257
#define	DEBUGGERDATA				258
#define	IFPAREN_LIT					259
#define	IF2F						260
#define F2IF						261
#define	SETRELOCBIT					262
#define	OBJECT						263
#define	RENDER						264
#define	NUMOBJECTS					265
#define	NEWCAMERA					266
#define	NEWLIGHT					267
#define	NEWVISIBLE					268
#define	NEWAUDIBLE					269
#define	NEWIMAGINARY				270
#define	CURRCAMERA					271
#define	MOUSEX						272
#define	MOUSEY						273
#define	MOUSEB						274
#define	TRANSFORM					275
#define	FZERO						276
#define	SETCAMERABACKCOLOR			277
#define	SETCAMERAVIEWWINDOW			278
#define	GETTIME						279
#define	ORPHAN						280
#define	ADOPTS						281
#define	SCRHEIGHT					282
#define	SCRWIDTH					283
#define	MATERIALOPACITY				284
#define	JOYSTICKX					285
#define	JOYSTICKY					286
#define	JOYSTICKB					287
#define	DESTROYOBJECT				288
#define PICKOBJECT					289
#define SETVERTEX					290
#define POLYGONCOUNT				291
#define	NEWTEXTURE					292
#define	PUSH_FALSE					293
#define	TEXTUREFRAMESTEP			294
#define	TEXTURENEXTFRAME			295
#define	SETTEXTUREFRAME				296
#define	NEWMATERIAL					297
#define	DESTROYMATERIAL				298
#define	MATERIALCOLOR				299
#define	MATERIALSURFACE				300
#define	MATERIALSHADING				301
#define	MATERIALGEOMETRY			302
#define	MATERIALTEXTURE				303
#define	POLYGONMATERIAL				304
#define	SHAPEMATERIAL				305
#define	WRITESHAPE					306
#define	ISMYHOSTID					307
#define	GETTIMEOFDAY				308
#define	DESTROYTEXTURE				309
#define GETVERTEXCOUNT				310
#define	GETVERTEX					311
#define	NEWCOMPOUND					312
#define	WHICHOBJECT					313
#define	PUSH_TRUE					314
#define	NEWMODULE					315
#define	DESTROYMODULE				316
#define	SENDMESSAGE					317
#define	SENDFINALMESSAGE			318
#define	REGISTERDECKMODULE			319
#define CYBERMAN					320
#define	GETLASTERROR				321
#define	SER_OPEN					322
#define	SER_CLOSE					323
#define	SER_READ					324
#define	SER_WRITE					325
#define	NET_CONNECT					326
#define	NET_LISTEN					327
#define	NET_READ					328
#define	NET_WRITE					329
#define	NET_DISCONNECT				330
#define	NET_CONNECTED				331
#define	NET_DISCONNECTED			332
#define	NET_ERROR					333
#define	NET_STATUS					334
#define	RAND						335
#define	RANDOMIZE					336
#define	WINDOWHEIGHT				337
#define	WINDOWWIDTH					338
#define	ADDTOREGION					339
#define	DESTROYREGION				340
#define	POINTINREGION				341
#define	POINTINPRISM				342
#define	OVERLAPPINGPRISMS			343
#define	OVERLAPPINGREGIONS			344
#define	REGISTERREGION				345
#define	UNREGISTERREGION			346
#define	ENCLOSINGREGION				347
#define	FIRSTOVERLAPPINGREGION		348
#define	NEXTOVERLAPPINGREGION		349
#define	STRLEN						350
#define	STRCPY						351
#define	STRCMP						352
#define	ATOI						353
#define	ITOA						354
#define	ATOF						355
#define	FTOA						356
#define	POF							357
#define	PSOF						358
#define	PQUOTES						359
#define	PQUOTE						360
#define	PCQUOTE						361
#define	OPENURLASFILE				362
#define	OPENURLASBUFFER				363
#define	CTYPE						364
#define	GETFLOC						365
#define	SETFLOC						366
#define	MATERIALWRAP				367
#define	LIGHTCOLOR					368
#define	LIGHTCONEANGLE				369
#define	NETGETHOSTBYNAME			370
#define	NETACCEPTED					371
#define	NETDISPATCH					372
#define	FPFETCH						373
#define	FRPFETCH					374
#define	SETLASTERROR				375
#define	GETCWD						376
#define	MAINTASKRCVR				377
#define	NEWMASKEDTEXTURE			378
#define	SETCAMERABACKDROP			379
#define	NEWSPRITE					380
#define	GETPOLYGON					381
#define	SETCAMERABACKDROPOFFSET		382
#define	REALLOC_MEM					383
#define	DICTIONARYSIZE				384
#define	GETPOLYGONMATERIAL			385
#define	EMPTYSHAPE					386
#define	ADDVERTEX					387
#define	ADDPOLYGON					388
#define ADDSHAPE					389
#define REVERSEPOLYGONNORMAL		390
#define REVERSESHAPENORMALS			391
#define TEXTURECAMERA				392

#define	NEXT_PRIM					393

#define MAXPRIM						400

#define DOCOLON						401
#define DOCON						402
#define DOVAR						403
#define DOUSER						404
#define DODEFER						405
#define DOCODE						406
#define DOVOC						407

#define MAXCF						408
/*
 * It is tempting to make this an enumerated type (it originally was), but
 * a) some C compilers still don't support enumerations
 * b) some of those that do will freak out when they see one with this many
 *    entries
 */
