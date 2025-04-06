int ft_is_digit(char *str)
{
    int index;

    index =  0;
    while (str[index])
    {   
        if (str[index] < '0' || str[index] > '9')    
            return (0);
        index++;
    }
    return (1);
}