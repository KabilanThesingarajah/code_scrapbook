#include <stdio.h>

/*
 * A struct is similar to a class, but with only attributes, and not methods. See this example.
*/

struct my_struct_blueprint{
    int member1;
    int member2;
    /*  .
        .
        . */
    float membern;

};


int main(){

    struct my_struct_blueprint my_struct_build;

    my_struct_build.member1 = 5;

    return 0;
}
