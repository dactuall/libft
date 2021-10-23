/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:28:27 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/16 19:28:29 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = 0;
	if (s1 && s2)
	{
		res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof (char));
		if (!res)
			return (NULL);
		i = 0;
		while (s1[i] != '\0')
		{
			res[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
			res[i++] = s2[j++];
		res[i] = '\0';
	}
	return (res);
}
