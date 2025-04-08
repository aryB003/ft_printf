/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:52:25 by abardhan          #+#    #+#             */
/*   Updated: 2025/04/05 23:49:57 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexx(unsigned int nb, char c)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_print_hexx((nb / 16), c);
		count += ft_print_hexx((nb % 16), c);
	}
	if (nb >= 0 && nb <= 9)
		count += ft_printchar(nb + '0');
	else if (nb >= 10 && nb <= 15)
	{
		if (c == 'x')
			count += ft_printchar((nb - 10) + 'a');
		else if (c == 'X')
			count += ft_printchar((nb - 10) + 'A');
	}
	return (count);
}
