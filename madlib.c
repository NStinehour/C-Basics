#include <stdio.h>
#include <stdlib.h>

int main() {

    char color[20];
    char noun[20];
    char celebrityf[20];
    char celebrityl[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", noun);

    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityf, celebrityl);

    printf("Roses are %s, \n", color);
    printf("%s are blue, \n", noun);
    printf("I love %s %s", celebrityf, celebrityl);

    return 0;
}