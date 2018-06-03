/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:46:08 by ndidenko          #+#    #+#             */
/*   Updated: 2018/04/26 16:46:15 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>


int main()
{
    char *str;
    int count;

    str = "Hello";
    while (*str++)
        count++;
    str -= count + 1;
    printf("%s", str);
    printf("%d", count);
    return(0);
    }
