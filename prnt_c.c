/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:57:56 by lopoka            #+#    #+#             */
/*   Updated: 2024/05/13 17:33:31 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	prnt_c(int c)
{
	return (write(1, &c, 1));
}
