// load STRCMP, ... if not done
#include "default_values.h"

// decl
#define SARG( SHORT, VAR, HELP, DEFAULT_VALUE ) VAR = DEFAULT_VALUE
#define BARG( SHORT, VAR, HELP, DEFAULT_VALUE ) VAR = DEFAULT_VALUE
#define EARG( VAR, HELP ) VAR = -1
#define DESCRIPTION( TXT )

// code
#include PREPARG_FILE
#include "undefs.h"
