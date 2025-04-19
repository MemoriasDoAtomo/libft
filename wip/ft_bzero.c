/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:38:02 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 18:13:54 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

void ft_bzero(void *s, size_t n) {
    unsigned char *ptr;
    
    ptr = (unsigned char *)s;
    while (n-- > 0) {
        *ptr++ = 0;
    }
}

/* int	main(void)
{
	char buffer[10];
	
    int index = 0;
	while (index < 10)
	{
		buffer[index] = 'A';
		index++;
	}
	ft_bzero(buffer, 5);
	index = 0;
	while (index < 10)
	{
		printf("buffer[%d] = %d\n", index, (unsigned char)buffer[i]);
		index++;
	}
	return (0);
} */
