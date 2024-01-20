/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:44:42 by eismail           #+#    #+#             */
/*   Updated: 2023/10/28 17:36:18 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	printble(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (!(((base[i] >= '0') && (base[i] <= '9')) 
				|| ((base[i] >= 'A') && (base[i] <= 'Z')) 
				|| ((base[i] >= 'z') && (base[i] <= 'z'))))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	dub(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	er_base(char *base)
{
	if ((printble (base) == 1) && (dub(base) == 1))
	{
		return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if ((er_base(base) == 1) && (len_base >= 2))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= (-1);
		}
		if (nbr < len_base)
		{
			write(1, &base[nbr], 1);
		}
		else 
		{
			ft_putnbr_base((nbr / len_base), base);
			ft_putnbr_base((nbr % len_base), base);
		}
	}
}
/*int main ()
{
	ft_putnbr_base(-15,"01");
}*/
