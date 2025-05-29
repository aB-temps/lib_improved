/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:15:48 by abetemps          #+#    #+#             */
/*   Updated: 2025/05/29 18:27:04 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

t_vector	*create_vector(size_t capacity, size_t datatype_size,
		void (*clear_array)(t_vector *))
{
	t_vector	*vec;

	vec = malloc(sizeof(t_vector));
	if (!vec)
		return (NULL);
	vec->array = ft_calloc(capacity, datatype_size);
	if (!vec->array)
	{
		free(vec);
		return (NULL);
	}
	vec->datatype_size = datatype_size;
	vec->capacity = capacity;
	vec->nb_elements = 0;
	vec->occupied_bytes = 0;
	vec->clear_array = clear_array;
	return (vec);
}
