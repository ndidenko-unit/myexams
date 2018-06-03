/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:38:37 by ndidenko          #+#    #+#             */
/*   Updated: 2018/03/01 20:57:29 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	char upper;
	char lower;

	upper = 89;
	lower = 122;

	while (lower != 96 && upper != 63)
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower -= 2;
		upper -= 2;
	}
	return (0);
}
