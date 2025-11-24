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

int ft_putnbr_pf(int n)
{
    static int count;

    count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		count += 11;
		return count;
	}
	if (n < 0)
	{
		ft_putchar_pf('-');
		ft_putnbr_pf(n * -1);
        count += 1;
	}
	else
	{
		if (n > 9)
			ft_putnbr_pf(n / 10);
		ft_putchar_pf(n % 10 + '0');
        count++;
	}
    return (count);
}
