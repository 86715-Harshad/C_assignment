/*
Q10. Read at most 10 names of students and store them into an array of
char nameOfStudents[10][50]. Sort the array and display them back. Hint:
Use qsort() method.

*/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Function to swap two strings
void swap(char *a, char *b)
{
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

// Partition function for quicksort
int partition(char arr[MAX_STUDENTS][MAX_NAME_LENGTH], int low, int high)
{
    char pivot[MAX_NAME_LENGTH];
    strcpy(pivot, arr[high]);
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (strcmp(arr[j], pivot) < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quicksort function
void quickSort(char arr[MAX_STUDENTS][MAX_NAME_LENGTH], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int n, i;

    printf("Enter the number of students (up to 10): ");
    scanf("%d", &n);

    // Ensure the number of students does not exceed the limit
    if (n > MAX_STUDENTS)
    {
        printf("You can only enter up to 10 names.\n");
        return 1;
    }

    // Read student names
    printf("Enter the names of the students:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name %d: ", i + 1);
        scanf("%s", nameOfStudents[i]);
    }

    // Sort the array of names using quicksort
    quickSort(nameOfStudents, 0, n - 1);

    // Display the sorted names
    printf("\nSorted names of students:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
