/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:32:30 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 13:17:57 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

size_t	ft_strlcpy(char *dest, const char *restrict src, size_t dsize)
{
	size_t	index;

	index = 0;
	if (dsize > 0)
	{
		while (index < dsize - 1 && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}

/* int	main(void)
{
	char dest[20];
	size_t ret;

	ret = ft_strlcpy(dest, "Hello, 42!", 20);
	printf("Test 1 - Full copy:\n");
	printf("Returned: %zu | Copied: %s\n", ret, dest);

	ret = ft_strlcpy(dest, "Hello, 42!", 6);
	printf("Test 2 - Truncated copy:\n");
	printf("Returned: %zu | Copied: %s\n", ret, dest);

	ret = ft_strlcpy(dest, "", 10);
	printf("Test 3 - Empty source:\n");
	printf("Returned: %zu | Copied: %s\n", ret, dest);

	ret = ft_strlcpy(dest, "LongString", 0);
	printf("Test 4 - dsize is 0:\n");
	printf("Returned: %zu | Copied (unchanged): %s\n", ret, dest);
} */
