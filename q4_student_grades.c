/*
Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:

Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F
*/

#include <stdio.h>

int main()
{
    int marksObt[5];
    int totalMarks = 0;
    float avg;
    char grade;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marksObt[i]);
        totalMarks += marksObt[i];
    }

    // Calculate average
    avg = totalMarks / 5.0;

    // Determine grade
    if (avg >= 90)
    {
        grade = 'E'; // Ex
    }
    else if (avg >= 80)
    {
        grade = 'A';
    }
    else if (avg >= 70)
    {
        grade = 'B';
    }
    else if (avg >= 60)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }

    // Output the result
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", avg);
    printf("Grade: %c\n", grade);

    return 0;
}
