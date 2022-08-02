#include <stdio.h>

#define TARGETCHAR '\t'
#define TARGETCHARSYMBOL '\TARGETCHARSYMBOL'

// loop as long as there is not 2 newlines

int main(){

    int c, newline_succesion, targetchar_sum, c_output;

    targetchar_sum = 0;
    newline_succesion = 0;
    while ( newline_succesion != 2 ){
        c = getchar();
        if ( c == TARGETCHAR ){ ++targetchar_sum; } 
        if (c == '\n'){
            newline_succesion++ ;
        }
        else{
            newline_succesion = 0;
        }
    }
    printf("%d\n",targetchar_sum);

    return 0;
}
