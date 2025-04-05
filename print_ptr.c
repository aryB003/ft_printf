/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:50:57 by root              #+#    #+#             */
/*   Updated: 2025/04/05 20:28:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_ptr(void *ptr)
{
    int count;

    count= 0;
    count+= ft_print_str("0x");
    if( ptr == 0)
        count+= ft_print_str("0");
    else
		count+= ft_printhex((unsigned long long)ptr, 'x');
    return (count);
}

int ft_printhex(unsigned long long nb, char c)
{
    int count;

    count = 0;
    if(nb >= 16)
    {
        count += ft_print_hexx((nb / 16),c);
        count += ft_print_hexx((nb % 16),c);
    }
    if( nb >= 0 && nb <= 9)
        count += ft_printchar(nb + '0');
    else if(nb >= 10 && nb <= 15)
    {
        if(c == 'x')
            count     += ft_printchar((nb - 10) + 'a');
        else if(c == 'X')
            count     += ft_printchar((nb - 10) + 'A');
    }
    return(count);
}