/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:42:07 by itanvuia          #+#    #+#             */
/*   Updated: 2025/11/24 11:42:09 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int    ft_len(unsigned long long num)
{
    int    count;

    count = 0;
    while (num != 0)
    {
        num /= 16;
        count++;
    }
    return (count);
}

static int  ft_hex(unsigned int num,const char format)
{
    if (num >= 16)
    {
        ft_hex(num / 16, format);
        ft_hex(num % 16, format);
    }
    else
    {
        if (num <= 9)
            ft_putchar_pf(num + '0');
        else
        {
            if (format == 'x')
                ft_putchar_pf(num - 10 + 'a');
            if (format == 'X')
                ft_putchar_pf(num - 10 + 'A');
        }
    }
    return (1);
}

int ft_put_hex_pf(unsigned int num, const char format)
{
    int count;

    count = 0;
    if (num == 0)
    {
        return (ft_putchar_pf('0'));
        count++;
    }
    else
        ft_hex(num, format);
    return (count + ft_len(num));
}
