#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[255];

    //create file in the same directory
    FILE * fpointer = fopen("employees.txt", "r");
    //write; add information to file; overrides old files
    //fprintf(fpointer, "Bob, Clerk\nTim, Accountant");

    //append; add to old file
    //fprintf(fpointer, "\nSophia, HR");

    //read first line of the file then move pointer down a line
    fgets(line, 255, fpointer);
    //read second line of the file
    fgets(line, 255, fpointer);
    printf("%s", line);



    fclose(fpointer);
    return 0;
}