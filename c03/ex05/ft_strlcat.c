/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:01:20 by eismail           #+#    #+#             */
/*   Updated: 2023/10/25 16:30:47 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	i;

	len_dest = 0;
	i = 0;
	while ((dest[len_dest] != '\0') && (len_dest < size))
	{
		len_dest++;
	}
	while (src[i] && ((len_dest + i + 1) < size))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (len_dest < size)
	{
		dest[len_dest + 1] = '\0';
	}
	return (len_dest + i);
}
/*int main ()
{
    char dest[20]="hello, ";
    int n = ft_strlcat(dest,"world !",20);
    printf("%s\n",dest);
i	printf("%d\n",n);
}*/
