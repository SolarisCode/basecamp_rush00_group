/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 09:43:17 by acretu            #+#    #+#             */
/*   Updated: 2021/10/03 11:36:14 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
		if (i == 1)
		{
			ft_margins(x);
			ft_putchar('\n');
		}
		else if (i == y)
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
	char	c;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			c = 'A';
			ft_putchar(c);
		}
		else if (i == x)
		{
			c = 'C';
			ft_putchar(c);
		}
		else
		{
			c = 'B';
			ft_putchar(c);
		}
		i++;
	}
}

void	ft_core(int x)
{
	int		i;
	char	c;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			c = 66;
			ft_putchar(c);
		}
		else
		{
			c = ' ';
			ft_putchar(c);
		}
		i++;
	}
}
