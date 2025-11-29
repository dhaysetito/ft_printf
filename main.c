/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhde-lim <dhde-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:55:11 by dhde-lim          #+#    #+#             */
/*   Updated: 2025/11/29 19:55:13 by dhde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("Test 0 - char\n");
	printf("ft_printf: %d\n", ft_printf("teste: %c\n", 'c'));
	printf("\n");
	printf("printf: %d\n", printf("teste: %c\n", 'c'));

	printf("\n\nTest 1 - int\n");
	printf("ft_printf: %d\n", ft_printf("teste: %d\n", 250));
	printf("\n");
	printf("printf: %d\n", printf("teste: %d\n", 250));

	void* ptr_generico = malloc(10);
	printf("\n\nTest 2 - void\n");
	printf("ft_printf: %d\n", ft_printf("teste: %p\n", ptr_generico));
	printf("\n");
	printf("printf: %d\n", printf("teste: %p\n", ptr_generico));
	
	printf("\n\nTest 3 - str\n");
	printf("ft_printf: %d\n", ft_printf("teste: %s\n", "casa"));
	printf("\n");
	printf("printf: %d\n", printf("teste: %s\n", "casa"));
	
	// void* ptr_generico = malloc(10);
	// printf("O endereço de memória é: %p\n", ptr_generico);

	return (0);
}
