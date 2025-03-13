/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:40:25 by abetemps          #+#    #+#             */
/*   Updated: 2025/03/13 21:04:10 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib-improved.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_element;

	if (!*lst || !lst)
		return ;
	while (*lst)
	{
		lst_element = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst_element;
	}
	*lst = NULL;
}
