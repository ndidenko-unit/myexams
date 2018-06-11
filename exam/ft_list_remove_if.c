#include <stdio.h>
#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*new_list(void *data)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

int		cmp(void *a, void *b)
{
	return (*((int *)a) != *(int *)(b));
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*tmp;
	t_list	*prev;

	list = *begin_list;
	prev = 0;
	while (list)
	{
		tmp = list;
		if ((*cmp)(data_ref, list->data) == 0)
		{
			if (prev)
				prev->next = list->next;
			else
				*begin_list = list->next;
			free(list);
		}
		else
			prev = list;
		list = tmp->next;
	}
}

int		main(void)
{
	t_list	*list;
	int		a = 10;
	int		b = 20;
	int		c = 30;
	int		ref = 30;
	void	*R = &ref;
	void	*A = &a;
	void	*B = &b;
	void	*C = &c;

	list = new_list(A);
	list->next = new_list(B);
	list->next->next = new_list(C);
	ft_list_remove_if(&list, R, cmp);
	while (list)
	{
		printf("%i\n", *((int *)list->data));
		list = list->next;
	}
}
