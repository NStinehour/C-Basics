#include <stdio.h>
#include <stdlib.h>

int main() {

//basic printing practices
  const int NUM_PETS = 3;
  char personName [] = "Bob"; //constant
  int personAge = 24;
  printf("%s was %d years old and he has %d pets", personName, personAge, NUM_PETS);

  return 0;
}