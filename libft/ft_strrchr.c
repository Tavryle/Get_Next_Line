/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:50:59 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/25 09:33:24 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*t;
	int			i;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			t = s + i;
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return ((char *)t);
}
