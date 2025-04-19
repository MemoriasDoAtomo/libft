/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:48:15 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/14 19:01:53 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n){
    unsigned char *ptr; 
    unsigned char target;
    size_t index;

    ptr = (unsigned char *)s;
    target = (unsigned char)c;
    index = 0;

    while (index < n){
        if (ptr[index] == target){
            return &ptr[index];
        }
        index++;
    }

    return NULL;
}

#include <stdio.h>
int main() {
    // Test case 1: Find 'o' in "hello world"
    char data1[] = "hello world";
    char *result1 = ft_memchr(data1, 'o', sizeof(data1));
    if (result1 != NULL) {
        printf("Found 'o' in \"hello world\" at position: %ld\n", result1 - data1);
    } else {
        printf("'o' not found in \"hello world\".\n");
    }
    return (0);
}