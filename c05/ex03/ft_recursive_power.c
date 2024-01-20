/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:17:49 by eismail           #+#    #+#             */
/*   Updated: 2023/10/29 15:18:35 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
			return (1);
		else if (power >= 1)
			return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (0);
}
/*int main ()
{
	printf("%d",ft_recursive_power(2,0));
}*/
