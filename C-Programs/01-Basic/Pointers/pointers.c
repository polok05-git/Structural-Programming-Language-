#include<stdio.h>
int main(){
  int num[]={23,76,43,34,23,89,72};
  char nam[]="Sylhet Engineering College";
//int* ptr1 = &num; 
//int* ptr2 = &nam;
  int i;
  int length1=sizeof(num)/sizeof(num[0]);
  int length2=sizeof(nam)/sizeof(nam[0]);
for(i=0;i<length1;i++)
{
    printf("i= %d\n",i);
    printf("Number= %d\n",num[i]);
// or printf("Number=%p",*num[i]);
     printf(" Memory Address= %p\n",&num[i]);
//or printf("%p",ptr1);
}
for(i=0;i<length2;i++)
{
    printf("i= %d\n",i);
    printf("Char= %c\n",nam[i]);
// or printf("Char=%c",*nam[i]);
     printf("Memory Address= %p\n",&nam[i]);
//or printf("%p",ptr2);
}
printf("Char Full name=%s\n", nam);
return 0;
}
