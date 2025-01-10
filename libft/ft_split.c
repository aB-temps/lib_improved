/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:33:04 by abetemps          #+#    #+#             */
/*   Updated: 2024/11/21 01:03:22 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	*ft_free_all(char **nstrs)
{
	int	i;

	i = 0;
	while (nstrs[i])
		free(nstrs[i++]);
	free(nstrs);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**nstrs;
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	x = 0;
	nstrs = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!nstrs)
		return (NULL);
	while (s[i] && ft_count_words(s, c) != 0)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			nstrs[x++] = ft_substr(s, j, i - j);
		if (nstrs[x - 1] == NULL)
			return (ft_free_all(nstrs));
	}
	nstrs[x] = NULL;
	return (nstrs);
}
