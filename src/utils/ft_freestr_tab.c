/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestr_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:18:01 by abetemps          #+#    #+#             */
/*   Updated: 2025/01/10 19:18:30 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/improved_libft.h"

void	*ft_freestr_tab(char **nstrs)
{
	int	i;

	i = 0;
	while (nstrs[i])
		free(nstrs[i++]);
	free(nstrs);
	return (NULL);
}