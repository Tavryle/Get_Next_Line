/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:13:53 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/21 07:16:35 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *i;

	if (n == 0)
		return (b);
	i = (unsigned char *)b;
	while (n--)
	{
		*i = (unsigned char)c;
		if (n)
			i++;
	}
	return (b);
}
