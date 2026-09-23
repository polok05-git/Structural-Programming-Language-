#include <stdio.h>
#include<string.h>

// Create a structure
struct Car {
  char brand[30];
  char model[30];
  int year;
};

int main() {
// Create a structure variable and assign values to it
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};

// Copy s1 values to s2
  car1=car2;

// Change s2 values or Modify values
  strcpy(car2.brand,"Ford");
  strcpy(car2.model,"Mustang");
  car2.year = 1969;
  
// Create a structure variable and assign values to it
  struct Car car3 = {"Toyota", "Corolla", 2011};

// Copy s1 values to s3
  car1 = car3;

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);//Toyota Corolla 2011
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);//Ford Mustang 1969
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);//Toyota Corolla 2011

  return 0;
}
