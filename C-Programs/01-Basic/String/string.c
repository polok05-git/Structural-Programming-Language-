#include<stdio.h>
int main(){
  char mynum[]="Sylhet Engineering College";
  int i;
  int length=sizeof(mynum)/sizeof(mynum[0]);
  for(i=0; i<length ;i++)
  {
      printf("i=%d\n",i);
      printf("Number=%c\n",mynum[i]);
      printf("Memory size=%zu\n",sizeof(mynum[i]));
  }
  printf("Full name=%s\n",mynum);
  printf("Length=%d\n",length);
  printf("mynum Size=%zu\n",sizeof(mynum));
  printf("mynum[0] Size=%zu\n",sizeof(mynum[0]));
return 0;
}
