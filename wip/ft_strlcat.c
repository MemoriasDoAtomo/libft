/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:34:41 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 00:18:37 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dst_size)
{
    size_t index;
    size_t src_size;
    size_t start_index;

    index = 0;
    src_size = 0;
    start_index = 0;
    while (src[src_size])
    {
        src_size++;
    }

    while (start_index < dst_size && dst[start_index] != '\0')
    {
        start_index++;
    }
    
    if(start_index >= dst_size)
    {
        return (dst_size + src_size);
    }

    while(src[index] && (start_index + index + 1) < dst_size)
    {
        dst[start_index + index] = src[index];
        index++;
    }
    dst[start_index + index] = '\0';
    return(src_size + start_index);
}

int main() {
    char dst[10] = "Hello";
    const char *src = " World!";
    
    size_t result = strlcat(dst, src, sizeof(dst));
    
    printf("Result: %zu\n", result); 
    printf("dst: %s\n", dst);
    
    return 0;
}