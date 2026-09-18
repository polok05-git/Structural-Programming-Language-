#include<stdio.h>
int main(){
  int mynum[]={23,45.32,75,13,76};
  int i;
  int length=sizeof(mynum)/sizeof(mynum[0]);
  for(i=0; i<length ;i++)
  {
      printf("i=%d\n",i);
      printf("Number=%d\n",mynum[i]);
      printf("Memory size=%zu\n",sizeof(mynum[i]));
  }
  printf("Length=%d\n",length);
  printf("mynum Size=%zu\n",sizeof(mynum));
  printf("mynum[0] Size=%zu\n",sizeof(mynum[0]));
return 0;
}
