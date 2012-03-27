// load STRCMP, ... if not done
#include "default_values.h"

// decl
#define SARG( SHORT, VAR, HELP, DEFAULT_VALUE ) PREPARG_S_D( VAR, DEFAULT_VALUE )
#define BARG( SHORT, VAR, HELP, DEFAULT_VALUE ) PREPARG_B_D( VAR, DEFAULT_VALUE )
#define IARG( SHORT, VAR, HELP, DEFAULT_VALUE ) PREPARG_I_D( VAR, DEFAULT_VALUE )
#define EARG( VAR, HELP ) PREPARG_I_D( VAR, -1 )
#define DESCRIPTION( TXT )

// code
#include PREPARG_FILE
#include "undefs.h"
