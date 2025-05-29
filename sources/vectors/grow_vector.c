/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grow_vector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:19:45 by abetemps          #+#    #+#             */
/*   Updated: 2025/05/29 18:21:19 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

bool	grow_vector(t_vector *vec, size_t new_elements)
{
	void	*old_array;

	if (vec->nb_elements + new_elements > vec->capacity)
	{
		old_array = vec->array;
		while (vec->nb_elements + new_elements > vec->capacity)
			vec->capacity <<= 1;
		vec->array = ft_calloc(vec->capacity, vec->datatype_size);
		if (!vec->array)
		{
			clear_vector(vec);
			return (false);
		}
		ft_memcpy(vec->array, old_array, vec->occupied_bytes);
		free(old_array);
	}
	return (true);
}
