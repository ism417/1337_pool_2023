/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:58:18 by eismail           #+#    #+#             */
/*   Updated: 2023/10/31 22:50:08 by eismail          ###   ########.fr       */
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
			i = 0;
			while (av[j][i] != '\0')
			{
				write(1, &av[j][i], 1);
				i++;
			}
			j++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
