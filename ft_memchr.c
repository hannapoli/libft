/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:45:44 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/04 11:26:58 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	int		c;
	size_t	n;
	char	str [] = "Urduliz 42";
	char	*result1;
	char	*result2;

	c = 'z';
	n = 10;
	printf("Reimplemented function:\n");
	result1 = ft_memchr(str, c, n);
	if (result1 != NULL)
		printf("Found '%c' at position %ld.\n", c, result1 - str);
	else
		printf("'%c' not found in the first %zu bytes.\n", c, n);

	printf("Original function:\n");
	result2 = memchr(str, c, n);
	if (result2 != NULL)
		printf("Found '%c' at position %ld.\n", c, result2 - str);
	else
		printf("'%c' not found in the first %zu bytes.\n", c, n);
	return (0);
}
*/