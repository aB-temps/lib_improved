/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:07:54 by abetemps          #+#    #+#             */
/*   Updated: 2024/11/21 01:02:47 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ns;
	size_t	i;

	i = 0;
	ns = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ns == NULL)
		return (NULL);
	while (s[i])
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
