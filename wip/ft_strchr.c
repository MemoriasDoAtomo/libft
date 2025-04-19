/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:47:30 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/19 15:58:46 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char	*strrchr(const char *string, int charac)
{
	char	*last;

	last = NULL;
	while (*string)
	{
		if (*string == (char)charac)
			last = (char *)string;
		string++;
	}
	if ((char)charac == '\0')
		return ((char *)string);
	return (last);
}
/* 
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
 */