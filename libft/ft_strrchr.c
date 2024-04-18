/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:28:17 by lopoka            #+#    #+#             */
/*   Updated: 2024/04/18 10:11:58 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while (*s)
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	else
		return (tmp);
}
/*
#include <stdio.h>
int main(void)
{
	char s[] = "Monika i Konstanty";
	printf("%s\n", ft_strrchr(s, 'x'));
	return 0;
}
*/
