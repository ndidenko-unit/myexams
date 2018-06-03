/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:30:28 by ndidenko          #+#    #+#             */
/*   Updated: 2018/03/01 19:08:59 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr (char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	 main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(&argv[argc - 1][0]);
	ft_putstr("\n");
	return (0);
}

