/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:13:48 by ndidenko          #+#    #+#             */
/*   Updated: 2018/03/01 20:35:52 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char c;
	
	c = 48;
	while(c != 58)
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}

