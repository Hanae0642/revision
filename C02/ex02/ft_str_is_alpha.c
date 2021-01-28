/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htelghem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:41:42 by htelghem          #+#    #+#             */
/*   Updated: 2021/01/28 16:39:20 by htelghem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'a' && str[i] >= 'z')
		{
			i++;
		}
		else if (str[i] <= 'A' && str[i] >= 'Z')
		{
			i++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
