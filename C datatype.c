#include<stdio.h>
int main(){
    int studentID;
    float score;
    char grade ;
    printf("StudentID=\n");
    scanf("%d",&studentID);
    printf("Score=\n");
    scanf("%f",&score);
    printf("Grade=\n");
    scanf("%c",&grade);
    {
        printf("StudentID=%d\n",studentID);
        printf("Score=%f\n",score);
        printf("Grade=%c\n",grade);
    }
    return 0;
}