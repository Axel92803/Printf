/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:41:17 by itanvuia          #+#    #+#             */
/*   Updated: 2025/11/24 11:41:24 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	parse_format(char flag, va_list ap)
{
	if (flag == 'c')
		return (ft_putchar_pf(va_arg(ap, int)));
	else if (flag == 's')
		return (ft_putstr_pf(va_arg(ap, char *)));
	else if (flag == 'p')
		return (ft_putptr_pf(va_arg(ap, unsigned long long)));
	else if (flag == 'd' || flag == 'i')
		return (ft_putnbr_pf(va_arg(ap, int)));
	else if (flag == 'u')
		return (ft_putnbr_un_pf(va_arg(ap, unsigned int)));
	else if (flag == 'x' || flag == 'X')
		return (ft_put_hex_pf(va_arg(ap, unsigned int), flag));
	else if (flag == '%')
		return (write(1, "%", 1));
	return (write(1, &flag, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
	{
		ft_putstr_fd("Error: NULL format string\n", 2);
		return (-1);
	}
	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
				break ;
			count += parse_format(*(++format), ap);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
