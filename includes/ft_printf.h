/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:02:14 by dhde-lim          #+#    #+#             */
/*   Updated: 2025/11/29 19:46:53 by dhde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int		ft_printf(const char *str, ...);

size_t	ft_putchar_ft(char c, int fd);

size_t	ft_putnbr_ft(int n, int fd);

size_t	ft_putvoid_ft(void *p, int fd);

size_t	ft_putstr_ft(char *s, int fd);

char	*ft_hexstr(unsigned long n);

#endif
