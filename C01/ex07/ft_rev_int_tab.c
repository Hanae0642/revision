/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htelghem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:09:42 by htelghem          #+#    #+#             */
/*   Updated: 2021/01/25 07:50:16 by htelghem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int e;
	int re;
	int c;

	e = 0;
	re = size - 1;
	while (e < (size / 2))
	{
		c = tab[e];
		tab[e] = tab[re];
		tab[re] = c;
		e++;
		re--;
	}
}
