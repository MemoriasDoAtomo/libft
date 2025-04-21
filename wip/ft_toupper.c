/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:22:06 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/21 16:09:53 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
/* 
int	main(void)
{
	printf("Passed A(65), Should be A(65), got: %d\n", ft_toupper('A'));
	printf("Passed a(97), Should be A(65), got: %d\n", ft_toupper('a'));
	printf("Passed 0, Should be 0, got: %d\n", ft_toupper(0));
	printf("Passed z(122), Should be Z(90), got: %d\n", ft_toupper('z'));
	printf("Passed !(33), Should be !(33), got: %d\n", ft_toupper('!'));
} */