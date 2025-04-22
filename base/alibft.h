/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alibft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:57:57 by dcaires-          #+#    #+#             */
/*   Updated: 2025/04/22 17:05:06 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALIBFT_H
# define ALIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int	ft_isdigit(int c);
int	ft_isalpha(int c);
void ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t size);
size_t	ft_strlen(const char *string);


#endif