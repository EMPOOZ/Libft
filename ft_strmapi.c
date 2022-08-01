/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:59:38 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/09 17:59:40 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	link2(unsigned int y, char t)
{
	char	s;

	s = t + y;
	return (s);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		c;
	char	*t;

	if (s == NULL)
		return (NULL);
	t = (char *)s;
	c = ft_strlen(t);
	t = (char *)ft_strdup(s);
	if (!t)
		return (0);
	c = 0;
	while (s[c])
	{
		t[c] = f(c, s[c]);
		c++;
	}
	return (t);
}
