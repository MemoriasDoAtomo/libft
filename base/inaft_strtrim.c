/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:23:54 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 17:28:47 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t index;
    size_t s1_len;
    size_t newstring_len;
    char *newstring;

    index = 0;
    s1_len = ft_len(s1);
    newstring_len = s1_len - (2 * set);
    newstring = malloc(newstring_len * sizeof(char));
    if(!newstring)
    {
        return (NULL);
    }
    while (set + index < s1_len - set)
    {
        newstring[index] = s1[set + index];
        index++;
    }
    newstring[index] = '\0';
    return (newstring);
}