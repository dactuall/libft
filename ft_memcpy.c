/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memspy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:17:02 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/10 14:04:32 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*sc;

	sc = (unsigned char *)src;
	dt = (unsigned char *)dst;
	if (dt == NULL && sc == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dst);
}
