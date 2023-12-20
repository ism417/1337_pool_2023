/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:28:22 by eismail           #+#    #+#             */
/*   Updated: 2023/10/22 22:12:45 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'a') && (str[i] <= 'z')) 
				|| ((str[i] >= 'A') && (str[i] <= 'Z'))))
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
	re = ft_str_is_alpha("gfhr");
	printf("%d\n",re);
}*/
