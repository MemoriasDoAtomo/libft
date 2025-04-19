/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:47:30 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/16 16:56:21 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char	*strrchr(const char *string, int charac)
{
	if (charac == '\0')
	{
		return ((charac *)string);
	}
	while (*string)
	{
		if (*string == charac)
		{
			return ((char *)string);
		}
		string++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str;
	char		*result;

	str = "Bart o meu lindao!";
	result = strrchr(str, 'o');
	if (result)
	{
		printf("Found 'o' at: %s\n", result);
	}
	else
	{
		printf("'o' not found.\n");
	}
	return (0);
}
