/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:39:05 by eismail           #+#    #+#             */
/*   Updated: 2023/10/31 22:44:00 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac >= 1)
	{
		while (av[0][i])
		{
			write(1, &av[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
