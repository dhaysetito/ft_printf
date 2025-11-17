/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:55:11 by dhde-lim          #+#    #+#             */
/*   Updated: 2025/11/17 01:38:13 by dhde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// Test 1
	printf("Test 1 - int\n");
	printf("ft_printf: %d\n", ft_printf("teste: %d\n", 25));
	printf("\n");
	printf("printf: %d\n", printf("teste: %d\n", 25));

	// Test 2
	printf("\n\nTest 2 - str\n");
	printf("ft_printf: %d\n", ft_printf("teste: %s\n", "casa"));
	printf("\n");
	printf("printf: %d\n", printf("teste: %s\n", "casa"));
	return (0);
}
