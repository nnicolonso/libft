#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char ft_strdup (char *src)
{
    char    *dest;
    int     dest_len;
    int     index;

    index = 0;
    dest_len = 0;
    dest_len = (ft_strlen(src) + 1);
    dest = (char) malloc(sizeof(char) * dest_len);
    if (dest == NULL)
        return (NULL);
    dest[0] = '\0';
    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}