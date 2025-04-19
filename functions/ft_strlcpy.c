/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:32:30 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/15 16:34:30 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

ssize_t ft_strlcpy(char *dest, const char *restrict src, size_t dsize)
{
    size_t index;
    index = 0;
    if (dsize > 0)
    {
        while (index < dsize - 1 && src[index] != '\0')
        {
            dest[index] = src[index];
            index++;
        }
        dest[index] = '\0';
    }

    index = 0;
    while(src[index] != '\0')
    {
        index++;
    }

    return (index);
}