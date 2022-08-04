#include <stdio.h>

/*
 * Arrays actually store each item in memory adjacently. So we have a special way to use pointers and addresses.
 */

void print_array(int array[],int len);

int main(){
    int examplearray[10] = {0}; // if you do not give them an initial value, then they will just have the random chunk of data in that memory before.
    examplearray[0] = 5; // assignment
    char mystring[10]; // we don't have strings without this.
    print_array(examplearray,10);
    return 0;
}

void print_array(int array[],int len){
    for (int i = 0;i < len ; i++){
        printf("%d , ",array[i]);
    }
    printf("\n");
}
