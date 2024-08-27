/*
Q8. Write a program to read the name of a student (studentName), roll
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
alphanumeric string. Display the data as read. Hint: Create a Student
structure and write appropriate functions.
*/

#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student
{
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};

// Function to read student data
void readStudentData(struct Student *s)
{
    printf("Enter student name: ");
    fgets(s->studentName, sizeof(s->studentName), stdin);

    printf("Enter roll number: ");
    fgets(s->rollNo, sizeof(s->rollNo), stdin);

    printf("Enter total marks: ");
    scanf("%d", &s->totalMarks);

    // Remove newline character from studentName and rollNo
    s->studentName[strcspn(s->studentName, "\n")] = '\0';
    s->rollNo[strcspn(s->rollNo, "\n")] = '\0';
}

// Function to display student data
void displayStudentData(struct Student s)
{
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.studentName);
    printf("Roll Number: %s\n", s.rollNo);
    printf("Total Marks: %d\n", s.totalMarks);
}

int main()
{
    struct Student s;

    // Read student data
    readStudentData(&s);

    // Display student data
    displayStudentData(s);

    return 0;
}
