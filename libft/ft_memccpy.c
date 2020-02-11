/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:18:47 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/04 15:18:21 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char)c;
	tmpdest = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmpdest[i] = tmpsrc[i];
		if (tmpdest[i] == ch)
			return (tmpdest + i + 1);
		i++;
	}
	return (NULL);
}
