#include<stdio.h>
int main(){
    int length,width;
    int area;
    printf("length=");
    scanf("%d",&length);
    printf("width=");
    scanf("%d",&width);
    {
        area = length * width;
    }
    printf("Area=%d",area);
    return 0;
}