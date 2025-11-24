/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:42:30 by itanvuia          #+#    #+#             */
/*   Updated: 2025/11/24 11:42:33 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_rec(int n)
{
	if (n > 9)
		ft_putnbr_rec(n / 10);
	ft_putchar_pf(n % 10 + '0');
}

int	ft_putnbr_pf(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		len += ft_putchar_pf('-');
		n = -n;
	}
	if (n == 0)
		return (len + ft_putchar_pf('0'));
	ft_putnbr_rec(n);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
