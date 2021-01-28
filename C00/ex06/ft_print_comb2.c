/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htelghem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:33:07 by htelghem          #+#    #+#             */
/*   Updated: 2021/01/20 16:55:27 by htelghem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sup(int a)
{
	if (a > 9)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
	}
	else
	{
		ft_putchar(0 + '0');
		ft_putchar(a + '0');
	}
}

void	ft_print_comb2(void)
{
	int left;
	int right;

	left = 0;
	while (left < 99)
	{
		right = left + 1;
		while (right < 100)
		{
			ft_sup(left);
			ft_putchar(' ');
			ft_sup(right);
			if (left != 98)
			{
				write(1, ", ", 2);
			}
			right++;
		}
		left++;
	}
}
