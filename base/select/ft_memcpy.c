/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:02:02 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 13:17:57 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n--)
	{
		*destination++ = *source++;
	}
	return (dest);
}
/* 
int	main(void)
{
	char src[] = "Bart";
	char dest[10];

	ft_memcpy(dest, src, 4);
	dest[4] = '\0';
	printf("Expected: Bart\n");
	printf("Got: %s\n", dest);
	return (0);
} */