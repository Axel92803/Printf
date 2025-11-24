/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:42:53 by itanvuia          #+#    #+#             */
/*   Updated: 2025/11/24 11:42:57 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unumlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_un_pf(unsigned int u)
{
	int	len;

	len = ft_unumlen(u);
	if (u >= 10)
		ft_putnbr_un_pf(u / 10);
	ft_putchar_pf(u % 10 + '0');
	return (len);
}
