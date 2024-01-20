/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:42:33 by eismail           #+#    #+#             */
/*   Updated: 2023/10/28 18:27:58 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	neg_flag;
	int	re;

	re = 0;
	i = 0;
	neg_flag = 1;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			neg_flag *= -1;
		}
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		re = re * 10 + (str[i] - '0');
		i++;
	}
	return (re * neg_flag);
}
/*int main ()
{
	int n = ft_atoi("-2147483648");
	printf("%d",n);
}*/
