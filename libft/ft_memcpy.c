/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 07:43:46 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/04 14:43:06 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *x;
	char *y;

	if (n == 0 || dst == src)
		return (dst);
	x = (char *)dst;
	y = (char *)src;
	while (--n)
		*x++ = *y++;
	*x = *y;
	return (dst);
}
