/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:55:05 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/05 16:58:47 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dt;
	char	*sc;

	dt = (char *)dst;
	sc = (char *)src;
	i = 0;
	if (dt == NULL && sc == NULL)
		return (dst);
	if (dt > sc)
	{
		while (len-- > 0)
			dt[len] = sc[len];
	}
	else
	{
		while (i < len)
		{
			dt[i] = sc[i];
			i++;
		}
	}
	return (dst);
}
