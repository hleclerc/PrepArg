DESCRIPTION( "test prg" );

SARG( 's', my_string, "A string", "default value" );
BARG( 'b', my_bool  , "A boolean", false );
BARG( 'c', my_anbool, "Another boolean", false );
IARG( 'i', my_int   , "An integer", 0 );

EARG( my_ending_argument, "files" );
