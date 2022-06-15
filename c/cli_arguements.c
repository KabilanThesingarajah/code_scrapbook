#include <stdio.h>
 
int main ( int argc, char *argv[] )
{
    if ( argc != 2 ) /* argc should be 2 for correct execution */
    {
        /* We print argv[0] assuming it is the program name */
        printf( "usage: %s \"string\" \n", argv[0] );
    }
    else {
        printf("You just wrote %s \n",argv[1]);
    }

}
