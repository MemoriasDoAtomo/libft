/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:04:29 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/16 16:31:45 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int	main(void)
{
	printf("Passed A, Should be 1, got: %d\n", ft_isalpha('A'));
	printf("Passed a, Should be 1, got: %d\n", ft_isalpha('a'));
	printf("Passed 0, Should be 0, got: %d\n", ft_isalpha(1));
	printf("Passed '1', Should be 0, got: %d\n", ft_isalpha('1'));
	printf("Passed 9, Should be 0, got: %d\n", ft_isalpha(9));
}*/