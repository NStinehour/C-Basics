#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 3;
    int *pAge = &age;
    double gpa = 3.5;
    double * pGpa = &gpa;

    printf("%p\n", &*&age);

    //printing a pointer
    printf("Age's memory address: %p", pAge);
    //dereferencing a pointer
    printf("Age's memory address: %d", *pAge);
    return 0;
}