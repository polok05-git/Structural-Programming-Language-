#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[50];
};
int main(){
    int found;
    struct student students[6];
    for (int i=0; i<6; i++){
        printf("Enter Roll of student %d :\n",i+1);
        scanf("%d",&students[i].id);
        printf("Enter Name of student %d :\n",i+1);
        scanf("%s",&students[i].name);
    }
    int searchID;
    printf("Enter Student ID:\n");
    scanf("%d",&searchID);
    
    for(int i=0;i<6;i++){
        if(students[i].id == searchID){
            printf("\n Student found\n");
            printf("Name:%s\n",students[i].name);
            printf("Roll:%d\n",students[i].id);
            found=1;
            break;
        }
        if(found==0){
             printf("\n Student not found!\n");
        }
    }
    return 0;
}
