/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:45:25 by nneto-de          #+#    #+#             */
/*   Updated: 2023/04/28 12:02:17 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tam;

	tam = nmemb * size;
	ptr = malloc(tam);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, tam);
	return (ptr);
}
