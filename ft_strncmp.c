/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:15:22 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:46:25 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str1 = "Born2Code";
	const char	*str2 = "Born2Cook";
	size_t		n;
	int			result1;
	int			result2;

	n = 8;
	printf("Reimplemented function:\n");
	result1 = ft_strncmp(str1, str2, n);
	if (result1 == 0)
		printf("The first %zu characters are equal.\n", n);
	else if (result1 < 0)
		printf("'%s' is lexicographically less than '%s'. \n", str1, str2);
	else
		printf("'%s' is lexicographically more than '%s'. \n", str1, str2);

	printf("Original function:\n");
	result2 = strncmp(str1, str2, n);
	if (result2 == 0)
		printf("The first %zu characters are equal.\n", n);
	else if (result2 < 0)
		printf("'%s' is lexicographically less than '%s'. \n", str1, str2);
	else
		printf("'%s' is lexicographically more than '%s'. \n", str1, str2);
}
*/