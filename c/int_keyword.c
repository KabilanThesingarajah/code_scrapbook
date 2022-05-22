#include <limits.h>
#include <stdio.h>
 
int main()
{
    printf("minimum int value = %d\n"
           "maximum int value = %d\n"
           "size of int in bytes = %zu\n"
           "size of int in bits = %zu\n",
           INT_MIN, INT_MAX, sizeof(int),
           sizeof(int) * CHAR_BIT);
    printf("UINT_MAX + 1 = %u", UINT_MAX + 1);
    printf("\n")
}
