/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:59:27 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 13:16:05 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_atoi(const char *str)
{
	size_t	index;
	int		negative;
	int		result;

	index = 0;
	negative = 1;
	result = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
	{
		index++;
	}
	if (str[index] == 43 || str[index] == 45)
	{
		if (str[index] == 45)
		{
			negative *= -1;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * negative);
}
/*
int	main(void)
{
	printf("Should be 42, got: %d\n", atoi("42"));
	printf("Should be -42, got: %d\n", atoi("   -42"));
	printf("Should be 0, got: %d\n", atoi("+-42"));
	printf("Should be 123, got: %d\n", atoi("   +123abc"));
	printf("Should be 0, got: %d\n", atoi("hello123"));
	return (0);
} */