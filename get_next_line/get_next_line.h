/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:25:18 by abetemps          #+#    #+#             */
/*   Updated: 2025/01/10 16:47:32 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// ======================================== libs
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// ======================================== vars
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

// ======================================== struct

typedef struct s_buff
{
	char	*full_buff;
	char	*residual;
	char	*valid_line;
	int		read_value;
}			t_buff;

// ======================================== prototypes
// ==================== gnl
char		*get_next_line(int fd);
void		*ft_parse_line(int fd, t_buff *data);
void		*ft_extract_line(t_buff *data);
void		ft_init_struct(t_buff *data, char *residual);
void		*ft_clear_struct(t_buff *data);

// ==================== gnl_utils
size_t		ft_strlen(char *s);
void		*ft_free(char *s);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strchr(char *s, int c);
char		*ft_strndup(char *s, size_t n);

#endif