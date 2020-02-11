/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:40:32 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/07 13:46:36 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t len;
	size_t k;

	i = 0;
	len = ft_strlen((const char *)dst);
	k = len;
	if (len > n)
		k = n;
	k += ft_strlen(src);
	while (src[i] != '\0' && i + len < n - 1 && n > 0)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	return (k);
}
