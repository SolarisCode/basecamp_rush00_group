/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 07:14:59 by acretu            #+#    #+#             */
/*   Updated: 2021/10/03 16:45:51 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	ft_first(int x);
void	ft_core(int x);
void	ft_last(int x);

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
			ft_first(x);
			ft_putchar('\n');
		}
		else if (i == y)
		{
			ft_last(x);
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

void	ft_first(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
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
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
}

void	ft_last(int x)
{
	int		i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}	
}
