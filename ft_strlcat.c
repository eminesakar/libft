/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:41:46 by emsakar           #+#    #+#             */
/*   Updated: 2023/07/18 04:30:52 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	a;
	size_t	d;
	size_t	s;

	a = ft_strlen(dst);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (n <= d)
		return (n + s);
	while (src[i] && a < n - 1)
	{
		dst[a] = src[i];
		i++;
		a++;
	}
	dst[a] = '\0';
	return (d + s);
}
