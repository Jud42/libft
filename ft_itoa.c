/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:53:10 by rmamison          #+#    #+#             */
/*   Updated: 2021/11/05 16:20:08 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	convnbr(long nb, char *str, int *i)
{
	if (nb > 9)
	{
		convnbr(nb / 10, str, i);
		convnbr(nb % 10, str, i);
	}
	else
		str[(*i)++] = nb + '0';
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*str;

	nb = n;
	str = (char *)malloc(sizeof(char) * (count(n) + 1));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	i = 0;
	if (nb < 0)
	{	
		str[i++] = '-';
		nb *= -1;
	}
	convnbr(nb, str, &i);
	str[i] = '\0';
	return (str);
}
