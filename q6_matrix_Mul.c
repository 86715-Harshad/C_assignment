/*
Q6. Write a program to perform matrix multiplication.

*/

#include <stdio.h>

int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int result[2][2] = {0};

    // Multiplying matrices a and b
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
