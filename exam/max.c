#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int j;
    int res;
   

    
    i = 0;
    j = 0;
    if (tab[i] == 0)
        return(0);
    res = tab[i];
    while (i < len)
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    }
    return(res);
}

int main()
{
    int maximum;
    int array[10];//= { 5, 7, 8, 4, 6, 7, 11, 56, 3, 112};
    maximum = max(array, 10);
    printf("max value is %i", maximum);
    return(0);
}