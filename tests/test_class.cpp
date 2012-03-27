#define PREPARG_GET_SET_PREFIX my_instance.
#define PREPARG_FILE "../../tests/test_args.h"
#include <PrepArg/usage.h>

struct MyClass {
    MyClass() {
        #include <PrepArg/constructor.h>
    }
    #include <PrepArg/attributes.h>
};

int main( int argc, char **argv ) {
    MyClass my_instance;

    #include <PrepArg/parse.h>
    #include <PrepArg/info.h>
}

