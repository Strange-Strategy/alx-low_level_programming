#include "main.h"
/**
 * factorial - function return
 * @n: number to return
 * Return: factorial of n
 */

int factorial(int n)
{
        if (n < 0)
        {
                return (-1);
        }
        if (n == 1)
        {
                return (1);
        }
        else
        {
                return (n * factorial(n - 1));
        }
}

