#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 upto 1024
 * Return: Always (Success)
 */

int main(void)

{
    int z = 0;
    int i;
    for (i = 3; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n", z);
    return (0);
}
