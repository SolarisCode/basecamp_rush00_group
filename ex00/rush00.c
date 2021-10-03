/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 06:46:30 by acretu            #+#    #+#             */
/*   Updated: 2021/10/03 16:39:40 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_margins(int x);
void	ft_core(int x);

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
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
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
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}
