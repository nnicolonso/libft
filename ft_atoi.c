int ft_atoi(char *str)
{
    int index;
    int sign;
    int result;

    sign = 1;
    index = 0;
    result = 0;
    while(str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
        || str[index] == '\r' || str[index] == '\v' || str[index] == '\f')
        index++;
    if (str[index] == '+' || str[index] == '-')
        {
            if (str[index] == '-')
                sign = -sign;
            index++;
        }
    while (str[index] >= '0' && str[index] <= '9')
        {
            result = (result * 10) + (str[index] - 48);
            index++;
        }
    return (result * sign);
}