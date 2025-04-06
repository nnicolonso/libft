#include <stdio.h>

int ft_isalpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}

int main ()
{
    char str[] = "sdljkgsdgksdlASg";

    printf ("%d\n", ft_isalpha(str));
    return (0);
}