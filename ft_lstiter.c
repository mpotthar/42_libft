/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:53:12 by mpotthar          #+#    #+#             */
/*   Updated: 2023/01/11 07:48:29 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*last;

	last = lst;
	while (lst)
	{
		last = (lst)->next;
		(f)(lst->content);
		lst = last;
	}
}
