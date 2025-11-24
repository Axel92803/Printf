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

int	ft_putnbr_un_pf(unsigned int u)
{
    static int count;

    count = 0;
	if (u >= 10)
		ft_putnbr_un_pf(u / 10);
        count++;
	ft_putchar_pf(u % 10 + '0');
    return (count);
}
