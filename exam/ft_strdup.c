#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int c;
    int i;
    int len;
    char *copy;

    i = 0;
    c = 0;
    len = 0;
    while (src[len])
        len++;
    if (!(copy = (char*)malloc(sizeof(char) * (len + 1))))
        return(0);
    while (src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return(copy);
}

int main()
{
    char *src;
    src = "Huylo";
    char *dup;
    dup = ft_strdup(src);
    printf("%s", dup);
    return(0);
}