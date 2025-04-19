/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:26:48 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 17:56:07 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/*
int	main(void)
{
	printf("Passed A(65), Should be a(97), got: %d\n", ft_tolower('A'));
	printf("Passed a(97), Should be a(97), got: %d\n", ft_tolower('a'));
	printf("Passed 0, Should be 0, got: %d\n", ft_tolower(0));
	printf("Passed Z(90), Should be z(122), got: %d\n", ft_tolower('Z'));
	printf("Passed !(33), Should be !(33), got: %d\n", ft_tolower('!'));
} */