/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 19:09:42 by ndidenko          #+#    #+#             */
/*   Updated: 2018/03/01 19:28:56 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main(int argc, char **argv)
{
	int i;
	char *c;

	i = argc;
	c = *argv;
	ft_putstr("z\n");
	return(0);
}
