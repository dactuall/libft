/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:46:13 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/19 18:46:15 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chrinset(const char *set, int c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;
	int		i;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && chrinset(set, s1[start]))
		start++;
	while (end > start && chrinset(set, s1[end - 1]))
		end--;
	res = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
/*int main()
{
	char *s1 = "lollol";
	char *set = "lol";
	printf("%s\n", ft_strtrim(s1, set));
}*/