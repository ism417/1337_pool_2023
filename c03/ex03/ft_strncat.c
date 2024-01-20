/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:48:54 by eismail           #+#    #+#             */
/*   Updated: 2023/10/25 10:57:39 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while ((src[i] != '\0') && (i < nb))
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
/*int main ()
{
    char dest[]="hello ";
    ft_strncat(dest,"world! WHY!!",0);
    printf("%s\n",dest);
}*/
