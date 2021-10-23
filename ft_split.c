/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:22:25 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/17 14:22:27 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, int	c)
{
	int	flag;
	int	i;
	int	count;

	flag = 0;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			flag++;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static int	len_word(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	return (i);
}

static int	ft_free(char **splited, int i)
{
	if (!splited[i])
	{
		while (i >= 0)
		{
			free(splited[i]);
			i--;
		}
		free(splited);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	splited = (char **) malloc((words + 1) * sizeof (char *));
	if (!splited)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		splited[i] = ft_substr(s, 0, len_word(s, c));
		if (ft_free(splited, i))
			return (NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	splited[i] = NULL;
	return (splited);
}
/*int main(void)
{
	int i;
	char **splited;
	char str[10] = "qwerty";
	splited = ft_split(str, ',');
	i = 0;
	while (splited[i])
	{
		printf("%s\n", splited[i]);
		i++;
	}
}*/