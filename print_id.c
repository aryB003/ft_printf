/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_id.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:50:54 by root              #+#    #+#             */
/*   Updated: 2025/04/05 18:47:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_id(int nb)
{
    int count;

    count = 0;
    if( nb == -2147483648)
    {
        ft_print_str("-2147483648");
		return (11);
    }
    else if(nb < 0)
    {
        ft_printchar('-');
        nb = nb * (-1);
        count++;
    }
    if (nb > 9)
		count += ft_print_id(nb / 10);
	count += ft_printchar((nb % 10) + '0');
	return (count);
}