/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:27:32 by mzangaro          #+#    #+#             */
/*   Updated: 2024/12/12 17:29:00 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	main()
// {
// 	int	count;

// 	count = ft_printf("Test s: Hello %s\n", "Mauro");
// 	ft_printf("The chars written are %d\n", count);
// 	count = ft_printf("printf: Hello %s\n", "Mauro");
// 	ft_printf("The chars written are %d\n\n", count);

// 	count = ft_printf("Test x: %x\n", -42);
// 	ft_printf("The chars written are %d\n", count);
// 	count = ft_printf("printf: %x\n", -42);
// 	ft_printf("The chars written are %d\n\n", count);

// 	count = ft_printf("Test d: %d\n", -42);
// 	ft_printf("The chars written are %d\n", count);
// 	count = ft_printf("printf: %d\n", -42);
// 	ft_printf("The chars written are %d\n\n", count);

// 	count = ft_printf("Test X: %X\n", -42);
// 	ft_printf("The chars written are %d\n", count);
// 	count = ft_printf("printf: %X\n", -42);
// 	ft_printf("The chars written are %d\n\n", count);

// 	char *n = "08343489";
// 	count = ft_printf("Test p: %p\n", n);
// 	ft_printf("The chars written are %d\n", count);
// 	count = ft_printf("printf: %p\n", n);
// 	ft_printf("The chars written are %d\n\n", count);

// 	count = ft_printf("Test u: %u\n", 42);
// 	ft_printf("The chars written are %d\n", count);
// 	count = ft_printf("printf: %u\n", 42);
// 	ft_printf("The chars written are %d\n\n", count);

// 	count = ft_printf("Test p0: %p\n", NULL);
// 	ft_printf("The chars written are %d\n", count);
// 	count = ft_printf("printf0: %p\n", NULL);
// 	ft_printf("The chars written are %d\n\n", count);

// 	ft_printf("Test 2:\n");
// 	count = ft_printf(" %p ", NULL);
// 	ft_printf("\nThe chars written are %d", count);

// 	count = printf(" %p ", -1);
// 	printf("\nThe chars written are %d", count);

// 	ft_printf("\nTest 3     :\n");
// 	count = ft_printf(" %p         .", &count);
// 	ft_printf("\nThe chars written are %d", count);

// 	printf("\nTest 3     :\n");
// 	count = printf(" %p         .", &count);
// 	printf("\nThe chars written are %d", count);

// 	count = printf(" %p ", 15);
// 	printf("\nThe chars written are %d", count);
// }