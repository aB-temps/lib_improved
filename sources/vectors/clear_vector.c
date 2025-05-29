/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_vector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:22:10 by abetemps          #+#    #+#             */
/*   Updated: 2025/05/29 20:34:20 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

void	clear_vector(t_vector *vec)
{
	if (vec->array)
	{
		vec->clear_array(vec);
		free(vec->array);
		vec->array = (void *)0;
	}
	if (vec)
	{
		free(vec);
		vec = (void *)0;
	}
}
