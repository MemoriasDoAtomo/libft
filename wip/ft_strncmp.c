/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:59:45 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 17:57:37 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t index;

    index = 0;
    while (s1[index] && s2[index] && index < n)
    {
        index++;
    }
    if (index == n)
    {
        return (0);
    }
    else
    {
        return ((unsigned char)s1[index] - (unsigned char)s2[index]);
    }
}
/*
int	main(void)
{
	printf("Compare 'abc' and 'abc' (n = 3), Should be 0, got: %d\n", ft_strncmp("abc", "abc", 3));
	printf("Compare 'abc' and 'abd' (n = 3), Should be < 0, got: %d\n", ft_strncmp("abc", "abd", 3));
	printf("Compare 'abd' and 'abc' (n = 3), Should be > 0, got: %d\n", ft_strncmp("abd", "abc", 3));
	printf("Compare 'abc' and 'abcde' (n = 5), Should be < 0, got: %d\n", ft_strncmp("abc", "abcde", 5));
	printf("Compare 'abcde' and 'abc' (n = 5), Should be > 0, got: %d\n", ft_strncmp("abcde", "abc", 5));
	printf("Compare 'abc' and 'abc' (n = 0), Should be 0, got: %d\n", ft_strncmp("abc", "abc", 0));
}
*/