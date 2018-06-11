#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_len(int nbr)
{
    int len;
    len = nbr < 0 ? 1 : 0;
    if (len == 1)
        nbr *= -1;
    while (nbr > 1)
    {
        nbr = nbr / 10;
        len++;
    }
    return(len);
}

char	*ft_itoa(int nbr)
{
    int len;
    char *res;
    
    len = ft_len(nbr);
    res = (char*)malloc(sizeof(char) * (len + 1));
    res[len] = '\0';
    if (nbr >= 0)
    {
        while (len-- >= 0)
        {
            res[len] = (nbr % 10) + '0';
            nbr = nbr / 10;
        }
    }
    if (nbr < 0)
    {
        while (len-- > 0)
        {
            res[len] = (-nbr % 10) + '0';
            nbr = nbr / 10;
        }
        res[0] = '-';
    }
    return (res);
}

int main()
{
    char *res;
    res = ft_itoa(99999);
    printf("%s\n", res);
}