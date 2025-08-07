// WAP in C to create a structure to store the information of n numbers of employees where employee information includes the
// data members as emp id ,name , designation, basic salary, hra (15% of basic) and da(50% of basic). now display the information
// of the employee with gross salary.

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char designation[50];
    float basic, hra, da, gross;
};

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    printf("\nEnter the details as per the following format:");
    printf("Employee ID, Name, Designation, Basic salary");
    struct Employee emp[n];
    for (int i = 1; i <= n; i++)
    {
        printf("\n\nEnter the details of Employee no. %d :", i);
        scanf("%d %s %s %f", &emp[i].id, emp[i].name, emp[i].designation, &emp[i].basic);
        emp[i].hra = 0.15 * emp[i].basic;
        emp[i].da = 0.5 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
    }
    printf("\n\nTherefore, the details are:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("Employee no. %d:", i);
        printf("Employee ID: %d\nName: %s\nDesignation:%s\nBasic Salary: %.2f\nhra: %.2f\nda: %.2f\nGross Salary: %.2f\n\n", emp[i].id, emp[i].name, emp[i].designation, emp[i].basic, emp[i].hra, emp[i].da, emp[i].gross);
    }
    return 0;
}
