/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:23:59 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/04 15:50:19 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && ((i + j) < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	const char	big[] = "Forest";
	const char	little[] = "rest";
	size_t		length;
	char		*result1;
	char		*result2;

	length = 5;
	printf("Reimplemented function:\n");
	result1 = ft_strnstr(big, little, length);
	if (result1)
		printf("Found substring: \"%s\"\n", result1);
	else
		printf("Substring not found within the given length.\n");
#if defined__APPLE__ || defined__BSD_VISIBLE || defined_GNU_SOURCE

	printf("Original function:\n");
	result2 = strnstr(big, little, length);
	if (result2)
		printf("Found substring: \"%s\"\n", result2);
	else
		printf("Substring not found within the given length.\n");
	#else

	printf("The original strnstr is not available on this system.\n");
#endif

	return (0);
}
*/