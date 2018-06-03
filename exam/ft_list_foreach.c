#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_f(void *data)
{
	int *ptr = data;
	ptr[0] += 10;
	// int *ptr = data;
	// printf("%i\n", *ptr);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

t_list *new_list(void *data)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

int main ()
{
	t_list *list;

	int a = 0;
	int b = 100;
	int c = 200;
	void *aa = &a;
	void *bb = &b;
	void *cc = &c;

	list = new_list(aa);
	list->next = new_list(bb);
	list->next->next = new_list(cc);
	ft_list_foreach(list, ft_f);
	while (list)
	{
		printf("%i\n", *((int *)list->data));
		list = list->next;
	}
	return(0);
}