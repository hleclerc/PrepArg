// load STRCMP, ... if not done
#include "default_values.h"

// decl
#define SARG( SHORT, VAR, HELP, DEFAULT_VALUE ) \
    PREPARG_DISP_S( #VAR " -> " ); \
    PREPARG_DISP_S( VAR ); \
    PREPARG_DISP_S( "\n" );

#define BARG( SHORT, VAR, HELP, DEFAULT_VALUE ) \
    PREPARG_DISP_S( #VAR " -> " ); \
    PREPARG_DISP_B( VAR ); \
    PREPARG_DISP_S( "\n" );

#define DESCRIPTION

// code
#include PREPARG_FILE
#include "undefs.h"
