/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:52:46 by mguardia          #+#    #+#             */
/*   Updated: 2023/10/03 17:22:01 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *ptr)
{
	int				count;
	unsigned long	num;

	if (!ptr)
		return (ft_putstr("0x0"));
	num = (unsigned long)ptr;
	count = ft_putstr("0x");
	count += ft_printhexalong(num);
	return (count);
}
