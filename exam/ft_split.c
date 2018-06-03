#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_space(char *str)
{
    return(*str == '\0' || *str == ' ' || *str == '\n' || *str == '\t');
}

int count_words(char *str)
{
    int count = 0;
    while(*str)
    {
        if (is_space(str) == 0 && is_space(str + 1) == 1)
            count++;
        str++;
    }
    return (count);
}

int count_len(char *str)
{
    int count = 0;
    while (is_space(str) != 1)
    {
        count++;
        str++;
    }
    return(count);
}

char* ft_strnew(int size)
{
    char *newstr;

    if (!(newstr = (char*)malloc(sizeof(char) * (size + 1))))
        return(0);
    newstr[size + 1] = '\0';
    while(size--)
        newstr[size] = 0;
    return(newstr);
}

char    **ft_split(char *str)
{
    char **arrey;
    int i = 0;
    int j = 0;
    int len = 0;
    int cw = count_words(str);
    arrey = (char**)malloc(sizeof(char*) * (cw + 1));
    while (*str)
    {
        if (is_space(str) == 0)
        {
            len = count_len(str);
            arrey[j] = ft_strnew(len + 1);
            while (i != len)
            {
                arrey[j][i] = *str;
                str++;
                i++;
            }
            j++;
            i = 0;
        }
        else
            str++;
    }
    //arrey[j] = ft_strnew(1);
    arrey[j] = 0;
    return(arrey);
}

int main()
{
    char *str = "Hello my darling";
    char **arrey;
    int i = 3;
    arrey = ft_split(str);
    while (*arrey)
        printf("%s\n", *arrey++);
    return(0);
}