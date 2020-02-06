/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:24:45 by mnaude            #+#    #+#             */
/*   Updated: 2019/11/15 15:24:59 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# define GNL_ERROR -1
# define GNL_NL 1
# define GNL_EOF 0

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *post_buffer, char c);
char	*ft_strcut(char *post_buffer, char c);
int		ft_isnl(char *str, char c);

#endif
