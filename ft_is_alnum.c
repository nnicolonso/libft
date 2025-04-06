#include <stdio.h>

int ft_is_alnum(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z') &&
            (str[i] < 'a' || str[i] > 'z'))
                return (0);
        i++;
    }
    return (1);
}

int main()
{
    char str[] = "@";
    char str1[] = "sadfia sfadsf12312424";

    printf ("%d\n", ft_is_alnum(str));
    printf ("%d\n", ft_is_alnum(str1));
    return (0);
}