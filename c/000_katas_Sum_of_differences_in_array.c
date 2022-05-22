#include <stdio.h>

int main(){
    int size = sizeof (arr)  / sizeof(arr[0]);
    int sum;
    for (int i = 0;i < size - 1;i++){
        sum += arr[i] - arr[i+1];
    }
    printf(sum);
    return 0;
}

