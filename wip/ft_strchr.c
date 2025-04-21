/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:47:30 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/21 16:09:30 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alibft.h"

char	*ft_strchr(const char *string, int charac)
{
	while (*string)
	{
		if (*string == (char)charac)
		{
			return ((char *)string);
		}
		string++;
	}
	if ((char)charac == '\0')
	{
		return ((char *)string);
	}
	return (NULL);
}
/* 
int	main(void)
{
	const char	*str;
	char		*result;

	str = "Bart o meu lindao!";
	result = ft_strrchr(str, 'o');
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