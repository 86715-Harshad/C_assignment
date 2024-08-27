/*
Q5. Write a program to check the input characters for uppercase,
lowercase, number of digits and other characters. Display appropriate
message.

*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter characters : ");

    while ((input = getchar()) != '\n')
    {
        if (isupper(input))
        {
            uppercase++;
        }
        else if (islower(input))
        {
            lowercase++;
        }
        else if (isdigit(input))
        {
            digits++;
        }
        else
        {
            others++;
        }
    }

    printf("Uppercase letters : %d\n", uppercase);
    printf("Lowercase letters : %d\n", lowercase);
    printf("Digits : %d\n", digits);
    printf("Other characters : %d\n", others);

    return 0;
}
