/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_vector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:22:10 by abetemps          #+#    #+#             */
/*   Updated: 2025/05/29 18:26:56 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

void	clear_vector(t_vector *vec)
{
	vec->clear_array(vec);
	free(vec->array);
	vec->array = (void *)0;
	free(vec);
	vec = (void *)0;
}
