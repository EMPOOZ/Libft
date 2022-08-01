/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:28:26 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/07 16:57:20 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const unsigned char	*y;
	size_t				v;

	y = (unsigned char *)arr;
	v = 0;
	while (v < n)
	{
		if ((unsigned char)c == y[v])
			return ((void *)&arr[v]);
		v++;
	}
	return (NULL);
}
