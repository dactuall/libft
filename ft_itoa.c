/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:56:07 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/16 19:56:10 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lennum(long int x)
{
	size_t	len;

	len = 0;
	if (x <= 0)
	{
		x = -x;
		len = 1;
	}
	while (x > 0)
	{
		len++;
		x /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	long int		x;

	x = n;
	len = ft_lennum(x);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		x = -x;
	}
	str[len--] = '\0';
	while (x)
	{
		str[len--] = (x % 10) + '0';
		x /= 10;
	}
	return (str);
}
