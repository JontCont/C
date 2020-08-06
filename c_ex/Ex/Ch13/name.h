#if DATA == 1       /* 若 DATA 為 1, 則含括 alex.h */
#include "alex.h"
#elif DATA == 2     /* 若 DATA 為 2, 則含括 balnd.h */
#include "bland.h"
#else               /* 若 DATA 為其他值, 則含括 unknown.h */
#include "unknown.h"
#endif
