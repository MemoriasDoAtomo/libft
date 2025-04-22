/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:36:40 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 12:48:56 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) == 1 || ft_isalpha(c) == 1);
}

/*
int	main(void)
{
	printf("Passed a, Should be 1, got: %d\n", ft_isalnum('a'));
	printf("Passed Z, Should be 1, got: %d\n", ft_isalnum('Z'));
	printf("Passed -1, Should be 0, got: %d\n", ft_isalnum(-1));
	printf("Passed '0', Should be 1, got: %d\n", ft_isalnum('0'));
	printf("Passed '9', Should be 1, got: %d\n", ft_isalnum('9'));
	printf("Passed !, Should be 0, got: %d\n", ft_isalnum('!'));
} */