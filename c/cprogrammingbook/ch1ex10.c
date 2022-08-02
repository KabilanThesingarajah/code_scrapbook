#include <stdio.h>

#define TARGETCHAR '\t'
#define TARGETCHARSYMBOL '\t'

// loop as long as there is not 2 newlines

int main(){

    int c, newline_succesion, targetchar_sum, next_char;
    char c_output;

    char c_total_output[2048];

    targetchar_sum = 0;
    newline_succesion = 0;
    next_char = 0;
    while ( newline_succesion != 2 ){
        c = getchar();
    switch (c){
        case '\t':
            c_output = "\\t";

        case '\b':
            c_output = "\\b";

        case '\\':
            c_output = "\\";
    }

        if ( c == TARGETCHAR ){ c_output = TARGETCHARSYMBOL; } 
        else{ c_output = c;}
        if (c == '\n'){
            newline_succesion++ ;
        }
        else{
            newline_succesion = 0;
        }
        c_total_output[next_char++] = c_output;
    }
    printf("%d\n",targetchar_sum);
    printf("%2048s",c_total_output);
    return 0;
}
