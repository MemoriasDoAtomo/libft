/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:15:31 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/15 17:26:11 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void *calloc(size_t num, size_t size)
{
    size_t total_size;
    size_t index;
    void *array;
    unsigned char *byte_array;

    total_size = num * size;
    array = malloc(total_size);
    index = 0;
    if (array == NULL)
    {
        return (NULL);
    }

    byte_array = (unsigned char *)array;
    while (index < total_size)
    {
        byte_array[index] = 0;
        index++;
    }
    return (array);
    
}