/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 01:16:46 by dhde-lim          #+#    #+#             */
/*   Updated: 2025/11/17 01:25:16 by dhde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_lennbr(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

size_t	ft_putnbr_ft(int n, int fd)
{
	ft_putnbr_fd(n, fd);
	return (ft_lennbr(n));
}
