/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:42:35 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 00:14:37 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[0] == '\0')
    {
        return (char *)haystack;
    }
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (needle[j] != '\0' && (i + j) < len 
                && haystack[i + j] == needle[j])
        {
            j++;
        }
        if (needle[j] == '\0')
            return (char *)(haystack + i);
        i++;
    }
    return NULL;
}

int	main(void)
{
	const char *text = "Hello 42 Lisbon!";
	const char *found;

	found = ft_strnstr(text, "42", 10);
	printf("Test 1 - Should find '42': %s\n", found);

	found = ft_strnstr(text, "Lisbon", 10);
	printf("Test 2 - Should return NULL: %s\n", found);

	found = ft_strnstr(text, "", 5);
	printf("Test 3 - Empty needle, should return full haystack: %s\n", found);

	found = ft_strnstr("Short", "LongerNeedle", 10);
	printf("Test 4 - Needle longer than haystack, should return NULL: %s\n", found);
}