/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:46:18 by abetemps          #+#    #+#             */
/*   Updated: 2025/04/06 16:20:26 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

int	ft_max(int val_a, int val_b)
{
	if (val_a > val_b)
		return (val_a);
	else
		return (val_b);
}
