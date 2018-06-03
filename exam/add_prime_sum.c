#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int zn;
    int res;
    int ten;

    zn = 1;
    ten = 1;
    res = 0;
    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    if (*str++ == '-')
        zn = -1;
    if (*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
        str++;
    str -= 1;
    while (*str >= '0' && *str <= '9')
    {
        res = res + ((*str - '0') * ten);
        ten = ten * 10;
        str--;
    }
    return(res * zn);
}

int valid_int(int dec)
{
    int i;

    i = 2;
    while (i < dec)
    {
        if (dec % i == 0)
            return(0);
        i++;
    }
    return(dec);
}

void ft_putnbr(int nbr)
{
    char c;

    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        c = nbr + '0';
        write (1, &c, 1);
    }
}
int main (int argc, char **argv)
{
    int src;
    int res;

    res = 0;
    if (argc != 2)
    {
        write(1, "0\n", 2);
        return(0);
    }
    src = (ft_atoi(argv[1]));
    if (argc == 2 && src >= 0)
    {
        while (src > 1)
        {
            res = res + valid_int(src);
            src--;
        }
        ft_putnbr(res);
        write(1, "\n", 1);
    }
    else
        write(1, "0\n", 2);
    return(0);
}
