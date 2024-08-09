#include <stdio.h>
#include <stdlib.h>

//simple program to practice switches
int main() {

    char grade = 'A';

    switch(grade) {
    case 'A' :
        printf("You did great!");
        break;
    case 'B' :
        printf("You did good!");
        break;
    case 'C' :
        printf("You did ok!");
        break;
    case 'D' :
        printf("You did!");
        break;
    default :
        printf("Invalid Grade");
    }
    


    return 0;
}