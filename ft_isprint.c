/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:34:57 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/04 12:44:44 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_isprint(int	c)
{
	if (c > 31 && c < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
