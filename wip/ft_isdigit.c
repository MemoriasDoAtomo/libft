/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:17:52 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/16 16:26:59 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/* 
int	main(void)
{
	printf("Passed A, Should be 0, got: %d\n", ft_isdigit('A'));
	printf("Passed a, Should be 0, got: %d\n", ft_isdigit('a'));
	printf("Passed 0, Should be 0, got: %d\n", ft_isdigit(1));
	printf("Passed '1', Should be 1, got: %d\n", ft_isdigit('1'));
	printf("Passed 9, Should be 0, got: %d\n", ft_isdigit(9));
} */