/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 01:16:46 by dhde-lim          #+#    #+#             */
/*   Updated: 2025/11/29 19:49:09 by dhde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putvoid_ft(void *p, int fd)
{
	size_t	count;

	count = 0;
	if (!p)
		return (ft_putstr_ft("(nil)", fd));
	count += 2;
	count += ft_putstr_ft(ft_hexstr((unsigned long)p), fd);
	return (count);
}
