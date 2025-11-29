/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:57:25 by dhde-lim          #+#    #+#             */
/*   Updated: 2025/11/29 16:37:37 by dhde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(const char str, va_list va, size_t *count)
{
	if (str == 'c')
		*count += ft_putchar_ft(va_arg(va, int), 1);
	else if (str == 's')
		*count += ft_putstr_ft(va_arg(va, char *), 1);
	else if (str == 'p')
		*count += ft_putvoid_ft(va_arg(va, void *), 1);
	else if (str == 'd')
		*count += ft_putnbr_ft(va_arg(va, int), 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(*str, va, &count);
		}
		else
		{
			count++;
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(va);
	return (count);
}
