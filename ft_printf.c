/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:23:36 by mguardia          #+#    #+#             */
/*   Updated: 2023/12/12 17:05:57 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	format_printf(char c, va_list ap, int *count)
{
	if (c == '%')
		*count += write(1, "%", 1);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (c == 'p')
		ft_printpointer(va_arg(ap, void *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr_base((long long int)va_arg(ap, int), 10, \
								count, "0123456789");
	else if (c == 'u')
		ft_putnbr_base((long long int)va_arg(ap, unsigned int), 10, \
								count, "0123456789");
	else if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), 16, \
								count, "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), 16, \
								count, "0123456789ABCDEF");
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			format_printf(*str, ap, &count);
		}
		else
			count += write(1, &(*str), 1);
		str++;
	}
	va_end(ap);
	return (count);
}
