/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:15:31 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 13:22:52 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*array;

	total_size = num * size;
	array = malloc(total_size);
	if (array == NULL)
	{
		return (NULL);
	}
	ft_bzero(array, total_size);
	return (array);
}

int	main(void)
{
	size_t index;
	int *array;
	size_t num_elements = 5;

	index = 0;
	array = ft_calloc(num_elements, sizeof(int));
	while (index < num_elements)
	{
		printf("%d ", array[index]);
		index++;
	}
	printf("\n");
	free(array);
	return (0);
}