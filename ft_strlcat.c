int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strlcat(char *src, char *dest, unsigned int size)
{
    int dest_len;
    int src_len;
    int buffer;
    int copy_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (dest_len >= size)
            return (src_len + size);
    copy_len = 0;
    buffer = (size - dest_len - 1);
    while (src[copy_len] && copy_len < buffer)
    {
        dest[dest_len + copy_len] = src[copy_len];
        copy_len++;
    }
    dest[dest_len + copy_len] = '\0';
    return (dest_len + src_len);
}