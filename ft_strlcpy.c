/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:05:33 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/06 19:06:47 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	cpt;
	unsigned int	i;

	cpt = 0;
	i = 0;
	while (src[cpt] != '\0')
		cpt++;
	if (size == 0)
		return (cpt);
	else
	{
		while (i < cpt && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (cpt);
}
