/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:47:18 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/21 16:08:52 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n-- > 0)
    {
        *ptr++ = (unsigned char) c;
    }
    return (s);
}

/* int main() {
    char str1[10] = "Hello";
    printf("Before memset (str1): %s\n", str1);
    memset(str1, 'X', 3);
    printf("After memset (str1): %s\n", str1);
    return 0;
}
 */