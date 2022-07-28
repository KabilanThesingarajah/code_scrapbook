#include <stdio.h>

int main(){
    int n = 50;
    long long signature[3] = {0,0,1};
    long long a[n];

    a[0] = signature[0];
    a[1] = signature[1];
    a[2] = signature[2];

    for (int i = 3; i < n; i++){
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }

    for (int j = 0;j < n; j++){
        printf("%d",a[j]);
    }

    return 0;

}
