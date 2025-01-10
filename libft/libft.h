/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:59:59 by abetemps          #+#    #+#             */
/*   Updated: 2025/01/10 13:55:55 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(int c);
/* ft_isalpha - Check if character is alphabetic
 * - PARAMETERS
 *    c :	The character to be checked.
 * - RETURN VALUES
 *     The ft_isalpha() function returns :
 * 		97 ('a') if c is a lowercase letter,
 * 		65 ('A') if c is an uppercase letter,
 * 		0 otherwise.*/
int					ft_isdigit(int c);
/* ft_isdigit - Check if character is a digit (0-9)
 * - PARAMETERS
 *    c :	The character to be checked.
 * - RETURN VALUES
 *     	The ft_isdigit() function returns :
 * 		57 ('9') if c is a digit,
 * 		0 otherwise.*/
int					ft_isalnum(int c);
/* ft_isalnum - Check if character is alphanumeric
 * - PARAMETERS
 *    c :	The character to be checked.
 * - RETURN VALUE
 *      The ft_isalnum() function returns :
 * 		97 ('a') if c is a lowercase letter,
 *		65 ('A') if c is an uppercase letter,
 *		57 ('9') if c is a digit,
 *		0 otherwise.*/
int					ft_isascii(int c);
/* ft_isascii - Check if character is ASCII
 * - PARAMETERS
 *    c :	The character to be checked.
 * - RETURN VALUE
 *      The ft_isascii() function returns :
 * 		1 if c is an ASCII character,
 *		0 otherwise.*/
int					ft_isprint(int c);
/* ft_isprint - Check if character is a printable character
 * - PARAMETERS
 *    c :	The character to be checked.
 * - RETURN VALUE
 *      The ft_isprint() function returns :
 * 		1 if c is a printable character,
 *		0 otherwise.*/
size_t				ft_strlen(const char *str);
/* ft_strlen - Calculate the length of a string
 * - PARAMETERS
 *    s : The string whose length is to be calculated.
 * - RETURN VALUE
 *      The ft_strlen() function returns
 * 		the number of bytes in the string pointed to by s,
 * 		excluding the terminating null byte.*/
void				*ft_memset(void *s, int c, size_t n);
/* ft_memset - Fill memory with a constant byte
 * - PARAMETERS
 *    s : A pointer to the memory area to be filled.
 *    c : The byte to fill the memory area with.
 *    n : The number of bytes to be filled.
 * - RETURN VALUE
 *      The ft_memset() function returns
 * 		a pointer to the memory area s.*/
void				ft_bzero(void *s, size_t n);
/* ft_bzero - Fill memory with zeros (bytes containing '\0')
 * - PARAMETERS
 *    s : A pointer to the memory area to be zeroed.
 *    n : The number of bytes to be zeroed.
 * - RETURN VALUE
 *      None.*/
void				*ft_memcpy(void *dest, const void *src, size_t n);
/* ft_memcpy - Copy memory area
 * - PARAMETERS
 *    dest : A pointer to the destination memory area
 * 			where the content is to be copied.
 *    src : A pointer to the source memory area
 * 		from which the content is to be copied.
 *    n : The number of bytes to be copied from the source to the destination.
 * - RETURN VALUE
 *      The ft_memcpy() function returns pointer to dest.*/
void				*ft_memmove(void *dest, const void *src, size_t n);
/* ft_memmove - Move memory area
 * - PARAMETERS
 *    dest : A pointer to the destination memory area
 * 			where the content is to be copied.
 *    src : A pointer to the source memory area
 * 			from which the content is to be copied.
 *    n : The number of bytes to be copied from the source to the destination.
 * - RETURN VALUE
 *      The ft_memmove() function returns a pointer to dest.*/
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
/* ft_memcpy - Copy memory area
 * - PARAMETERS
 *    dest : A pointer to the destination memory area
 * 			where the content is to be copied.
 *    src : A pointer to the source memory area
 * 			from which the content is to be copied.
 *    n : The number of bytes to be copied from the source to the destination.
 * - RETURN VALUE
 *      The ft_memcpy() function returns a pointer to dest.*/
size_t				ft_strlcat(char *dst, const char *src, size_t size);
/* ft_strlcat - Concatenate string to a sized buffer
 * - PARAMETERS
 *    dst : A pointer to the destination buffer.
 *    src : A pointer to the source string.
 *    size : The size of the destination buffer.
 * - RETURN VALUE
 *      The ft_strlcat() function returns :
 * 		the total length of the string it tried to create,
 * 		which is the initial length of dst plus the length of src.*/
int					ft_toupper(int c);
/* ft_toupper - Convert character to uppercase
 * - PARAMETERS
 *    c : The character to be converted.
 * - RETURN VALUE
 *      The ft_toupper() function returns :
 * 		the uppercase equivalent of c if c is a lowercase letter,
 *		c otherwise.*/
