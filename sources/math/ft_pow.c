/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:02:38 by abetemps          #+#    #+#             */
/*   Updated: 2025/04/06 15:44:12 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

int	ft_pow(int n, int p)
{
	int	i;
	int	res;

	i = 1;
	res = n;
	if (p == 0)
		return (1);
	while (i < p)
	{
		res *= n;
		i++;
	}
	return (res);
}
