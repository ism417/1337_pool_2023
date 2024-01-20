/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:06:43 by eismail           #+#    #+#             */
/*   Updated: 2023/10/30 18:03:57 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	long	nbr;
	long	a;

	a = nb;
	if (nb > 0)
	{
		if (a < 2)
			return (a);
		if (a >= 2)
		{
			nbr = 2;
			while (nbr * nbr <= a)
			{
				if (nbr * nbr == a)
				{
					return (nbr);
				}
				nbr++;
			}
		}
	}
	return (0);
}
/*int main ()
{
	 printf("%d\n",ft_sqrt(2147395600));
}*/