#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1,&c,1); // The semicolon was missing here
}
int main()
{
    printf(ft_putchar(a));
    return 0;
}