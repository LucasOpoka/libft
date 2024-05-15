/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:45:45 by lopoka            #+#    #+#             */
/*   Updated: 2024/05/15 16:51:40 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_realloc(void *src, size_t old_s, size_t add_s)
{
	size_t	i;
	void	*dst;
	char	*c_dst;
	char	*c_src;

	dst = (void *) malloc(old_s + add_s);
	if (!dst)
		return (0);
	c_dst = (char *) dst;
	c_src = (char *) src;
	i = 0;
	while (i < old_s)
	{
		c_dst[i] = c_src[i];
		i++;
	}
	free(src);
	return (dst);
}
