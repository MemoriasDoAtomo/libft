/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:11:27 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 17:54:38 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *s)
{
    size_t  c;

    c = 0;
    while (s[c]) {
        c++;
    }
    return (c);
}

//APAGAR
#include <stdio.h>

int main(void){
    printf("Passed '', Should be 0 got: %zu\n", ft_strlen(""));
    printf("Passed ' ', Should be 1 got: %zu\n", ft_strlen(" "));
    printf("Passed 'A', Should be 1, got: %zu\n", ft_strlen("A"));
    printf("Passed 'Bart', Should be 4, got: %zu\n", ft_strlen("Bart"));
}