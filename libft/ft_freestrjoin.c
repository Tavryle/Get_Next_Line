/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:15:07 by tmansing          #+#    #+#             */
/*   Updated: 2019/08/12 13:28:59 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_freestrjoin(char *a, char *b)
{
	char *temp;

	temp = ft_strjoin(a, b);
	if (a)
		free(a);
	a = temp;
	return (a);
}
