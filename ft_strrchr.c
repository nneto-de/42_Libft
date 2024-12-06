/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:36:55 by nneto-de          #+#    #+#             */
/*   Updated: 2023/04/28 16:29:16 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (a[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}
