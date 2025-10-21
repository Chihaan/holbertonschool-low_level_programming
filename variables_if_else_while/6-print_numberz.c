For information about GNU Emacs and the GNU system, type C-h C-a.
File Edit Options Buffers Tools C Help
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        for (n = '0'; n <= '9'; n++)
        {
                putchar(n);
        }
        putchar('\n');
        return (0);
}
