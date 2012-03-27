// load STRCMP, ... if not done
#include "default_values.h"

// decl
#define SARG( SHORT, VAR, HELP, DEFAULT_VALUE ) \
    PREPARG_DISP_S( #VAR " -> " ); \
    PREPARG_DISP_S( PREPARG_GET_SET_PREFIX VAR ); \
    PREPARG_DISP_S( "\n" );

#define BARG( SHORT, VAR, HELP, DEFAULT_VALUE ) \
    PREPARG_DISP_S( #VAR " -> " ); \
    PREPARG_DISP_B( PREPARG_GET_SET_PREFIX VAR ); \
    PREPARG_DISP_S( "\n" );

#define EARG( VAR, HELP ) \
    PREPARG_DISP_S( #VAR " -> " ); \
    PREPARG_DISP_B( PREPARG_GET_SET_PREFIX VAR ); \
    PREPARG_DISP_S( "\n" );

#define DESCRIPTION( TXT )

// code
#include PREPARG_FILE
#include "undefs.h"
