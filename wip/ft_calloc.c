/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:15:31 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 00:34:49 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

void *ft_calloc(size_t num, size_t size)
{
    size_t total_size;
    void *array;

    total_size = num * size;
    array = malloc(total_size);
    if (array == NULL)
    {
        return (NULL);
    }
    ft_bzero(array, total_size);
    return (array);
}

int main(void){
    int index;
    int *array;
    index = 0;
    array = ft_calloc(5, 1);

    while (array[index])
    {
        printf("%d", array[index]);
        index++;
    }
    printf("\n");
    return 0;
}