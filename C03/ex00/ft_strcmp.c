/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htelghem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 09:16:23 by htelghem          #+#    #+#             */
/*   Updated: 2021/01/28 09:45:12 by htelghem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		i++;
	}	
		return(s1[i], s2[i]);
}

int	main()
{
	char mant [] = "hello";
	char mante [] = "DOLLY";
	printf("\n elle compare %d", ft_strcmp(mant, mante));
}
