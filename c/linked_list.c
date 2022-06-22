#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    struct node *next;
};

int main(){

    struct node *root;
    root = (struct node *) malloc( sizeof(struct node));
    root ->x = 5; // root points to x 
    printf("%d",root);

    return 0;
}
