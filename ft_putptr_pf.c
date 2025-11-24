/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:43:21 by itanvuia          #+#    #+#             */
/*   Updated: 2025/11/24 11:43:23 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_pf(num + '0');
		else
			ft_putchar_pf(num - 10 + 'a');
	}
}

int	ft_putptr_pf(unsigned long long ptr)
{
	int	len;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	ft_put_ptr(ptr);
	while (ptr > 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}
