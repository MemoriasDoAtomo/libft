/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:42:35 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/14 19:54:21 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>


char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;

    if (needle[0] == '\0')
        return (char *)haystack;

    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (needle[j] != '\0' && (i + j) < len && haystack[i + j] == needle[j])
        {
            j++;
        }
        if (needle[j] == '\0')
            return (char *)(haystack + i);
        i++;
    }
    return NULL;
}