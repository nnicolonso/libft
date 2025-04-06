int ft_isascii(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 0 || str[i] <= 127)   
            return (1);
        i++;
    }
    return (0);
}
//Review this code :)