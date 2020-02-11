/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:57:20 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/04 15:19:47 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	tmpdst = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	i = len;
	if (tmpsrc == NULL && tmpdst == NULL)
		return (NULL);
	if (tmpsrc < tmpdst)
		while (i--)
		{
			tmpdst[i] = tmpsrc[i];
		}
	else
		dest = ft_memcpy(tmpdst, tmpsrc, len);
	return (dest);
}
