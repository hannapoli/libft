/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:51:42 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/03 13:56:37 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dest2;
	size_t				i;

	src2 = src;
	dest2 = dest;
	i = 0;
	if (src == NULL || dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

/*#include <string.h>

int	main(void)
{
	char	src[] = "Urduliz 42";
	char	dest[20];

	ft_memcpy(dest, src, 7);
	dest[7] = '\0';
	printf("Reimplemented function:\n");
	printf("The copied string: %s\n", dest);
	memcpy(dest, src, 7);
	dest[7] = '\0';
	printf("Original function:\n");
	printf("The copied string: %s\n", dest);
	return (0);
}
*/