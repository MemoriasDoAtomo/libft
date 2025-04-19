/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:07:22 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/16 16:32:04 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/* 
int	main(void)
{
	printf("Passed A(65), Should be 1, got: %d\n", ft_isprint('A'));
	printf("Passed a(97), Should be 1, got: %d\n", ft_isprint('a'));
	printf("Passed !(33), Should be 1, got: %d\n", ft_isprint('!'));
	printf("Passed ~(126), Should be 1, got: %d\n", ft_isprint('~'));
	printf("Passed ' '(32), Should be 1, got: %d\n", ft_isprint(' '));
	printf("Passed '\\n'(10), Should be 0, got: %d\n", ft_isprint('\n'));
} */
