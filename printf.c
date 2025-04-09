/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:53:06 by abardhan          #+#    #+#             */
/*   Updated: 2025/04/09 21:36:16 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

int	check_form(va_list args, char type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (type == 's')
		count += ft_print_s(va_arg(args, char *));
	else if (type == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (type == 'i' || type == 'd')
		count += ft_print_id(va_arg(args, int));
	else if (type == 'u')
		count += ft_print_u(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		count += ft_print_hexx(va_arg(args, unsigned int), type);
	else if (type == '%')
		count += ft_printchar('%');
	return (count);
}

int	ft_printf(const char *form, ...)
{
	int		count;
	size_t	i;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, form);
	while (form[i] != '\0')
	{
		if (form[i] == '%' && form[i + 1] != 0)
		{
			i++;
			if (ft_strchr("cspdiuxX%", form[i]))
				count += check_form(args, form[i]);
			else
				count += ft_printchar(form[i]);
		}
		else
			count += ft_printchar(form[i]);
		i++;
	}
	va_end(args);
	return (count);
}
