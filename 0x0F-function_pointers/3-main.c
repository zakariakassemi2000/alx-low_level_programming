#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    func = get_op_func(argv[2]);

    result = func(num1, num2);

    printf("%d\n", result);

    return (0);
}
