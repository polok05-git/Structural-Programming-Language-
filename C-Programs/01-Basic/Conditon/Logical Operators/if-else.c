#include<stdio.h>
int main(){
  bool isLoggedIn = true;
bool isAdmin = false;
int securityLevel = 3; // 1 = highest

if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
  printf("Access granted\n");
} else {
  printf("Access denied\n");
}

// Try changing securityLevel and isAdmin to test different outcomes:
// securityLevel 1 = Access granted
// securityLevel 2 = Access granted
// securityLevel 3 = Access denied
// securityLevel 4 = Access denied
// If isAdmin = true, access is granted.
  return 0;
}
