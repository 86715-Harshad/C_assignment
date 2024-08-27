/*
Q11. Create a structure called Employee that includes three fields - a first
name (type String), a last name (type String) and a monthly salary (double).
Write functions to initialize the fields, print them and modify the values in
the given object.

Example methods:
 void emp_init(struct emp* e);
 void set_salary(struct emp *e, double sal);
 void emp_display(struct emp *e);

Write the test code in the main(). Create two emp objects and display each
object’s yearly salary. Then give each Employee a 10% raise and display
each Employee’s yearly salary again.

*/

#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct emp
{
    char first_name[50];
    char last_name[50];
    double monthly_salary;
};

// Function to initialize the Employee fields
void emp_init(struct emp *e, const char *first_name, const char *last_name, double salary)
{
    strcpy(e->first_name, first_name);
    strcpy(e->last_name, last_name);
    e->monthly_salary = salary;
}

// Function to set the salary of an Employee
void set_salary(struct emp *e, double sal)
{
    e->monthly_salary = sal;
}

// Function to display the Employee details
void emp_display(struct emp *e)
{
    printf("Employee: %s %s\n", e->first_name, e->last_name);
    printf("Monthly Salary: %.2f\n", e->monthly_salary);
    printf("Yearly Salary: %.2f\n", e->monthly_salary * 12);
}

int main()
{
    // Create two Employee objects
    struct emp emp1, emp2;

    // Initialize the Employee objects
    emp_init(&emp1, "Amit", "Sharma", 3000.00);
    emp_init(&emp2, "Priya", "Verma", 3500.00);

    // Display the initial yearly salaries
    printf("Initial Salaries:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    // Give each Employee a 10% raise
    set_salary(&emp1, emp1.monthly_salary * 1.10);
    set_salary(&emp2, emp2.monthly_salary * 1.10);

    // Display the updated yearly salaries
    printf("\nSalaries after 10%% raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
