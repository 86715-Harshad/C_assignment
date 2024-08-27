/*
Q13. Declare an Array of type char* (Strings) and initialize it with a few strings (hard - coded).
Display the strings which are duplicated in that array. (Hint: use strcmp())
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Declare and initialize the array of strings
    char *arr[] = {"apple", "banana", "apple", "orange", "banana", "grape"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate strings in the array:\n");

    // Check for duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) == 0)
            {
                printf("%s\n", arr[i]);
                break; // To avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}
