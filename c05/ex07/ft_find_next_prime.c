/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:48:25 by eismail           #+#    #+#             */
/*   Updated: 2023/10/31 11:17:09 by eismail          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*int main ()
{
    printf("%d",ft_find_next_prime(51));
}*/
