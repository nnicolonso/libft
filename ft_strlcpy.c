int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strlcpy(char *src, char *dest, unsigned int size)
{
    int copy_len;
    int src_len;

    src_len = ft_strlen(src);
    copy_len = 0;
    if (size != 0)
    {
        while (src[copy_len] && copy_len < (size - 1))
        {
            dest[copy_len] = src[copy_len];
            copy_len++;
        }
        dest[copy_len] = '\0';
    }
    return (src_len);
}
