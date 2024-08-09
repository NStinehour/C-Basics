#include <stdio.h>
#include <stdlib.h>

//declare method before calling
void sayHi(char name[], int age);
double cube(double num);
int maxCompare(int num1, int num2, int num3);

//program to practice using functions
int main() {
    //sayHi("Mike", 4);
    //printf("Cube answer: %f", cube(3.0));
    printf("%d", maxCompare(4, 10, 50));


    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d years old\n", name, age);
}

double cube(double num) {
    return num * num * num;;
}

int maxCompare(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}
