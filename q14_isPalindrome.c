/*
Q14 Write a code to check if string is palindrome.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(str[left]))
            left++;
        while (left < right && !isalnum(str[right]))
            right--;

        // Compare characters
        if (tolower(str[left]) != tolower(str[right]))
        {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character from the end of the string
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
