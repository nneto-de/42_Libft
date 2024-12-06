/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:07:54 by nneto-de          #+#    #+#             */
/*   Updated: 2023/04/29 07:08:27 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ptr;
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	while ((s1[i] != '\0') && (check(s1[i], set) == 1))
	{
		i++;
	}
	len = ft_strlen(s1);
	while ((len > i) && (check(s1[len - 1], set) == 1))
		len --;
	ptr = (char *)malloc((len - i + 1));
	if (ptr == NULL)
		return (0);
	j = 0;
	while (i < len)
	{
		ptr[j] = s1[i];
		j++;
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
