#include <stdio.h>
#include <sys/param.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
    if ( argc > 1 ) {

        char szReal[ PATH_MAX ];

        if ( realpath( argv[ 1 ], szReal ) ) {
            printf( "%s\n", szReal );
        } else {
            fprintf( stderr, "Bad path: %s\n", argv[ 1 ] );
            return 2;
        }

    } else {
        fprintf( stderr, "realpath <path>\n" );
        return 1;
    }

    return 0;
}
