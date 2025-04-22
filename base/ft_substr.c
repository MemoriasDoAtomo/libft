/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:11:35 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 17:07:56 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t index;
    size_t str_len;
    unsigned char *substring;

    str_len = ft_strlen(s);
    if (start >= ft_strlen(s))
    {
        substring = malloc(1);
        if(!substring)
        {
            return (NULL);
        }
        substring[0] = '\0';
        return ((char *)substring);
    }

    if (start + len > str_len){
    len = str_len - start;
    }

    index = 0;
    substring = malloc(len + 1);
    if (!substring)
    {
        return (NULL);
    }
    while (index < len)
    {
        substring[index] = s[start + index];
        index++; 
    }
    substring[index] = '\0';
    return ((char *)substring);
}

int main(void)
{
    char *original = "Hello, 42 Network!";
    char *sub1;
    char *sub2;
    char *sub3;
    char *sub4;

    sub1 = ft_substr(original, 0, 5);
    sub2 = ft_substr(original, 7, 2);
    sub3 = ft_substr(original, 15, 10);
    sub4 = ft_substr(original, 50, 5);

    printf("sub1: \"%s\"\n", sub1);
    printf("sub2: \"%s\"\n", sub2);
    printf("sub3: \"%s\"\n", sub3);
    printf("sub4: \"%s\"\n", sub4);

    free(sub1);
    free(sub2);
    free(sub3);
    free(sub4);

    return 0;
}