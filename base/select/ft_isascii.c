/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:51:34 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/16 16:26:48 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	printf("Passed A(65), Should be 1, got: %d\n", ft_isascii('A'));
	printf("Passed a(97), Should be 1, got: %d\n", ft_isascii('a'));
	printf("Passed 128, Should be 0, got: %d\n", ft_isascii(128));
	printf("Passed 255, Should be 0, got: %d\n", ft_isascii(255));
	printf("Passed 1000, Should be 0, got: %d\n", ft_isascii(1000));
	printf("Passed 9, Should be 1, got: %d\n", ft_isascii(9));
}*/
