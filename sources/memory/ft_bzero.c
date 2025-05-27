/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:11:45 by abetemps          #+#    #+#             */
/*   Updated: 2025/05/21 13:38:55 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_improved.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	size_t				count;
	unsigned long long	*s_bis;

	i = 0;
	count = 0;
	s_bis = (unsigned long long *)s;
	if (n >= sizeof(unsigned long long))
	{
		while (count < n - sizeof(unsigned long long))
		{
			*(s_bis + i++) = 0;
			count += sizeof(unsigned long long);
		}
	}
	while (count < n)
		*(((unsigned char *)s_bis) + count++) = 0;
}
