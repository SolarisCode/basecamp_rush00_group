/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 09:43:17 by acretu            #+#    #+#             */
/*   Updated: 2021/10/03 17:36:35 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_core(int x);
void	ft_margins(int x);

void	rush(int x, int y)
{
	int		i;

	if (x < 0 || y < 0)
		return ;
	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			ft_margins(x);
			ft_putchar('\n');
		}
		else
		{
			ft_core(x);
			ft_putchar('\n');
		}
		i++;
	}
}

void	ft_margins(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	ft_core(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}
