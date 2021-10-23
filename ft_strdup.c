/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:24:50 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/12 14:24:52 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*dst;

	l = ft_strlen(s1);
	dst = (char *) malloc(l + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, l + 1);
	dst[l] = '\0';
	return (dst);
}
