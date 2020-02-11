/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 02:01:03 by tmansing          #+#    #+#             */
/*   Updated: 2019/07/06 02:01:12 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char cc = (char)c;

	if (!s)
		return (NULL);
	while (*s && *s != cc)
		++s;
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
