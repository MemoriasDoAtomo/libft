/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:04:29 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 17:54:44 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
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
    printf("Passed A, Should be 1, got: %d\n", ft_strlen('A'));
    printf("Passed a, Should be 1, got: %d\n", ft_strlen('a'));
    printf("Passed 0, Should be 0, got: %d\n", ft_strlen(1));
    printf("Passed '1', Should be 0, got: %d\n", ft_strlen('1'));
    printf("Passed 9, Should be 0, got: %d\n", ft_strlen(9));
}