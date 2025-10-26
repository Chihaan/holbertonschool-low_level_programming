#include <stdio.h>

int main(void)
{
    int n;

    for (n = 0; n <= 89; n++)
    {
        int i = n / 10;
        int j = n % 10;

        if (i < j)
        {
            putchar(i + '0');
            putchar(j + '0');
            if (n < 89)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}
