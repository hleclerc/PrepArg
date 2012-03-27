// load STRCMP, ... if not done
#include "default_values.h"

// decl
#define SARG( SHORT, VAR, HELP, DEFAULT_VALUE ) PREPARG_S( VAR, DEFAULT_VALUE )
#define BARG( SHORT, VAR, HELP, DEFAULT_VALUE ) PREPARG_B( VAR, DEFAULT_VALUE )
#define DESCRIPTION

// code
#include PREPARG_FILE
#include "undefs.h"
