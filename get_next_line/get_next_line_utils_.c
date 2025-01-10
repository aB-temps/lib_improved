/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:08 by abetemps          #+#    #+#             */
/*   Updated: 2025/01/10 16:47:40 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	*ft_free(char *s)
{
	if (s)
		free(s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*ns;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ns = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!ns)
		return (ft_free(s1));
	while (i < s1_len)
	{
		ns[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
		ns[s1_len++] = s2[i++];
	ns[s1_len] = '\0';
	ft_free(s1);
	return (ns);
}

char	*ft_strchr(char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	if (!s || len == 0)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		else
			i++;
	}
	return (NULL);
}

char	*ft_strndup(char *s, size_t n)
{
	char	*ns;
	size_t	i;

	i = 0;
	ns = malloc(sizeof(char) * (n + 1));
	if (!ns)
		return (NULL);
	while (s[i] && i < n)
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
