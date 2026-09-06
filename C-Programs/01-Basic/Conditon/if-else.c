#include<stdio.h>
int main(){
  int time = 16;

bool isMorning = time < 12;
bool isDay = time < 18;

if (isMorning) {
  printf("Good morning.");
} else if (isDay) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
  return 0;
}
