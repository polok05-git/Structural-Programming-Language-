#include <stdio.h>

// Global variable
int x = 4;

void myFunction() {

  int x=6;//Local variable 
  
  printf("%d\n", ++x);  // Increment the value of x by 1 and print it
}

int main() {
  myFunction();

  printf("%d\n", x); // Print the global variable x
  return 0;
}
