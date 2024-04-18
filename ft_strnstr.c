/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:20:23 by lopoka            #+#    #+#             */
/*   Updated: 2024/04/18 11:52:55 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j]
			&& str[i + j] == to_find[j] && (i + j) < size)
		{
			j++;
		}
		if (!to_find[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str2[] = "abcdefghijklmnoprst";
    char str1[] = "f";
    
    printf("my %s\n", ft_strnstr(str2, str1, 5));

    return 0;
}
*/
