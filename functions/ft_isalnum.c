/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:36:40 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 17:54:52 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
        return (1);
    }
    else
    {
        return (0);
    }
}

//APAGAR
#include <stdio.h>

int main(void){
    printf("Passed a, Should be 1, got: %d\n", ft_strlen('a'));
    printf("Passed Z, Should be 1, got: %d\n", ft_strlen('Z'));
    printf("Passed -1, Should be 0, got: %d\n", ft_strlen(-1));
    printf("Passed '0', Should be 1, got: %d\n", ft_strlen('0'));
    printf("Passed '9', Should be 1, got: %d\n", ft_strlen('9'));
    printf("Passed !, Should be 0, got: %d\n", ft_strlen('!'));
}