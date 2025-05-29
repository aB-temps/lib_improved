/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:02:38 by abetemps          #+#    #+#             */
/*   Updated: 2025/05/29 18:27:23 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

int	ft_atoi_base(char *s, int base)
{
	int			res;
	int			i;
	int			j;
	int			k;
	const char	base_str[16] = "0123456789abcdef";

	res = 0;
	i = ft_strlen(s);
	j = 0;
	while (i > 0)
	{
		k = 0;
		while (base_str[k] && s[j] != base_str[k])
			k++;
		res += (k * ft_pow(base, i - 1));
		j++;
		i--;
	}
	return (res);
}
