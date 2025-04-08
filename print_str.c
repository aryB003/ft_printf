/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:52:47 by abardhan          #+#    #+#             */
/*   Updated: 2025/04/05 23:49:57 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *str)
{
	int	i;

	if (str == NULL)
	{
		str = "(null)";
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
