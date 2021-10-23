/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:30:41 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/10 14:30:42 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t			l_dst;
	size_t			l_src;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (dstsize < l_dst)
		return (l_src + dstsize);
	while (*dst && dstsize > 0)
	{
		dst++;
		dstsize--;
	}
	while (*src && dstsize-- > 1)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (l_src + l_dst);
}
