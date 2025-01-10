/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:03:22 by abetemps          #+#    #+#             */
/*   Updated: 2025/01/08 21:17:04 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(int fd, const char *str, ...) __attribute__((format(printf, 2,
					3)));
void	ft_handle_datatype(char c, va_list *cursor, ssize_t *length, int fd);
void	ft_putaddr_fd(void *ptr, ssize_t *len, int fd);
void	ft_putchar_fd(char c, ssize_t *len, int fd);
void	ft_putstr_fd(char *s, ssize_t *len, int fd);
void	ft_putnbr_fd(long long n, ssize_t *len, int fd);
void	ft_putnbr_base_fd(unsigned long int nbr, char c, ssize_t *len, int fd);
size_t	ft_strlen(char *s);

#endif