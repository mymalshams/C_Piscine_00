/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshams2 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:43:01 by malshams2         #+#    #+#             */
/*   Updated: 2021/08/06 17:59:24 by malshams2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y)
{
	int r;
	int c;

	r = -1;
	while (++r < y)
	{
		c = -1;
		while (++c < x)
		{
			if ((r == 0 || r == (y - 1)) && c == 0)
				ft_putchar('A');
			else if ((c == 0 || c == (x - 1)) && (r > 0) && r < (y - 1))
				ft_putchar('B');
			else if ((r == 0 || r == (y - 1)) && (c > 0) && c < (x -1))
				ft_putchar('B');
			else if ((r == 0 || r == (y - 1)) && c == (x - 1))
				ft_putchar('C');
			else ft_putchar(' ');
		}
			ft_putchar('\n');
		}
	ft_putchar(' ');
	}
