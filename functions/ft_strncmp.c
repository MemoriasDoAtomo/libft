/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:59:45 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/10 18:45:09 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned    int index;

    index = 0;
    while ((index < n) && (*s1 == *s2) && *s1 && *s2)
    {
        s1++;
        s2++;
        index++;
    }

    if  (index == n)
    {
        return (0);
    }
    
    return ((unsigned char)*s1 - (unsigned char)*s2);
}


//APAGAR
#include <stdio.h>

int main() {
    // Test 1: Identical strings
    printf("Test 1: %d\n", ft_strncmp("hello", "hello", 5)); // Expect 0

    // Test 2: Different strings, difference at beginning
    printf("Test 2: %d\n", ft_strncmp("hello", "jello", 5)); // Negative value

    // Test 3: Different strings, difference in middle
    printf("Test 3: %d\n", ft_strncmp("hello", "heLlo", 5)); // Positive value

    // Test 4: n is less than the length, strings match in that range
    printf("Test 4: %d\n", ft_strncmp("abcdef", "abcxyz", 3)); // Expect 0

    // Test 5: n is 0
    printf("Test 5: %d\n", ft_strncmp("hello", "world", 0)); // Expect 0

    // Test 6: One string shorter than the other
    printf("Test 6: %d\n", ft_strncmp("hi", "hijack", 4)); // Negative value

    // Test 7: Comparing with null terminator involved
    printf("Test 7: %d\n", ft_strncmp("abc", "abcdef", 10)); // Negative value

    // Test 8: Both strings empty
    printf("Test 8: %d\n", ft_strncmp("", "", 5)); // Expect 0

    return 0;
}
