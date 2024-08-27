/*
Q2. Write a program to calculate a Factorial of a number.

*/

#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number is not possible.\n");
    }
    else
    {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
