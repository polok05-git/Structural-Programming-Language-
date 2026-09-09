#include <stdio.h>

int main() {
    int num, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0;
    } else {
      for (i = 2; i * i <= num; i++) {
           if (num % i == 0) {
                prime = 0;
                break;
            }
       }
return 0;
}