/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:02:56 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 18:17:43 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char    *strrchr(const char *s, int c)
{
    const   char *last;

    last = NULL;
    if (c == '\0')
    {
        return ((char *) s);
    }

    while (*s)
    {
        if (*s == c)
        {
            last = s;
        }
        s++;
    }

    return ((char *) last);
}


int main() {
    const char *str = "bartlo o meu lindao!";
    char *result = strrchr(str, 'l');
    
    if (result) {
        printf("Found 'l' at: %s\n", result);
    } else {
        printf("'l' not found.\n");
    }

    return 0;
}