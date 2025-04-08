/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:52:57 by abardhan          #+#    #+#             */
/*   Updated: 2025/04/05 23:49:57 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int u)
{
	int	count;

	count = 0;
	if (u > 9)
	{
		count += ft_print_u(u / 10);
		count += ft_print_u(u % 10);
	}
	else
		count += ft_printchar(u + '0');
	return (count);
}
