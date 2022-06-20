#include <stdio.h>
#include <stdlib.h>

/* 

   A pointer is a variable with the syntax *name (see below).
   When you want to store the address of a variable, you use & (ampersand for address)

 */

int main(){
    int x = 10; // a normal variable declaration
    int *pointer = &x; // this pointer points to the address of x
    printf("the value of pointer is %d \n",pointer);
    int *ptr2 = &x;
    printf("%d",pointer);
    ptr2 = malloc( sizeof( *ptr2)); // used to allocate memory at runtime.
    free(*ptr2); // free is used only if malloc or similar functions are called, and not when normally pointed as above;
    return 0;
}
