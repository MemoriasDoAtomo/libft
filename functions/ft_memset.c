/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:47:18 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/10 19:16:16 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *memset(void *s, int c, size_t n)
{
    unsigned char   *ptr;

    ptr = (unsigned char *)s;
    while (n-- > 0)
    {
        *ptr++ = (unsigned char) c;
    }
    return (s);
}

//APAGAR
#include <stdio.h>

int main() {
    // Test case 1: Fill a string with a specific character
    char str1[10] = "Hello";
    printf("Before memset (str1): %s\n", str1);
    memset(str1, 'X', 3);  // Set first 3 bytes to 'X'
    printf("After memset (str1): %s\n", str1);

    // Test case 2: Set a block of memory to zero (null terminators)
    char str2[10] = "HelloWorld";
    printf("\nBefore memset (str2): %s\n", str2);
    memset(str2, '\0', 5);  // Set the first 5 bytes to null characters
    printf("After memset (str2): %s\n", str2);  // Should print "     World"

    // Test case 3: Fill an integer array with a specific value
    int arr[5] = {1, 2, 3, 4, 5};
    printf("\nBefore memset (arr): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    memset(arr, 0, 5 * sizeof(int));  // Set all elements to 0
    printf("\nAfter memset (arr): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Test case 4: Setting a large number of characters
    char str3[20] = "ABCDEFGH";
    printf("\nBefore memset (str3): %s\n", str3);
    memset(str3, '-', 6);  // Set the first 6 bytes to '-'
    printf("After memset (str3): %s\n", str3);  // Should print "------GH"

    return 0;
}
