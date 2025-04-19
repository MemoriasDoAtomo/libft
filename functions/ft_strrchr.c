/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:02:56 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/10 18:45:28 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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

//APAGAR
#include <stdio.h>

int main() {
    const char *str = "bartlo o meu lindao!";
    char *result = strrchr(str, 'l');
    
    if (result) {
        printf("Found 'l' at: %s\n", result);  // This will print the substring starting from 'o'
    } else {
        printf("'l' not found.\n");
    }

    return 0;
}