/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanvuia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:43:40 by itanvuia          #+#    #+#             */
/*   Updated: 2025/11/24 11:43:41 by itanvuia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str != '\0')
	{
		ft_putchar_pf(*str);
		count++;
		str++;
	}
	return (count);
}
