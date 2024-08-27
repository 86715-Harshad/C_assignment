/*
Q9. Accept an integer number and when the program is executed print the
binary, octal and hexadecimal equivalent of the given number.

Sample Output:
Enter Number : 20
Given Number :20
Binary equivalent :10100
Octal equivalent :24
Hexadecimal equivalent :14

Hint: Use bitwise operators for binary conversion. Octal/Hexadecimal
conversion to be done by repetitive division using recursion.
*/

#include <stdio.h>

// Function to convert decimal to binary using bitwise operators
void decimalToBinary(int n)
{
    if (n > 1)
        decimalToBinary(n >> 1);
    printf("%d", n & 1);
}

// Function to convert decimal to octal using recursion
void decimalToOctal(int n)
{
    if (n >= 8)
        decimalToOctal(n / 8);
    printf("%d", n % 8);
}

// Function to convert decimal to hexadecimal using recursion
void decimalToHexadecimal(int n)
{
    if (n >= 16)
        decimalToHexadecimal(n / 16);
    int remainder = n % 16;
    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", remainder - 10 + 'A');
}

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Given Number: %d\n", number);

    printf("Binary equivalent: ");
    decimalToBinary(number);
    printf("\n");

    printf("Octal equivalent: ");
    decimalToOctal(number);
    printf("\n");

    printf("Hexadecimal equivalent: ");
    decimalToHexadecimal(number);
    printf("\n");

    return 0;
}
