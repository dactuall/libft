/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:09:46 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/16 19:09:47 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	str = 0;
	if (s)
	{
		len_s = ft_strlen(s);
		if (start >= len_s)
			return (ft_strdup(""));
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		i = 0;
		while (s[start] != '\0' && i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
	}
	return (str);
}
