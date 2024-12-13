/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:45:32 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:31 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	str1[] = "Coding";
	const char	str2[] = "coding";
	size_t		n;
	int			result1;
	int			result2;

	n = 6;
	printf("Reimplemented function:\n");
	result1 = ft_memcmp(str1, str2, n);
	if (result1 < 0)
		printf("The 1st string is less than the second one.\n");
	else if (result1 > 0)
		printf("The 1st string is greater than the second one.\n");
	else
		printf("The strings are equal.\n");

	printf("Original function:\n");
	result2 = memcmp(str1, str2, n);
	if (result1 < 0)
		printf("The 1st string is less than the second one.\n");
	else if (result1 > 0)
		printf("The 1st string is greater than the second one.\n");
	else
		printf("The strings are equal.\n");
	return (0);
}
*/