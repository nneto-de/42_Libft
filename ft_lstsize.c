/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:48:43 by nneto-de          #+#    #+#             */
/*   Updated: 2023/04/27 12:00:49 by nneto-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 1;
	if (lst == NULL)
	{
		return (0);
	}
	if (lst -> next == NULL)
	{
		return (i);
	}
	while (lst -> next != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
