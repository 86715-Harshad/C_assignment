/*
Q15. Input a string from the user. Count occurrences (case insensitive) of
each alphabet in the string.
Sample output:
Input: Welcome to SunBeam.
Output:
A : 1
B : 1
C : 1
E : 3
L : 1
M : 2
N : 1
O : 2
S : 1
T : 1
U : 1
W : 1
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHABET_SIZE 26

void countAlphabets(char str[], int count[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            count[toupper(str[i]) - 'A']++;
        }
    }
}

int main()
{
    char str[100];
    int count[ALPHABET_SIZE] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character from the end of the string
    str[strcspn(str, "\n")] = '\0';

    countAlphabets(str, count);

    printf("Occurrences of each alphabet:\n");
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
