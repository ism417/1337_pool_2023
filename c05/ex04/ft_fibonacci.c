/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:53:21 by eismail           #+#    #+#             */
/*   Updated: 2023/10/29 15:57:52 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index == 1)
			return (1);
		if (index == 0)
			return (0);
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	return (-1);
}
/*int main ()
{
	printf("%d",ft_fibonacci(5));
}*/