/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:47:48 by eismail           #+#    #+#             */
/*   Updated: 2023/10/29 11:49:11 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if ((nb == 1) || (nb == 0))
			return (1);
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
/*int main ()
{
	printf("%d",ft_recursive_factorial(5));
}*/