int					ft_tolower(int c);
/* ft_tolower - Convert character to lowercase
 * - PARAMETERS
 *    c : The character to be converted.
 * - RETURN VALUE
 *      The ft_tolower() function returns :
 * 		the lowercase equivalent of c if c is an uppercase letter,
 *		c otherwise.*/
char				*ft_strchr(const char *s, int c);
/* ft_strchr - Locate first occurence of a character in string
 * - PARAMETERS
 *    s : The string to be searched.
 *    c : The character to be located.
 * - RETURN VALUE
 *      The ft_strchr() function returns :
 * 		a pointer to the first occurrence of the character c in the string s,
 *		or NULL if the character is not found.*/
char				*ft_strrchr(const char *s, int c);
/* ft_strrchr - Locate last occurence of a character in string
 * - PARAMETERS
 *    s : The string to be searched.
 *    c : The character to be located.
 * - RETURN VALUE
 *      The ft_strrchr() function returns :
 * 		a pointer to the last occurrence of the character c in the string s,
 *		or NULL if the character is not found.*/
int					ft_strncmp(const char *s1, const char *s2, size_t n);
/* ft_strncmp - Compare two strings
 * - PARAMETERS
 *    s1 : The first string to be compared.
 *    s2 : The second string to be compared.
 *    n : The maximum number of bytes to compare.
 * - RETURN VALUE
 *      The ft_strncmp() function returns :
 * 		an integer less than, equal to, or greater than zero if s1 is found,
 * 		respectively, to be less than, to match, or be greater than s2.*/
void				*ft_memchr(const void *s, int c, size_t n);
/* ft_memchr - Scan memory for a character
 * - PARAMETERS
 *    s : The memory area to be scanned.
 *    c : The character to be located.
 *    n : The number of bytes to be scanned.
 * - RETURN VALUE
 *      The ft_memchr() function returns :
 * 		a pointer to the matching byte,
 *		or NULL if the character does not occur in the given memory area.*/
int					ft_memcmp(const void *s1, const void *s2, size_t n);
/* ft_memcmp - Compare memory areas
 * - PARAMETERS
 *    s1 : The first memory area to be compared.
 *    s2 : The second memory area to be compared.
 *    n : The number of bytes to compare.
 * - RETURN VALUE
 *      The ft_memcmp() function returns :
 * 		an integer less than, equal to, or greater than zero
 * 		if the first n bytes of s1 is found,
 * 		respectively, to be less than, to match,
 * 		or be greater than the first n bytes of s2.*/
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
/* ft_strnstr - Locate a substring in a string
 * - PARAMETERS
 *    big : The string to be searched.
 *    little : The substring to be located.
 *    len : The maximum number of characters to search.
 * - RETURN VALUE
 *      The ft_strnstr() function returns :
 * 		a pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.*/
int					ft_atoi(const char *nptr);
/* ft_atoi - Convert string to integer
 * - PARAMETERS
 *    nptr : The string to be converted.
 * - RETURN VALUE
 *      The ft_atoi() function returns :
 * 		the converted value as an int.*/
void				*ft_calloc(size_t nmemb, size_t size);
/* ft_calloc - Allocate memory for an array and initialize it to zero
 * - PARAMETERS
 *    nmemb : The number of elements to be allocated.
 *    size : The size of each element.
 * - RETURN VALUE
 *      The ft_calloc() function returns :
 * 		a pointer to the allocated memory,
 *		or NULL if the allocation fails.*/
char				*ft_strdup(const char *s);
/* ft_strdup - Duplicate a string
 * - PARAMETERS
 *    s : The string to be duplicated.
 * - RETURN VALUE
 *      The ft_strdup() function returns :
 * 		a pointer to the newly allocated string,
 *		or NULL if the allocation fails.*/
char				*ft_substr(char const *s, unsigned int start, size_t len);
/* ft_substr - Extract a substring from a string
 * - PARAMETERS
 *    s : The original string.
 *    start : The starting index of the substring.
 *    len : The maximum length of the substring.
 * - RETURN VALUE
 *      The ft_substr() function returns :
 * 		a pointer to the newly allocated substring,
 *		or NULL if the allocation fails.*/
char				*ft_strjoin(char const *s1, char const *s2);
/* ft_strjoin - Concatenate two strings into a new string
 * - PARAMETERS
 *    s1 : The first string.
 *    s2 : The second string.
 * - RETURN VALUE
 *      The ft_strjoin() function returns :
 * 		a pointer to the newly allocated string,
 *		or NULL if the allocation fails.*/
char				*ft_strtrim(char const *s1, char const *set);
/* ft_strtrim - Trim characters from the beginning and end of a string
 * - PARAMETERS
 *    s1 : The original string.
 *    set : The set of characters to be trimmed from the string.
 * - RETURN VALUE
 *      The ft_strtrim() function returns :
 * 		a pointer to the newly allocated trimmed string,
 *		or NULL if the allocation fails.*/
