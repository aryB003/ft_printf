/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:52:38 by abardhan          #+#    #+#             */
/*   Updated: 2025/04/09 21:41:28 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long nb, char c)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_printhex((nb / 16), c);
		count += ft_printhex((nb % 16), c);
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

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	count += ft_print_s("0x");
	if (ptr == 0)
		count += ft_print_s("0");
	else
		count += ft_printhex((unsigned long long)ptr, 'x');
	return (count);
}
