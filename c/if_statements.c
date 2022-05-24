#include <stdio.h>

int main(){
    // basic if statement
    if (5 < 10)
        printf("condition is true\n");
    else if ( 5 >= 10){
        printf("Condition that should be false is entered\n");
    }
    else{return 1;}

    printf("\n");
    // operators
    // NOT
    if (!0){printf("!0\n");}
    // OR
    if (1 || 0 ){printf("1 || 0\n");}
    // AND
    if (1&&0){printf("1&&0\n");}
    // AND beats OR
    if (1 || 0 && 1){printf("!0\n");}
    // brackets for readability
    if( (1||0)&& 1) {printf("(1||0)&& 1\n");}

}
