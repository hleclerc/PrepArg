#ifndef DEFAULT_VALUES_H
#define DEFAULT_VALUES_H


#ifndef PREPARG_DISP_S
#define PREPARG_DISP_S( S ) printf( "%s", S );
#endif

#ifndef PREPARG_DISP_C
#define PREPARG_DISP_C( S ) printf( "%c", S );
#endif

#ifndef PREPARG_
#define PREPARG_DISP_B( S ) printf( "%i", S );
#endif

#ifndef PREPARG_S
#define PREPARG_S( A ) const char *A
#endif

#ifndef PREPARG_B
#define PREPARG_B( A ) bool A
#endif

#ifndef PREPARG_S_D
#define PREPARG_S_D( A, DEFAULT_VALUE ) PREPARG_S( A ) = DEFAULT_VALUE
#endif

#ifndef PREPARG_B_D
#define PREPARG_B_D( A, DEFAULT_VALUE ) PREPARG_B( A ) = DEFAULT_VALUE
#endif

#ifndef PREPARG_ARGC
#define PREPARG_ARGC argc
#endif

#ifndef PREPARG_ARGV
#define PREPARG_ARGV argv
#endif

#ifndef PREPARG_GET_SET_PREFIX
#define PREPARG_GET_SET_PREFIX
#endif

#ifndef PREPARG_SET_S
#define PREPARG_SET_S( VAR, VAL ) PREPARG_GET_SET_PREFIX VAR = VAL;
#endif

#ifndef PREPARG_SET_B
#define PREPARG_SET_B( VAR ) PREPARG_GET_SET_PREFIX VAR = 1;
#endif

#ifndef PREPARG_STREQ_U2M
#define PREPARG_STREQ_U2M( A, B ) _preparg_streq_u2m( A, B )
#endif

#ifndef PREPARG_USAGE
#define PREPARG_USAGE( P ) usage( P );
#endif

#ifndef PREPARG_ERROR
#define PREPARG_ERROR( P ) PREPARG_DISP_S( "Try '" ); PREPARG_DISP_S( P ); PREPARG_DISP_S( " --help' for more information.\n" );
#endif

#ifndef PREPARG_PRG_NAME
#define PREPARG_PRG_NAME PREPARG_ARGV[ 0 ]
#endif

#endif // DEFAULT_VALUES_H
