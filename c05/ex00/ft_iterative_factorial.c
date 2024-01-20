/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:24:56 by eismail           #+#    #+#             */
/*   Updated: 2023/10/29 11:06:59 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb >= 0)
	{
		i = nb - 1;
		if ((nb == 1) || (nb == 0))
			return (1);
		while (i > 0)
		{
			nb *= i;
			i--;
		}
		return (nb);
	}
	else
		return (0);
}
/*int main ()
{
	int n = ft_iterative_factorial(0);
	printf("%d",n);
}*/
