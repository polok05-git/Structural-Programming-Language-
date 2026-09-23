#include <stdio.h>

void add(int a, int b) { printf("Result: %d\n", a + b); }
void subtract(int a, int b) { printf("Result: %d\n", a - b); }
void multiply(int a, int b) { printf("Result: %d\n", a * b); }

int main() {
  int choice, x = 10, y = 5;

  void (*operations[3])(int, int) = { add, subtract, multiply }; //pointer use

  printf("x = %d, y = %d\n\n", x, y);
  printf("Choose an operation:\n");
  printf("0: Add\n1: Subtract\n2: Multiply\n");
  scanf("%d", &choice);

  if (choice >= 0 && choice < 3) {
    operations[choice](x, y);
  } else {
    printf("Invalid choice!\n");
  }

  return 0;
}
