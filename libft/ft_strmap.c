/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:57:44 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/10 12:58:11 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(new = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
