/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:02:02 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/14 19:07:41 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memcpy(void *dest, const void *src, size_t n){
    unsigned char *destination;
    unsigned char *source;
    size_t index;
    
    index = 0;
    destination = (unsigned char *)dest;
    source = (unsigned char *)src;
    while (index < n && src){
        destination[index] = source[index];
        index++;
    }
    return &dest;
}