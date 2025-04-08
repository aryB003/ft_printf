/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 23:51:00 by abardhan          #+#    #+#             */
/*   Updated: 2025/04/05 23:53:03 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *form, ...);
int	ft_printchar(int ch);
int	ft_print_hexx(unsigned int nb, char c);
int	ft_print_id(int nb);
int	ft_print_ptr(void *ptr);
int	ft_print_s(char *str);
int	ft_print_u(unsigned int u);

#endif