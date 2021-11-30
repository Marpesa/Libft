/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:19:55 by lmery             #+#    #+#             */
/*   Updated: 2021/11/30 17:17:20 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_H
# define FT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, int n);
void	*ft_memcpy(void *dst, const void *src, int n);
void	*ft_memmove(void *dst, const void *src, int n);
int	ft_strlcpy(char *dest, char *src, int size);
int	ft_strlcat(char *dest, char *src, int size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, int n);
void	*ft_memchr(const void *src, int c, int n);
int	ft_memcmp(const void *s1, const void *s2, int n);
char	*ft_strnstr(const char *s, const char *w, int n);
int	ft_atoi(char *a);

/**/
void	*ft_calloc(int n, int s);
char	*ft_strdup(const char *s);

/**/
char	*ft_substr(char const *s, unsigned int i, int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

#endif
