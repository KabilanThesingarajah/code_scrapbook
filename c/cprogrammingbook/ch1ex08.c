#include <stdio.h>

#define TARGETCHAR '\t'

int main(){

    int c, nl;

    nl = 0;
    while ( ( c = getchar() ) != '\n'){
        if ( c == TARGETCHAR ){ ++nl; } 
    }
    printf("%d\n",nl);

    return 0;
}
