/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:02:56 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 13:17:43 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char	*strrchr(const char *string, int charac)
{
	const char	*last = NULL;

	while (*string)
	{
		if (*string == (char)charac)
			last = string;
		string++;
	}
	if ((char)charac == '\0')
		return ((char *)string);
	return ((char *)last);
}

int	main(void)
{
	const char *str = "bartlo o meu lindao!";
	char *result = strrchr(str, 'l');

	if (result)
	{
		printf("Found 'l' at: %s\n", result);
	}
	else
	{
		printf("'l' not found.\n");
	}

	return (0);
}