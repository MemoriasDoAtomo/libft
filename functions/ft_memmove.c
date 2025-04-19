/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:16:41 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/15 16:34:27 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n){
    unsigned char *destination;
    unsigned char *source;
    unsigned char *temp;
    size_t index;

    destination = (unsigned char *)dest;
    source = (unsigned char *)src;
    index = 0;

    while (index < n){
        source[index] = temp[index];
        index++;
    }




}