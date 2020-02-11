/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:21:51 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/19 15:12:03 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	long	nb;
	char	*str;

	nb = (n < 0) ? -(long)n : n;
	sign = (n < 0) ? -1 : 0;
	len = (sign == -1) ? 2 : 1;
	while ((nb /= 10) >= 1)
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	nb = (n < 0) ? -(long)n : n;
	while (len-- + sign)
	{
		str[len] = nb % 10 + 48;
		nb /= 10;
	}
	(len == 0) ? str[len] = '-' : 0;
	return (str);
}
