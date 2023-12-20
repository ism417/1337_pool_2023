/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:30:33 by eismail           #+#    #+#             */
/*   Updated: 2023/10/22 21:33:00 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a') && (str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{
	int re;
	re = ft_str_is_lowercase("123");
int	re1 = ft_str_is_lowercase("HELLO");
int	re2= ft_str_is_lowercase("hello");
int	re3 = ft_str_is_lowercase("hello123");
int	re4 = ft_str_is_lowercase("HELLO123");
int	re5 = ft_str_is_lowercase("HELlo");
int re6 = ft_str_is_lowercase("");
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",re,re1,re2,re3,re4,re5,re6);
}*/