char				**ft_split(char const *s, char c);
/* ft_split - Split a string into an array of substrings
 * - PARAMETERS
 *    s : The string to be split.
 *    c : The delimiter character.
 * - RETURN VALUE
 *      The ft_split() function returns :
 * 		an array of newly allocated substrings,
 *		or NULL if the allocation fails.*/
char				*ft_itoa(int n);
/* ft_itoa - Convert integer to string
 * - PARAMETERS
 *    n : The integer to be converted.
 * - RETURN VALUE
 *      The ft_itoa() function returns :
 * 		a pointer to the newly allocated string representing the integer,
 *		or NULL if the allocation fails.*/
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* ft_strmapi - Apply a function to each character of a string
 * - PARAMETERS
 *    s : The original string.
 *    f : The function to apply to each character.
 * - RETURN VALUE
 *      The ft_strmapi() function returns :
 * 		a pointer to the newly allocated string resulting from
 * 		the successive applications of f,
 *		or NULL if the allocation fails.*/
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
/* ft_striteri - Apply a function to each character of a string
 * - PARAMETERS
 *    s : The string on which to iterate.
 *    f : The function to apply to each character.
 * - RETURN VALUE
 *      None.*/
void				ft_putchar_fd(char c, int fd);
/* ft_putchar_fd - Write a character to a file descriptor
 * - PARAMETERS
 *    c : The character to be written.
 *    fd : The file descriptor on which to write.
 * - RETURN VALUE
 *      None.*/
void				ft_putstr_fd(char *s, int fd);
/* ft_putstr_fd - Write a string to a file descriptor
 * - PARAMETERS
 *    s : The string to be written.
 *    fd : The file descriptor on which to write.
 * - RETURN VALUE
 *      None.*/
void				ft_putendl_fd(char *s, int fd);
/* ft_putendl_fd - Write a string to a file descriptor, followed by a newline
 * - PARAMETERS
 *    s : The string to be written.
 *    fd : The file descriptor on which to write.
 * - RETURN VALUE
 *      None.*/
void				ft_putnbr_fd(int n, int fd);
/* ft_putnbr_fd - Write an integer to a file descriptor
 * - PARAMETERS
 *    n : The integer to be written.
 *    fd : The file descriptor on which to write.
 * - RETURN VALUE
 *      None.*/
t_list				*ft_lstnew(void *content);
/* ft_lstnew - Create a new list element
 * - PARAMETERS
 *    content : The content to create the new element with.
 * - RETURN VALUE
 *      The new element. */
void				ft_lstadd_front(t_list **lst, t_list *new);
/* ft_lstadd_front - Add a new element at the beginning of a list
 * - PARAMETERS
 *    lst : The address of a pointer to the first element of the list.
 *    new : The new element to add.
 * - RETURN VALUE
 *      None. */
int					ft_lstsize(t_list *lst);
/* ft_lstsize - Count the number of elements in a list
 * - PARAMETERS
 *    lst : The beginning of the list.
 * - RETURN VALUE
 *      The number of elements in the list. */
t_list				*ft_lstlast(t_list *lst);
/* ft_lstlast - Find the last element of a list
 * - PARAMETERS
 *    lst : The beginning of the list.
 * - RETURN VALUE
 *      The last element of the list. */
void				ft_lstadd_back(t_list **lst, t_list *new);
/* ft_lstadd_back - Add a new element at the end of a list
 * - PARAMETERS
 *    lst : The address of a pointer to the first element of the list.
 *    new : The new element to add.
 * - RETURN VALUE
 *      None. */
void				ft_lstdelone(t_list *lst, void (*del)(void *));
/* ft_lstdelone - Delete a single element of a list
 * - PARAMETERS
 *    lst : The element to delete.
 *    del : The function to delete the content of the element.
 * - RETURN VALUE
 *      None. */
void				ft_lstclear(t_list **lst, void (*del)(void *));
/* ft_lstclear - Delete and free all elements of a list
 * - PARAMETERS
 *    lst : The address of a pointer to the first element of the list.
 *    del : The function to delete the content of each element.
 * - RETURN VALUE
 *      None. */
void				ft_lstiter(t_list *lst, void (*f)(void *));
/* ft_lstiter - Apply a function to each element of a list
 * - PARAMETERS
 *    lst : The beginning of the list.
 *    f : The function to apply to each element.
 * - RETURN VALUE
 *      None. */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
/* ft_lstmap - Create a new list by applying a function
	to each element of an existing list
 * - PARAMETERS
 *    lst : The beginning of the list.
 *    f : The function to apply to each element.
 *    del : The function to delete the content of an element if needed.
 * - RETURN VALUE
 *      The new list. */

#endif
