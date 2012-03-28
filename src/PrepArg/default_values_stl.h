#ifndef DEFAULT_VALUES_STL_H
#define DEFAULT_VALUES_STL_H

#include <iostream>

#ifndef PREPARG_DISP_S
#define PREPARG_DISP_S( S ) std::cout << ( ( S ) ? ( S ) : "" );
#endif

#ifndef PREPARG_DISP_C
#define PREPARG_DISP_C( S ) std::cout << S;
#endif

#ifndef PREPARG_DISP_I
#define PREPARG_DISP_I( S ) std::cout << S;
#endif


#include "default_values.h"

#endif // DEFAULT_VALUES_STL_H
