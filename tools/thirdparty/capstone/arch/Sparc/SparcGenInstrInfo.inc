/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Capstone Disassembly Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2015 */


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM

enum {
    SP_PHI	= 0,
    SP_INLINEASM	= 1,
    SP_CFI_INSTRUCTION	= 2,
    SP_EH_LABEL	= 3,
    SP_GC_LABEL	= 4,
    SP_KILL	= 5,
    SP_EXTRACT_SUBREG	= 6,
    SP_INSERT_SUBREG	= 7,
    SP_IMPLICIT_DEF	= 8,
    SP_SUBREG_TO_REG	= 9,
    SP_COPY_TO_REGCLASS	= 10,
    SP_DBG_VALUE	= 11,
    SP_REG_SEQUENCE	= 12,
    SP_COPY	= 13,
    SP_BUNDLE	= 14,
    SP_LIFETIME_START	= 15,
    SP_LIFETIME_END	= 16,
    SP_STACKMAP	= 17,
    SP_PATCHPOINT	= 18,
    SP_LOAD_STACK_GUARD	= 19,
    SP_STATEPOINT	= 20,
    SP_FRAME_ALLOC	= 21,
    SP_ADDCCri	= 22,
    SP_ADDCCrr	= 23,
    SP_ADDCri	= 24,
    SP_ADDCrr	= 25,
    SP_ADDEri	= 26,
    SP_ADDErr	= 27,
    SP_ADDXC	= 28,
    SP_ADDXCCC	= 29,
    SP_ADDXri	= 30,
    SP_ADDXrr	= 31,
    SP_ADDri	= 32,
    SP_ADDrr	= 33,
    SP_ADJCALLSTACKDOWN	= 34,
    SP_ADJCALLSTACKUP	= 35,
    SP_ALIGNADDR	= 36,
    SP_ALIGNADDRL	= 37,
    SP_ANDCCri	= 38,
    SP_ANDCCrr	= 39,
    SP_ANDNCCri	= 40,
    SP_ANDNCCrr	= 41,
    SP_ANDNri	= 42,
    SP_ANDNrr	= 43,
    SP_ANDXNrr	= 44,
    SP_ANDXri	= 45,
    SP_ANDXrr	= 46,
    SP_ANDri	= 47,
    SP_ANDrr	= 48,
    SP_ARRAY16	= 49,
    SP_ARRAY32	= 50,
    SP_ARRAY8	= 51,
    SP_ATOMIC_LOAD_ADD_32	= 52,
    SP_ATOMIC_LOAD_ADD_64	= 53,
    SP_ATOMIC_LOAD_AND_32	= 54,
    SP_ATOMIC_LOAD_AND_64	= 55,
    SP_ATOMIC_LOAD_MAX_32	= 56,
    SP_ATOMIC_LOAD_MAX_64	= 57,
    SP_ATOMIC_LOAD_MIN_32	= 58,
    SP_ATOMIC_LOAD_MIN_64	= 59,
    SP_ATOMIC_LOAD_NAND_32	= 60,
    SP_ATOMIC_LOAD_NAND_64	= 61,
    SP_ATOMIC_LOAD_OR_32	= 62,
    SP_ATOMIC_LOAD_OR_64	= 63,
    SP_ATOMIC_LOAD_SUB_32	= 64,
    SP_ATOMIC_LOAD_SUB_64	= 65,
    SP_ATOMIC_LOAD_UMAX_32	= 66,
    SP_ATOMIC_LOAD_UMAX_64	= 67,
    SP_ATOMIC_LOAD_UMIN_32	= 68,
    SP_ATOMIC_LOAD_UMIN_64	= 69,
    SP_ATOMIC_LOAD_XOR_32	= 70,
    SP_ATOMIC_LOAD_XOR_64	= 71,
    SP_ATOMIC_SWAP_64	= 72,
    SP_BA	= 73,
    SP_BCOND	= 74,
    SP_BCONDA	= 75,
    SP_BINDri	= 76,
    SP_BINDrr	= 77,
    SP_BMASK	= 78,
    SP_BPFCC	= 79,
    SP_BPFCCA	= 80,
    SP_BPFCCANT	= 81,
    SP_BPFCCNT	= 82,
    SP_BPGEZapn	= 83,
    SP_BPGEZapt	= 84,
    SP_BPGEZnapn	= 85,
    SP_BPGEZnapt	= 86,
    SP_BPGZapn	= 87,
    SP_BPGZapt	= 88,
    SP_BPGZnapn	= 89,
    SP_BPGZnapt	= 90,
    SP_BPICC	= 91,
    SP_BPICCA	= 92,
    SP_BPICCANT	= 93,
    SP_BPICCNT	= 94,
    SP_BPLEZapn	= 95,
    SP_BPLEZapt	= 96,
    SP_BPLEZnapn	= 97,
    SP_BPLEZnapt	= 98,
    SP_BPLZapn	= 99,
    SP_BPLZapt	= 100,
    SP_BPLZnapn	= 101,
    SP_BPLZnapt	= 102,
    SP_BPNZapn	= 103,
    SP_BPNZapt	= 104,
    SP_BPNZnapn	= 105,
    SP_BPNZnapt	= 106,
    SP_BPXCC	= 107,
    SP_BPXCCA	= 108,
    SP_BPXCCANT	= 109,
    SP_BPXCCNT	= 110,
    SP_BPZapn	= 111,
    SP_BPZapt	= 112,
    SP_BPZnapn	= 113,
    SP_BPZnapt	= 114,
    SP_BSHUFFLE	= 115,
    SP_CALL	= 116,
    SP_CALLri	= 117,
    SP_CALLrr	= 118,
    SP_CASXrr	= 119,
    SP_CASrr	= 120,
    SP_CMASK16	= 121,
    SP_CMASK32	= 122,
    SP_CMASK8	= 123,
    SP_CMPri	= 124,
    SP_CMPrr	= 125,
    SP_EDGE16	= 126,
    SP_EDGE16L	= 127,
    SP_EDGE16LN	= 128,
    SP_EDGE16N	= 129,
    SP_EDGE32	= 130,
    SP_EDGE32L	= 131,
    SP_EDGE32LN	= 132,
    SP_EDGE32N	= 133,
    SP_EDGE8	= 134,
    SP_EDGE8L	= 135,
    SP_EDGE8LN	= 136,
    SP_EDGE8N	= 137,
    SP_FABSD	= 138,
    SP_FABSQ	= 139,
    SP_FABSS	= 140,
    SP_FADDD	= 141,
    SP_FADDQ	= 142,
    SP_FADDS	= 143,
    SP_FALIGNADATA	= 144,
    SP_FAND	= 145,
    SP_FANDNOT1	= 146,
    SP_FANDNOT1S	= 147,
    SP_FANDNOT2	= 148,
    SP_FANDNOT2S	= 149,
    SP_FANDS	= 150,
    SP_FBCOND	= 151,
    SP_FBCONDA	= 152,
    SP_FCHKSM16	= 153,
    SP_FCMPD	= 154,
    SP_FCMPEQ16	= 155,
    SP_FCMPEQ32	= 156,
    SP_FCMPGT16	= 157,
    SP_FCMPGT32	= 158,
    SP_FCMPLE16	= 159,
    SP_FCMPLE32	= 160,
    SP_FCMPNE16	= 161,
    SP_FCMPNE32	= 162,
    SP_FCMPQ	= 163,
    SP_FCMPS	= 164,
    SP_FDIVD	= 165,
    SP_FDIVQ	= 166,
    SP_FDIVS	= 167,
    SP_FDMULQ	= 168,
    SP_FDTOI	= 169,
    SP_FDTOQ	= 170,
    SP_FDTOS	= 171,
    SP_FDTOX	= 172,
    SP_FEXPAND	= 173,
    SP_FHADDD	= 174,
    SP_FHADDS	= 175,
    SP_FHSUBD	= 176,
    SP_FHSUBS	= 177,
    SP_FITOD	= 178,
    SP_FITOQ	= 179,
    SP_FITOS	= 180,
    SP_FLCMPD	= 181,
    SP_FLCMPS	= 182,
    SP_FLUSHW	= 183,
    SP_FMEAN16	= 184,
    SP_FMOVD	= 185,
    SP_FMOVD_FCC	= 186,
    SP_FMOVD_ICC	= 187,
    SP_FMOVD_XCC	= 188,
    SP_FMOVQ	= 189,
    SP_FMOVQ_FCC	= 190,
    SP_FMOVQ_ICC	= 191,
    SP_FMOVQ_XCC	= 192,
    SP_FMOVRGEZD	= 193,
    SP_FMOVRGEZQ	= 194,
    SP_FMOVRGEZS	= 195,
    SP_FMOVRGZD	= 196,
    SP_FMOVRGZQ	= 197,
    SP_FMOVRGZS	= 198,
    SP_FMOVRLEZD	= 199,
    SP_FMOVRLEZQ	= 200,
    SP_FMOVRLEZS	= 201,
    SP_FMOVRLZD	= 202,
    SP_FMOVRLZQ	= 203,
    SP_FMOVRLZS	= 204,
    SP_FMOVRNZD	= 205,
    SP_FMOVRNZQ	= 206,
    SP_FMOVRNZS	= 207,
    SP_FMOVRZD	= 208,
    SP_FMOVRZQ	= 209,
    SP_FMOVRZS	= 210,
    SP_FMOVS	= 211,
    SP_FMOVS_FCC	= 212,
    SP_FMOVS_ICC	= 213,
    SP_FMOVS_XCC	= 214,
    SP_FMUL8SUX16	= 215,
    SP_FMUL8ULX16	= 216,
    SP_FMUL8X16	= 217,
    SP_FMUL8X16AL	= 218,
    SP_FMUL8X16AU	= 219,
    SP_FMULD	= 220,
    SP_FMULD8SUX16	= 221,
    SP_FMULD8ULX16	= 222,
    SP_FMULQ	= 223,
    SP_FMULS	= 224,
    SP_FNADDD	= 225,
    SP_FNADDS	= 226,
    SP_FNAND	= 227,
    SP_FNANDS	= 228,
    SP_FNEGD	= 229,
    SP_FNEGQ	= 230,
    SP_FNEGS	= 231,
    SP_FNHADDD	= 232,
    SP_FNHADDS	= 233,
    SP_FNMULD	= 234,
    SP_FNMULS	= 235,
    SP_FNOR	= 236,
    SP_FNORS	= 237,
    SP_FNOT1	= 238,
    SP_FNOT1S	= 239,
    SP_FNOT2	= 240,
    SP_FNOT2S	= 241,
    SP_FNSMULD	= 242,
    SP_FONE	= 243,
    SP_FONES	= 244,
    SP_FOR	= 245,
    SP_FORNOT1	= 246,
    SP_FORNOT1S	= 247,
    SP_FORNOT2	= 248,
    SP_FORNOT2S	= 249,
    SP_FORS	= 250,
    SP_FPACK16	= 251,
    SP_FPACK32	= 252,
    SP_FPACKFIX	= 253,
    SP_FPADD16	= 254,
    SP_FPADD16S	= 255,
    SP_FPADD32	= 256,
    SP_FPADD32S	= 257,
    SP_FPADD64	= 258,
    SP_FPMERGE	= 259,
    SP_FPSUB16	= 260,
    SP_FPSUB16S	= 261,
    SP_FPSUB32	= 262,
    SP_FPSUB32S	= 263,
    SP_FQTOD	= 264,
    SP_FQTOI	= 265,
    SP_FQTOS	= 266,
    SP_FQTOX	= 267,
    SP_FSLAS16	= 268,
    SP_FSLAS32	= 269,
    SP_FSLL16	= 270,
    SP_FSLL32	= 271,
    SP_FSMULD	= 272,
    SP_FSQRTD	= 273,
    SP_FSQRTQ	= 274,
    SP_FSQRTS	= 275,
    SP_FSRA16	= 276,
    SP_FSRA32	= 277,
    SP_FSRC1	= 278,
    SP_FSRC1S	= 279,
    SP_FSRC2	= 280,
    SP_FSRC2S	= 281,
    SP_FSRL16	= 282,
    SP_FSRL32	= 283,
    SP_FSTOD	= 284,
    SP_FSTOI	= 285,
    SP_FSTOQ	= 286,
    SP_FSTOX	= 287,
    SP_FSUBD	= 288,
    SP_FSUBQ	= 289,
    SP_FSUBS	= 290,
    SP_FXNOR	= 291,
    SP_FXNORS	= 292,
    SP_FXOR	= 293,
    SP_FXORS	= 294,
    SP_FXTOD	= 295,
    SP_FXTOQ	= 296,
    SP_FXTOS	= 297,
    SP_FZERO	= 298,
    SP_FZEROS	= 299,
    SP_GETPCX	= 300,
    SP_JMPLri	= 301,
    SP_JMPLrr	= 302,
    SP_LDDFri	= 303,
    SP_LDDFrr	= 304,
    SP_LDFri	= 305,
    SP_LDFrr	= 306,
    SP_LDQFri	= 307,
    SP_LDQFrr	= 308,
    SP_LDSBri	= 309,
    SP_LDSBrr	= 310,
    SP_LDSHri	= 311,
    SP_LDSHrr	= 312,
    SP_LDSWri	= 313,
    SP_LDSWrr	= 314,
    SP_LDUBri	= 315,
    SP_LDUBrr	= 316,
    SP_LDUHri	= 317,
    SP_LDUHrr	= 318,
    SP_LDXri	= 319,
    SP_LDXrr	= 320,
    SP_LDri	= 321,
    SP_LDrr	= 322,
    SP_LEAX_ADDri	= 323,
    SP_LEA_ADDri	= 324,
    SP_LZCNT	= 325,
    SP_MEMBARi	= 326,
    SP_MOVDTOX	= 327,
    SP_MOVFCCri	= 328,
    SP_MOVFCCrr	= 329,
    SP_MOVICCri	= 330,
    SP_MOVICCrr	= 331,
    SP_MOVRGEZri	= 332,
    SP_MOVRGEZrr	= 333,
    SP_MOVRGZri	= 334,
    SP_MOVRGZrr	= 335,
    SP_MOVRLEZri	= 336,
    SP_MOVRLEZrr	= 337,
    SP_MOVRLZri	= 338,
    SP_MOVRLZrr	= 339,
    SP_MOVRNZri	= 340,
    SP_MOVRNZrr	= 341,
    SP_MOVRRZri	= 342,
    SP_MOVRRZrr	= 343,
    SP_MOVSTOSW	= 344,
    SP_MOVSTOUW	= 345,
    SP_MOVWTOS	= 346,
    SP_MOVXCCri	= 347,
    SP_MOVXCCrr	= 348,
    SP_MOVXTOD	= 349,
    SP_MULXri	= 350,
    SP_MULXrr	= 351,
    SP_NOP	= 352,
    SP_ORCCri	= 353,
    SP_ORCCrr	= 354,
    SP_ORNCCri	= 355,
    SP_ORNCCrr	= 356,
    SP_ORNri	= 357,
    SP_ORNrr	= 358,
    SP_ORXNrr	= 359,
    SP_ORXri	= 360,
    SP_ORXrr	= 361,
    SP_ORri	= 362,
    SP_ORrr	= 363,
    SP_PDIST	= 364,
    SP_PDISTN	= 365,
    SP_POPCrr	= 366,
    SP_RDY	= 367,
    SP_RESTOREri	= 368,
    SP_RESTORErr	= 369,
    SP_RET	= 370,
    SP_RETL	= 371,
    SP_RETTri	= 372,
    SP_RETTrr	= 373,
    SP_SAVEri	= 374,
    SP_SAVErr	= 375,
    SP_SDIVCCri	= 376,
    SP_SDIVCCrr	= 377,
    SP_SDIVXri	= 378,
    SP_SDIVXrr	= 379,
    SP_SDIVri	= 380,
    SP_SDIVrr	= 381,
    SP_SELECT_CC_DFP_FCC	= 382,
    SP_SELECT_CC_DFP_ICC	= 383,
    SP_SELECT_CC_FP_FCC	= 384,
    SP_SELECT_CC_FP_ICC	= 385,
    SP_SELECT_CC_Int_FCC	= 386,
    SP_SELECT_CC_Int_ICC	= 387,
    SP_SELECT_CC_QFP_FCC	= 388,
    SP_SELECT_CC_QFP_ICC	= 389,
    SP_SETHIXi	= 390,
    SP_SETHIi	= 391,
    SP_SHUTDOWN	= 392,
    SP_SIAM	= 393,
    SP_SLLXri	= 394,
    SP_SLLXrr	= 395,
    SP_SLLri	= 396,
    SP_SLLrr	= 397,
    SP_SMULCCri	= 398,
    SP_SMULCCrr	= 399,
    SP_SMULri	= 400,
    SP_SMULrr	= 401,
    SP_SRAXri	= 402,
    SP_SRAXrr	= 403,
    SP_SRAri	= 404,
    SP_SRArr	= 405,
    SP_SRLXri	= 406,
    SP_SRLXrr	= 407,
    SP_SRLri	= 408,
    SP_SRLrr	= 409,
    SP_STBAR	= 410,
    SP_STBri	= 411,
    SP_STBrr	= 412,
    SP_STDFri	= 413,
    SP_STDFrr	= 414,
    SP_STFri	= 415,
    SP_STFrr	= 416,
    SP_STHri	= 417,
    SP_STHrr	= 418,
    SP_STQFri	= 419,
    SP_STQFrr	= 420,
    SP_STXri	= 421,
    SP_STXrr	= 422,
    SP_STri	= 423,
    SP_STrr	= 424,
    SP_SUBCCri	= 425,
    SP_SUBCCrr	= 426,
    SP_SUBCri	= 427,
    SP_SUBCrr	= 428,
    SP_SUBEri	= 429,
    SP_SUBErr	= 430,
    SP_SUBXri	= 431,
    SP_SUBXrr	= 432,
    SP_SUBri	= 433,
    SP_SUBrr	= 434,
    SP_SWAPri	= 435,
    SP_SWAPrr	= 436,
    SP_TA3	= 437,
    SP_TA5	= 438,
    SP_TADDCCTVri	= 439,
    SP_TADDCCTVrr	= 440,
    SP_TADDCCri	= 441,
    SP_TADDCCrr	= 442,
    SP_TICCri	= 443,
    SP_TICCrr	= 444,
    SP_TLS_ADDXrr	= 445,
    SP_TLS_ADDrr	= 446,
    SP_TLS_CALL	= 447,
    SP_TLS_LDXrr	= 448,
    SP_TLS_LDrr	= 449,
    SP_TSUBCCTVri	= 450,
    SP_TSUBCCTVrr	= 451,
    SP_TSUBCCri	= 452,
    SP_TSUBCCrr	= 453,
    SP_TXCCri	= 454,
    SP_TXCCrr	= 455,
    SP_UDIVCCri	= 456,
    SP_UDIVCCrr	= 457,
    SP_UDIVXri	= 458,
    SP_UDIVXrr	= 459,
    SP_UDIVri	= 460,
    SP_UDIVrr	= 461,
    SP_UMULCCri	= 462,
    SP_UMULCCrr	= 463,
    SP_UMULXHI	= 464,
    SP_UMULri	= 465,
    SP_UMULrr	= 466,
    SP_UNIMP	= 467,
    SP_V9FCMPD	= 468,
    SP_V9FCMPED	= 469,
    SP_V9FCMPEQ	= 470,
    SP_V9FCMPES	= 471,
    SP_V9FCMPQ	= 472,
    SP_V9FCMPS	= 473,
    SP_V9FMOVD_FCC	= 474,
    SP_V9FMOVQ_FCC	= 475,
    SP_V9FMOVS_FCC	= 476,
    SP_V9MOVFCCri	= 477,
    SP_V9MOVFCCrr	= 478,
    SP_WRYri	= 479,
    SP_WRYrr	= 480,
    SP_XMULX	= 481,
    SP_XMULXHI	= 482,
    SP_XNORCCri	= 483,
    SP_XNORCCrr	= 484,
    SP_XNORXrr	= 485,
    SP_XNORri	= 486,
    SP_XNORrr	= 487,
    SP_XORCCri	= 488,
    SP_XORCCrr	= 489,
    SP_XORXri	= 490,
    SP_XORXrr	= 491,
    SP_XORri	= 492,
    SP_XORrr	= 493,
    SP_INSTRUCTION_LIST_END = 494
};

#endif // GET_INSTRINFO_ENUM