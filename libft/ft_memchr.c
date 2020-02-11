/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:44:41 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/04 15:18:58 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*src;
	size_t			i;

	ch = (unsigned char)c;
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
			return (src + i);
		i++;
	}
	return (NULL);
}
