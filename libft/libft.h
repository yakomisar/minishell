/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:19:18 by mrudge            #+#    #+#             */
/*   Updated: 2021/11/17 21:19:18 by mrudge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void		*ft_memset(void *s1, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *arr, int c, size_t n);
int			ft_memcmp(const void *arr1, const void *arr2, size_t n);
size_t		ft_strlen(const char *str); //Возвращает кол-во символов
size_t		ft_strlcpy(char *dst, const char *src, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t n);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int ch);
char		*ft_strnstr(const char *dst, const char *src, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
long int	ft_atoi(const char *str);
int			ft_isalpha(int ch);
int			ft_isdigit(int ch);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int ch);
int			ft_toupper(int ch);
int			ft_tolower(int ch);
void		*ft_calloc(size_t num, size_t size);
char		*ft_strdup(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
char		*ft_strmapi(char const *c, char (*f)(unsigned int, char));
char		*ft_itoa(int n);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_putnbr_fd(long int n, int fd);
char		**ft_split(char const *s, char c);
size_t		ft_count_words(const char *s, char c);
char		*ft_mystrncpy(char *dst, const char *src, size_t len);
char		*ft_strndup(char const *s, size_t n);
int			ft_strcmp(const char *str1, const char *str2);
double		ft_atof(const char *str);

#endif //SCHOOLLIB_LIBFT_H
