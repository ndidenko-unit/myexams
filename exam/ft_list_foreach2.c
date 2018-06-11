#include <stdlib.h>
#include <stdio.h>

typedef struct		s_list
{
	struct s_list	*next;
	int			*data;
}					t_list;

void ft_plus10(void *data)
{
    int *ptr = data;
    ptr[0] += 10;
}

t_list *ft_newlist(int *data)
{
    t_list *newlist;

    newlist = (t_list*)malloc(sizeof(t_list));
    newlist->data = data;
    newlist->next = NULL;
    return(newlist);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

int main()
{
    t_list *list;
    int a = 0;
    int b = 100;
    int c = 200;

    int *aa = &a;
    int *bb = &b;
    int *cc = &c;

    list = ft_newlist(aa);
    list->next = ft_newlist(bb);
    list->next->next = ft_newlist(cc);
    ft_list_foreach(list, ft_plus10);
    while(list)
    {
        printf("\ndata is %d", *((int*)(list->data)));
        list = list->next;
    }
    return(0);
    
}