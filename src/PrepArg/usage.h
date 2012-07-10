#ifndef PREPARG_DISP_S
#include <stdio.h>
#endif

// load STRCMP, ... if not done
#include "default_values.h"


static char _preparg_u( char v ) {
    return v == '_' ? '-' : v;
}

static void _preparg_dispu( const char *v ) {
    for( int i = 0; v[ i ]; ++i )
        PREPARG_DISP_C( _preparg_u( v[ i ] ) );
}

static int _preparg_streq_u2m( const char *v, const char *l ) {
    for( int i = 0; ; ++i ) {
        if ( v[ i ] == 0 and l[ i ] == 0 )
            return 1;
        if ( v[ i ] != _preparg_u( l[ i ] ) )
            return 0;
    }
}

static bool _preparg_atoi( int &res, const char *v ) {
    res = 0;
    for( int i = 0; v[ i ]; ++i ) {
        if ( v[ i ] < '0' or v[ i ] > '9' )
            return false;
        res = 10 * res + ( v[ i ] - '0' );
    }
    return true;
}

static void usage( const char *prg ) {
    PREPARG_DISP_S( "Usage: '" );
    PREPARG_DISP_S( prg );
    PREPARG_DISP_S( "' [options]" );
    
    // EARG
    #define SARG( SHORT, VAR, HELP, DEFAULT_VALUE )
    #define BARG( SHORT, VAR, HELP, DEFAULT_VALUE )
    #define IARG( SHORT, VAR, HELP, DEFAULT_VALUE )
    #define EARG( VAR, HELP ) PREPARG_DISP_S( " [" HELP "]" );
    #define DESCRIPTION( STR )
    #include PREPARG_FILE
    #include "undefs.h"
    
    PREPARG_DISP_S( "\n" );

    // options
    #define SARG( SHORT, VAR, HELP, DEFAULT_VALUE ) \
        PREPARG_DISP_S( "  " ); \
        if ( SHORT ) { \
            PREPARG_DISP_S( "-" ); \
            PREPARG_DISP_C( SHORT ); \
            PREPARG_DISP_S( " or " ); \
        } \
        PREPARG_DISP_S( "--" ); \
        _preparg_dispu( #VAR ); \
        PREPARG_DISP_S( " arg: " ); \
        PREPARG_DISP_S( HELP ); \
        PREPARG_DISP_S( " (default='" ); \
        PREPARG_DISP_S( DEFAULT_VALUE ); \
        PREPARG_DISP_S( "')\n" )

    #define BARG( SHORT, VAR, HELP, DEFAULT_VALUE ) \
        PREPARG_DISP_S( "  " ); \
        if ( SHORT ) { \
            PREPARG_DISP_S( "-" ); \
            PREPARG_DISP_C( SHORT ); \
            PREPARG_DISP_S( " or " ); \
        } \
        PREPARG_DISP_S( "--" ); \
        _preparg_dispu( #VAR ); \
        PREPARG_DISP_S( ": " ); \
        PREPARG_DISP_S( HELP ); \
        PREPARG_DISP_S( "\n" )

    #define IARG( SHORT, VAR, HELP, DEFAULT_VALUE ) \
        PREPARG_DISP_S( "  " ); \
        if ( SHORT ) { \
            PREPARG_DISP_S( "-" ); \
            PREPARG_DISP_C( SHORT ); \
            PREPARG_DISP_S( " or " ); \
        } \
        PREPARG_DISP_S( "--" ); \
        _preparg_dispu( #VAR ); \
        PREPARG_DISP_S( ": " ); \
        PREPARG_DISP_S( HELP ); \
        PREPARG_DISP_S( "\n" )

    #define EARG( VAR, HELP )

    #define DESCRIPTION( STR ) \
        PREPARG_DISP_S( STR ); \
        PREPARG_DISP_S( "\n" )

    #include PREPARG_FILE
    #include "undefs.h"
}
