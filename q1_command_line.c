/*
Q1. Write a program to input n numbers on command line argument and calculate maximum of them.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s num1 num2 ... numN\n", argv[0]);
        return 1;
    }

    int max = atoi(argv[1]);

    for (int i = 2; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (num > max)
        {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);
    return 0;
}

/*
gcc q1_command_line.c
.\a.exe 10 20 30 40 50
The maximum number is: 50
*/