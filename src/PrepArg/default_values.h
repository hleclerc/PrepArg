#ifndef DEFAULT_VALUES_H
#define DEFAULT_VALUES_H

#define PREPARG_S( A, DEFAULT_VALUE ) const char *A = DEFAULT_VALUE

#define PREPARG_B( A, DEFAULT_VALUE ) bool A = DEFAULT_VALUE

#define PREPARG_STREQ_U2M( A, B ) _preparg_streq_u2m( A, B )

#define PREPARG_ARGC argc

#define PREPARG_ARGV argv

#define PREPARG_SET_S( VAR, VAL ) VAR = VAL;

#define PREPARG_SET_B( VAR ) VAR = true;

#define PREPARG_USAGE( P ) usage( P );

#define PREPARG_ERROR( P ) PREPARG_DISP_S( "Try '" ); PREPARG_DISP_S( P ); PREPARG_DISP_S( " --help' for more information.\n" );

#define PREPARG_PRG_NAME PREPARG_ARGV[ 0 ]

#define PREPARG_DISP_S( S ) printf( "%s", S );

#define PREPARG_DISP_C( S ) printf( "%c", S );

#define PREPARG_DISP_B( S ) printf( "%i", S );

#endif // DEFAULT_VALUES_H
