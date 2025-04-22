/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:08:03 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 12:49:29 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int	ft_memcmp(void *s1, const void *s2, size_t n)
{
	unsigned char	*string_1;
	unsigned char	*string_2;
	size_t			index;

	index = 0;
	string_1 = (unsigned char *)s1;
	string_2 = (unsigned char *)s2;
	while (index < n)
	{
		if (string_1[index] != string_2[index])
		{
			return (string_1[index] - string_2[index]);
		}
		index++;
	}
	return (0);
}
// Perceber a seguinte dúvida,
//será melhor esta alternativa ou incrementar diretemante em string_1 e string_2? OUvi que era nelhor criar um size_t..
/*
int	main(void)
{
	printf("Compare 'abc' and 'abc' (n = 3), Should be 0, got: %d\n",
		ft_memcmp("abc", "abc", 3));
	printf("Compare 'abc' and 'abd' (n = 3), Should be < 0, got: %d\n",
		ft_memcmp("abc", "abd", 3));
	printf("Compare 'abd' and 'abc' (n = 3), Should be > 0, got: %d\n",
		ft_memcmp("abd", "abc", 3));
	printf("Compare 'abc' and 'abcde' (n = 5), Should be < 0, got: %d\n",
		ft_memcmp("abc", "abcde", 5));
	printf("Compare 'abcde' and 'abc' (n = 5), Should be > 0, got: %d\n",
		ft_memcmp("abcde", "abc", 5));
	printf("Compare 'abc' and 'abc' (n = 0), Should be 0, got: %d\n",
		ft_memcmp("abc", "abc", 0));
} */
