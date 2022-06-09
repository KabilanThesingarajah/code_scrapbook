#include <stdio.h>

    /* for a binary file you use fread and fwrite */
int main(){

    FILE *my_file;
    my_file=fopen("./the_actual_file","a"); // opens the file with append mode.
    fprintf(my_file,"I have written onto the file"); // cats text into file
    fclose(my_file); // must close after use.
    return 0;
}
