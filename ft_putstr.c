/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:04:08 by mguardia          #+#    #+#             */
/*   Updated: 2023/10/03 17:11:00 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;
	int	flag;

	flag = 0;
	if (str == NULL)
		str = "(null)";
	count = 0;
	while (str[count])
		count += ft_putchar(str[count]);
	return (count);
}