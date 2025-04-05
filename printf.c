/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:51:11 by root              #+#    #+#             */
/*   Updated: 2025/04/05 17:10:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int check_form( va_list args, char type)
{
    int count;

    count = 0;

    if(type == 'c')
        count += ft_printchar(va_arg(args,int));
    else if(type == 's')
        count += ft_print_s(va_arg(args,char *));
    else if(type == 'p')
        count += ft_print_p(va_arg(args,void *));
    else if(type == 'i' || type == 'd')
        count += ft_print_id(va_arg(args,int));
    else if(type == 'u')
        count += ft_print_u(va_arg(args,unsigned int));
    else if (type == 'x' || type == 'X')
        count += ft_print_hex(va_arg(args, unsigned int),type);
    else if (type == '%')
        count += ft_printchar('%');
}

int ft_printf(char *form, ...)
{
    int count;
    size_t i;
    va_list args;

    count = 0;
    i = 0;
    va_start(args,form);
    while(form[i] != '\0')
    {
        if(form[i] == '%')
        {
            count += check_form(args,form[i+1]);
            i++; 
        }
        else
            count += ft_printchar(form[i]);
        i++;
    }
    va_end(args);
    return(count);
}