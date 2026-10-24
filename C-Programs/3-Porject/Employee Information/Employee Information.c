#include<stdio.h>
#include<string.h>

struct organisation
{
    char name[50];
    char laoction[100];
    char ownr[100];
    int totalEmployees;
    float annualRevenue;
};
struct Employee
{
    int id;
    char name [100];
    char department [50];
    char position[50];
    float salary;
};

struct organisation org;
struct Employee emp[100];
int empCount = 0;

void inputOrganisation(){
    printf("Organisation Name : ");
    scanf(" %[^\n]", org.name);
    printf("Location          : ");
    scanf(" %[^\n]", org.laoction);
    printf("Owner             : ");
    scanf(" %[^\n]", org.ownr);
    printf("Total Employees   : ");
    scanf("%d", &org.totalEmployees);
    printf("Annual Revenue    : ");
    scanf("%f", &org.annualRevenue);
}

void inputEmployee(){
    if(empCount >= 100){
        printf("\nEmployee limit reached! Maximum 100 employees can be added.\n");
        return;
    }
    printf("Employee ID    : ");
    scanf("%d", &emp[empCount].id);
    printf("Employee Name  : ");
    scanf(" %[^\n]", emp[empCount].name);
    printf("Department     : ");
    scanf(" %[^\n]", emp[empCount].department);
    printf("Position       : ");
    scanf(" %[^\n]", emp[empCount].position);
    printf("Salary         : ");
    scanf("%f", &emp[empCount].salary);
    empCount++;
    printf("\nEmployee added successfully!\n");
}

void showOrganisation(){
    printf("\n--- Organisation Details ---\n");
    printf("Name          : %s\n", org.name);
    printf("Location      : %s\n", org.laoction);
    printf("Owner         : %s\n", org.ownr);
    printf("Total Staff   : %d\n", org.totalEmployees);
    printf("Added Staff   : %d\n", empCount);
    printf("Annual Revenue: %.2f\n", org.annualRevenue);
}

void showEmployees(){
    int i;
    if(empCount == 0){
        printf("\nNo employee record found.\n");
        return;
    }
    printf("\n--- Employee List ---\n");
    printf("%-6s %-20s %-14s %-12s %10s\n", "ID", "NAME", "DEPARTMENT", "POSITION", "SALARY");
    for(i = 0; i < empCount; i++){
        printf("%-6d %-20s %-14s %-12s %10.2f\n",
               emp[i].id, emp[i].name, emp[i].department, emp[i].position, emp[i].salary);
    }
}

void totalSalary(){
    int i;
    float sum = 0;
    for(i = 0; i < empCount; i++){
        sum += emp[i].salary;
    }
    printf("\nTotal Salary of %d employee(s): %.2f\n", empCount, sum);
    if(empCount > 0){
        printf("Average Salary              : %.2f\n", sum / empCount);
    }
}

int main(){
    int choice;
    printf("===== Organisation Management System =====\n");
    printf("1. Enter Organisation Details\n");
    printf("2. Add Employee\n");
    printf("3. Show Organisation Details\n");
    printf("4. Show Employee List\n");
    printf("5. Total & Average Salary\n");
    printf("0. Exit\n");

    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: inputOrganisation();     break;
            case 2: inputEmployee();         break;
            case 3: showOrganisation();     break;
            case 4: showEmployees();         break;
            case 5: totalSalary();           break;
            case 0: printf("Farewell!\n");     break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}
