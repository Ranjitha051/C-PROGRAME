#include<stdio.h>
struct employee{
int id;
char name[50];
    float salary;
    };
    int main() {
    struct employee emp[5];
    int i;
    float totalsalary =0 ,avgsalary;
    printf("enter details 0f 5 employees:\n");
    for(i=0;i<5;i++) {
        printf("\n empolyee %d\n",i+1);
        printf("enter employee ID:");
        scanf("%d",&emp[i].id);
        printf("enter name:");
        scanf("%s",emp[i].name);
        printf("enter salary:");
        scanf("%f",&emp[i].salary);
        totalsalary+=emp[i].salary;
    }
    printf("\nemployee details:\n");
    for(i=0;i<5;i++) {
        printf("\n employee %d\n",i+1);
        printf("ID:%d\n",emp[i].id);
        printf("name:%s\n",emp[i].name);
        printf("salary: %2f\n",emp[i].salary);
    }
    avgsalary = totalsalary / 5;
    printf("\n average salary of 5 empolyees=%.2f\n",avgsalary);
    return 0;
    }


