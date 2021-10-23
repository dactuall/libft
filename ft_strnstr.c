/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:10:50 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/12 15:10:51 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		while (haystack[i] == needle[j] && len > j && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
		i = i - j;
		i++;
		len--;
	}
	return (0);
}
/*int main(void)
{
	char	*s1 = "test";
	printf("%p\n", &s1[0]);
	printf("%p\n", &s1[1]);
	printf("%p\n", &s1[2]);
	printf("%p\n", &s1[3]);
}*/