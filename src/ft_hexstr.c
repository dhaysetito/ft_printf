/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 00:27:24 by dhde-lim          #+#    #+#             */
/*   Updated: 2025/11/29 19:54:52 by dhde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lenhex(unsigned long n)
{
	size_t	len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len + 2);
}

char	*ft_hexstr(unsigned long n)
{
	char	*nbr;
	size_t	len;
	char	*char_hex;

	len = ft_lenhex(n);
	char_hex = ft_strdup("0123456789abcdef");
	nbr = (char *)malloc((len + 3) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr[0] = '0';
	nbr[1] = 'x';
	nbr[len] = '\0';
	while (n > 0)
	{
		nbr[len - 1] = char_hex[n % 16];
		n /= 16;
		len--;
	}
	return (nbr);
}
