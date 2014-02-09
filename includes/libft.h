/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:17:04 by aviala            #+#    #+#             */
/*   Updated: 2014/02/09 20:17:30 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# include "ftio.h"

typedef struct		s_list
{
	void			*data;
	size_t			data_size;
	struct s_list	*next;
}					t_list;

typedef int (*ft_is)(const int c);

int		ft_isalnum(const int c);
int		ft_isalpha(const int c);
int		ft_isascii(const int c);
int		ft_isdigit(const int c);
int		ft_isprint(const int c);
int		ft_isspace(const int c);
int		ft_isupper(const int c);
int		ft_islower(const int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(const size_t size);
void	ft_memdel(void **ap);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_itoa(int n);
int		ft_atoi(const char *nptr);
int		ft_tolower(const int c);
int		ft_toupper(const int c);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
char	**ft_strsplit(const char *s, const char c);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnjoin(const char *s1, const char *s2,
					const size_t n1, const size_t n2);
size_t	ft_strlen(const char *s);
size_t	ft_strpos(const char *s, const char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s);
void	ft_str_to_lst(t_list **alst, const char *s, ft_is f);
size_t	ft_countnc(const char *s, const char c, size_t n);

/*
** 2 Dimensionnal strings.
*/

char	**ft_strdup2d(char **s1);
void	ft_strdel2d(char ***str);

/*
** List
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	ft_lstdel(t_list **lst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **lst, t_list *p_new);
void	ft_lstdelone(t_list **lst, void (*del)(void *, size_t));
void	ft_lstget(t_list **alst, const char *s, int i, int j);
size_t	ft_lstlen(const t_list *lst);
t_list	*ft_lstnew(void const *data, size_t data_size);
void	*ft_lst_pushback_new(t_list *lst, t_list *lst_new);
void	*ft_lst_pushfront_new(t_list *lst, t_list *lst_new);
void	*ft_lst_pushback(t_list *lst, const void *data,
							const size_t data_size);
void	*ft_lst_pushfront(t_list *b_lst, const void *data,
							const size_t data_size);

/*
** Bonus
*/

void	ft_swapchar(char *a, char *b);
void	ft_swapint(int *a, int *b);
char	*ft_strrev(char *str);

#endif /* !LIBFT_H */

