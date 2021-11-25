/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:19:55 by lmery             #+#    #+#             */
/*   Updated: 2021/11/25 14:34:09 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_H
# define FT_H

# include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);



int	ft_strlcpy(char *dest, char *src, int size);

int	ft_toupper(int c);
int	ft_tolower(int c);

char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, int n);


char	*ft_strnstr(const char *s, const char *w, int n);
int	ft_atoi(char *a);

/**/

//calloc
//strdup

#endif
