#include <stdio.h>
#include <stdlib.h>

//simple program to practice storing and using user input
int main() {
    
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is: %f\n", gpa);

    //not initializing with value; initialize with count instead
    char name[20];
    printf("Enter your name: ");
    //fgets(var, maxInput, standardInputUsingConsole)
    //fgets stores multiple words
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}