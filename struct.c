#include <stdio.h>
#include <stdlib.h>

//struct practice
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;

};

int main() {

    //makes a new Student
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Bob");
    strcpy(student1.major, "Art");

    return 0;
}