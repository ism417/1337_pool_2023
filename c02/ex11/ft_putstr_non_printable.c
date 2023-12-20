/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:12:20 by eismail           #+#    #+#             */
/*   Updated: 2023/10/23 14:15:13 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ini(char *x_chars)
{
	x_chars[0] = '0';
	x_chars[1] = '1';
	x_chars[2] = '2';
	x_chars[3] = '3';
	x_chars[4] = '4';
	x_chars[5] = '5';
	x_chars[6] = '6';
	x_chars[7] = '7';
	x_chars[8] = '8';
	x_chars[9] = '9';
	x_chars[10] = 'a';
	x_chars[11] = 'b';
	x_chars[12] = 'c';
	x_chars[13] = 'd';
	x_chars[14] = 'e';
	x_chars[15] = 'f';
}

void	ft_putstr_non_printable(char *str)
{
	char	x_chars [16];

	ini(x_chars);
	if (str == NULL)
	{
		return ;
	}
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			put_char(*str);
		}
		else 
		{
			put_char('\\');
			put_char(x_chars[(*str >> 4) & 0xF]);
			put_char(x_chars[*str & 0xF]);
		}
		str++;
	}
}
/*int main(void) {
    char text[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(text);
    return 0;
}*/
