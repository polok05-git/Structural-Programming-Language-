#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}

int main() {
  int numbers[] = { 5, 2, 9, 1, 7 };
  int size = sizeof(numbers) / sizeof(numbers[0]);

  qsort(numbers, size, sizeof(int), compare);

  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}
