#include <stdio.h>

int main(){
    int a = 2;
    switch (a){
        case 1: // you cannot put a variable name here.
            printf("%d is 1",a);
            break; // breaks are needed as multiple cases can be met at the same time
        case 2:
            printf("%d is 2",a);
            break;
        case 3:
            printf("%d is 3",a);
            break;
        case 4:
            printf("%d is 4",a);
            break;
        default:
            printf("%d, is not [1-4]",a);
            break;
    }
    return 0;
}
