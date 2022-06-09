#include <stdio.h>

int main(){
    char string[256];
    printf("Please enter a string:");
    fgets(string, 256, stdin); // this is a more secure way to get input then scanf
    printf("the string is %s",string);
    getchar();
    return 0;
}
