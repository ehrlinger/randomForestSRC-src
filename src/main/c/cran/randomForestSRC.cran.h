SEXP rfsrcCIndex(SEXP sexp_traceFlag,
                 SEXP sexp_size,
                 SEXP sexp_time,
                 SEXP sexp_censoring,
                 SEXP sexp_predicted,
                 SEXP sexp_denom);
SEXP rfsrcTestSEXP(SEXP sexp_size);
SEXP rfsrcDistance(SEXP sexp_metric,
                   SEXP sexp_n,
                   SEXP sexp_p,
                   SEXP sexp_x,
                   SEXP sexp_sizeIJ,
                   SEXP sexp_rowI,
                   SEXP sexp_rowJ,
                   SEXP sexp_numThreads,
                   SEXP sexp_traceFlag);
double euclidean(uint n, uint p, uint i, uint j, double **x);
SEXP rfsrcGrow(SEXP traceFlag,
               SEXP seedPtr,
               SEXP optLow,
               SEXP optHigh,
               SEXP splitRule,
               SEXP nsplit,
               SEXP mtry,
               SEXP lot,
               SEXP baseLearn,
               SEXP vtry,
               SEXP vtryArray,
               SEXP vtryExperimental,
               SEXP ytry,
               SEXP nodeSize,
               SEXP nodeDepth,
               SEXP crWeightSize,
               SEXP crWeight,
               SEXP chunkify,
               SEXP ntree,
               SEXP observationSize,
               SEXP yInfo,
               SEXP yLevels,
               SEXP yData,
               SEXP xInfo,
               SEXP xLevels,
               SEXP xData,
               SEXP sampleInfo,
               SEXP xWeightStat,
               SEXP yWeight,
               SEXP xWeight,
               SEXP timeInterest,
               SEXP nImpute,
               SEXP perfBlock,
               SEXP quantile,
               SEXP xPreSort,
               SEXP numThreads);
SEXP rfsrcPredict(SEXP traceFlag,
                  SEXP seedPtr,
                  SEXP optLow,
                  SEXP optHigh,
                  SEXP chunkify,
                  SEXP ntree,
                  SEXP observationSize,
                  SEXP yInfo,
                  SEXP yLevels,
                  SEXP yData,
                  SEXP xInfo,
                  SEXP xLevels,
                  SEXP xData,
                  SEXP sampleInfo,
                  SEXP timeInterestInfo,
                  SEXP totalNodeCount,
                  SEXP tLeafCount,
                  SEXP seedInfo,
                  SEXP hdim,
                  SEXP baseLearn,
                  SEXP treeID,
                  SEXP nodeID,
                  SEXP hc_zero,
                  SEXP hc_oneAugIntr,
                  SEXP hc_oneAugSyth,
                  SEXP hc_one,
                  SEXP hc_parmID,
                  SEXP hc_contPT,
                  SEXP hc_contPTR,
                  SEXP hc_mwcpSZ,
                  SEXP hc_mwcpPT,
                  SEXP hc_augmXone,
                  SEXP hc_augmXtwo,
                  SEXP hc_augmXS,
                  SEXP hc_augmSythTop,
                  SEXP tnRMBR,
                  SEXP tnAMBR,
                  SEXP tnRCNT,
                  SEXP tnACNT,
                  SEXP tnSURV,
                  SEXP tnMORT,
                  SEXP tnNLSN,
                  SEXP tnCSHZ,
                  SEXP tnCIFN,
                  SEXP tnREGR,
                  SEXP tnCLAS,
                  SEXP rTargetInfo,
                  SEXP ptnCount,
                  SEXP xMarginalInfo,
                  SEXP intrPredictorInfo,
                  SEXP partial,
                  SEXP fobservationSize,
                  SEXP frSize,
                  SEXP frData,
                  SEXP fxData,
                  SEXP perfBlock,
                  SEXP quantileInfo,
                  SEXP getTree,
                  SEXP numThreads);
void exit2R();
void printR(char *format, ...);
void setNativeGlobalEnv();
void *copy1DObject(SEXP arr, char type, uint size, char actual);
void *copy2DObject(SEXP arr, char type, char flag, uint row, uint col);
void free_1DObject(void *arr, char type, uint size);
void free_2DObject(void *arr, char type, char flag, uint row, uint col);
void initProtect(uint  stackCount);
void *stackAndProtect(uint  *sexpIndex,
                      char   sexpType,
                      uint   sexpIdentity,
                      ulong  size,
                      double value,
                      char  *sexpString,
                      void  *auxiliaryPtr,
                      uint   auxiliaryDimSize,
                      ...);
void setUserTraceFlag (uint traceFlag);
uint getUserTraceFlag ();
