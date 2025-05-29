/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_element.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:21:28 by abetemps          #+#    #+#             */
/*   Updated: 2025/05/29 18:21:56 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

bool	add_element(t_vector *vec, void *element)
{
	if (!grow_vector(vec, 1))
		return (false);
	ft_memcpy(vec->array + vec->occupied_bytes, element, vec->datatype_size);
	vec->occupied_bytes += vec->datatype_size;
	vec->nb_elements++;
	return (true);
}
