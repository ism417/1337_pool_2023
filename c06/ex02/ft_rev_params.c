/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:39:21 by eismail           #+#    #+#             */
/*   Updated: 2023/11/01 09:35:15 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (ac >= 1)
	{
		while (av[j] != '\0')
		{
			j++;
		}
		j--;
		while (j > 0)
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				write (1, &av[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j--;
		}
	}
	return (0);
}
