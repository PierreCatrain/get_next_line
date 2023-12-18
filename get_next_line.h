/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:00:01 by picatrai          #+#    #+#             */
/*   Updated: 2023/11/17 16:40:16 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_remplissage(int fd, char *stockage);
char	*ft_strjoin(char *stockage, char *buffer);
char	*ft_strjoin_suite(char *stockage, char *buffer, char *str);
char	*ft_cut(char *stockage);
char	*ft_clean(char *stockage, int i, int j);
int		ft_check_line(char *stockage);

#endif
