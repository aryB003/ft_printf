/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:51:16 by root              #+#    #+#             */
/*   Updated: 2025/04/05 20:30:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int ft_printf(char *form, ...);
int ft_printchar(int ch);
int ft_print_hexx(unsigned int nb, char c);
int ft_print_id(int nb);
int ft_print_ptr(void *ptr);
int ft_print_str(char *str);
int ft_print_u(unsigned int u);

#endif 