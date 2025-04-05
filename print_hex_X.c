/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:50:50 by root              #+#    #+#             */
/*   Updated: 2025/04/05 20:27:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_hexx(unsigned int nb, char c)
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
            count += ft_printchar((nb - 10) + 'a');
        else if(c == 'X')
            count += ft_printchar((nb - 10) + 'A');
    }
    return(count);
}
