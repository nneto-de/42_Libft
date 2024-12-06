/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:31:40 by nneto-de          #+#    #+#             */
/*   Updated: 2023/04/28 16:54:59 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (!little[0])
		return ((char *) big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j]
			&& little[j] != '\0' && i + j < len)
		{
			if (little[j + 1] == '\0' )
			{
				return ((char *)(big + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
