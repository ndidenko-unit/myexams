#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}


char	*ft_itoa(int nbr)
{
    int zn;
    int forlen;
    int len;
    char *res;

    forlen = nbr;
    len = 0;
    zn = (nbr >= 0) ? 1 : -1;
    len = (nbr <= 0) ? 1 : 0;
    while (forlen != 0)
    {
        forlen /= 10;
        len = len + 1;
    }
    res = (char*)malloc(sizeof(char) * (len + 1));
    res[len] = '\0';
    len--;
    if (zn == 1)
    {
        while(len >= 0)
        {
            res[len] = (nbr % 10) + '0';
            nbr /= 10;
            len--;
        }
    }
    if (zn == -1)
    {
        while(len >= 1)
        {
            res[len] = (-nbr % 10) + '0';
            nbr /= 10;
            len--;
        }
        res[0] = '-';
    }
    return(res);
}

int main()
{
    int i = 0;
    char *res;

    res = ft_itoa(i);
    ft_putstr(res);
    return(0);
    

}