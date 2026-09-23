#include <stdio.h>

// Declare two functions, myFunction and myOtherFunction
void myFunction();
void myOtherFunction();

int main() {
  myFunction(); // call myFunction (from main)
  return 0;
}

// Define myFunction
void myFunction() {
  printf("Some text in myFunction\n");
  myOtherFunction(); // call myOtherFunction (from myFunction)
}

// Define myOtherFunction
void myOtherFunction() {
  printf("Hey! Some text in myOtherFunction\n");
}
