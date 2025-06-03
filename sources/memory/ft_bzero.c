/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:11:45 by abetemps          #+#    #+#             */
/*   Updated: 2025/06/03 18:22:29 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	size_t				count;
	unsigned long long	*casted_s;

	i = 0;
	count = 0;
	casted_s = (unsigned long long *)s;
	if (n >= sizeof(unsigned long long))
	{
		while (count < n - sizeof(unsigned long long))
		{
			*(casted_s + i++) = 0;
			count += sizeof(unsigned long long);
		}
	}
	while (count < n)
		*(((unsigned char *)casted_s) + count++) = 0;
}
