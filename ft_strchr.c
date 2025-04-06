char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if ((char) c == '\0')
        return ((char *) (s + i));
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *) (s + i));
        i++;
    }
    return (NULL);
}