/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:09:45 by eismail           #+#    #+#             */
/*   Updated: 2023/10/22 21:52:34 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
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
	re  = ft_str_is_uppercase("123");
int	re1 = ft_str_is_uppercase("HELLO");
int	re2 = ft_str_is_uppercase("hello");
int	re3 = ft_str_is_uppercase("hello123");
int	re4 = ft_str_is_uppercase("HELLO123");
int	re5 = ft_str_is_uppercase("HELlo");
int re6 = ft_str_is_uppercase("");
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",re,re1,re2,re3,re4,re5,re6);
}*/
