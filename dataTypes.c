#include <stdio.h>
#include <stdlib.h>

//examples of initializing data types in C
int main() {
    int age = 40;
    double money = 5.43;
    char letter = 'a';
    char word[] = "multiple letters"; //inmutable

    int numbers[] = {1, 3, 4, 5};
    numbers[3] = 100;
    printf("%d", numbers[3]); //0-based indexing

    return 0;
}