/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:08:23 by eismail           #+#    #+#             */
/*   Updated: 2023/10/30 10:08:26 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	i = 3;
	if (nbr <= 1)
		return (0);
	if (nbr == 2)
		return (1);
	if ((nbr % 2) == 0)
		return (0);
	while ((i * i) <= nbr)
	{
		if ((nbr % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*int main ()
{
	printf("%d\n",ft_is_prime(2147483647));
}*/