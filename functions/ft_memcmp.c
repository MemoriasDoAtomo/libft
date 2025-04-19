/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:08:03 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/14 19:15:25 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(void *s1, const void *s2, size_t n){
    unsigned char *string_1;
    unsigned char *string_2;
    size_t index;
    
    index = 0;
    string_1 = (unsigned char *)s1;
    string_2 = (unsigned char *)s2;
    while (index < n){
        if( string_1[index] != string_2[index]){
            return (string_1[index] - string_2[index]);
        }
        index++;
    }
    return (0);
}