/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:51:07 by root              #+#    #+#             */
/*   Updated: 2025/04/05 20:26:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_u(unsigned int u)
{
    int	count;

	count = 0;
	if (u > 9)
	{
		count += ft_printuint(u / 10);
		count += ft_printuint(u % 10);
	}
	else
		count += ft_printchar(u + '0');
	return (count);
}