/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:11:27 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 13:17:57 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

size_t	ft_strlen(const char *string)
{
	size_t	index;

	index = 0;
	while (string[index])
	{
		index++;
	}
	return (index);
}
/*
 int main(void){
		printf("Passed BART, Should be 4 got: %zu\n", ft_strlen("BART"));
		printf("Passed BA, Should be 2 got: %zu\n", ft_strlen("BA"));
		printf("Passed BARTOLOMEU, Should be 10, got: %zu\n",
			ft_strlen("BARTOLOMEU"));
		printf("Passed '', Should be 0, got: %zu\n", ft_strlen(""));
 } */