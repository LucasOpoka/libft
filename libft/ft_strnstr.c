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
	const char	*tmp_str;
	const char	*tmp_to_find;
	const char	*lst_to_check;

	lst_to_check = str + size;
	if (!*to_find)
		return ((char *)str);
	while (*str && str < lst_to_check)
	{
		tmp_str = str;
		tmp_to_find = to_find;
		while (*tmp_str && *tmp_to_find
			&& *tmp_str == *tmp_to_find
			&& tmp_str < lst_to_check)
		{
			tmp_to_find++;
			tmp_str++;
		}
		if (!*tmp_to_find)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str2[] = "Monika <3 Lukasz";
    char str1[] = "<3";
    
    printf("my %s", ft_strnstr(str2, str1, 100));
	printf("og %s", strnstr(str2, str1, 100));

    return 0;
}
*/
