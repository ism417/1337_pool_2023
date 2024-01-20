/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:21:20 by eismail           #+#    #+#             */
/*   Updated: 2023/10/24 17:57:18 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n != '\0')
	{
		while ((i < n -1) && (s1[i] == s2[i]) 
			&& ((s1[i] != '\0') || (s2[i] != '\0')))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	else 
		return (0);
}
/*int main ()
{
    int n =ft_strncmp("hello world","hella",5);
    printf("%d\n",n);
}*/
