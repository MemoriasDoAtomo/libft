/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:59:27 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/15 17:15:02 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *str)
{
    size_t index;
    int negative;
    int result;

    index = 0;
    negative = 1;
    result = 0;

    while (str[index] == 32 || str[index] >= 9 && str[index] <= 13)
    {
        index++;
    }

    while(str[index] == 43 || str[index] == 45)
    {
            if (str[index] == 45)
            {
                negative *= -1;
            }
            index++;
    }

    while (str[index] >= '0' && str[index] <= '9')
    {
        result = result * 10 + (str[index] - '0');
        index++;
    }

    return (result * negative);
}