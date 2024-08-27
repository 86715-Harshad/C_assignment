/*
Q7. Write a program to accept a number from user using command line argument and display its table.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);

    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

/*
gcc q7_command_table.c
.\a.exe 5
*/