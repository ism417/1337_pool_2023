/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:14:12 by eismail           #+#    #+#             */
/*   Updated: 2023/10/30 15:18:48 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	re;

	re = 1;
	if (power >= 0)
	{
		if (power == 0)
			return (1);
		while (power > 0)
		{
			re *= nb;
			power--;
		}
		return (re);
	}
	else 
		return (0);
}
/*int main ()
{
	printf("%d", ft_iterative_power(46340,3));
}*/