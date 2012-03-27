// load STRCMP, ... if not done
#include "default_values.h"

// decl
#define SARG( SHORT, VAR, HELP, DEFAULT_VALUE ) PREPARG_S( VAR )
#define BARG( SHORT, VAR, HELP, DEFAULT_VALUE ) PREPARG_B( VAR )
#define DESCRIPTION( TXT )

// code
#include PREPARG_FILE
#include "undefs.h"
