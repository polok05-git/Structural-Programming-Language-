#include <stdio.h>

int calculateSum(int x, int y) {
  return x + y;
}

int main() {
  // Create an array
  int resultArr[6];

  // Call the function with different arguments and store the different results in the array
  resultArr[0] = calculateSum(5, 3);
  resultArr[1] = calculateSum(8, 2);
  resultArr[2] = calculateSum(15, 15);
  resultArr[3] = calculateSum(9, 1);
  resultArr[4] = calculateSum(7, 7);
  resultArr[5] = calculateSum(1, 1);

  for (int i = 0; i < 6; i++) {
    printf("Result%d is = %d\n", i + 1, resultArr[i]);
  }

  return 0;
}
