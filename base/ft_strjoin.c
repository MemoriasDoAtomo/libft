/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:10:55 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 17:22:35 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t index;
    size_t s1_len;
    size_t s2_len;
    char    *newstring;

    if (!s1 || !s2)
        return (NULL);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    newstring = malloc(s1_len + s2_len + 1);
    if (!newstring)
        return (NULL);
    index = 0;
    while (index < s1_len)
    {
        newstring[index] = s1[index];
        index++;
    }
    index = 0;
    while (index < s2_len)
    {
        newstring[s1_len + index] = s2[index];
        index++;
    }
    newstring[s1_len + s2_len] = '\0';
    return (newstring);
}

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Result: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return (0);
}
