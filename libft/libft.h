/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:34:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/04/17 15:04:52 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);

void	*ft_memset(void *mem, int val, size_t size);

void	*ft_memcpy(void *dest, const void *src, size_t size);

void	*ft_memmove(void *dest, const void *src, size_t size);

size_t	ft_strlcpy(char *dest, char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int		ft_toupper(int c);

int		ft_tolower(int c);

#endif
