/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:46:49 by nneto-de          #+#    #+#             */
/*   Updated: 2023/05/04 16:11:47 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	j;
	unsigned int	i;

	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		ptr = (char *)malloc((sizeof(char)) * 1);
		if (ptr == NULL)
			return (0);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc((sizeof(char)) * (len + 1));
	if (ptr == NULL )
		return (0);
	j = 0;
	i = start;
	while (i < ft_strlen(s) && j < len)
		ptr[j++] = s[i++];
	ptr[j] = '\0';
	return (ptr);
}
