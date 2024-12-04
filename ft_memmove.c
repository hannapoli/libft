/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:29:52 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/04 11:27:18 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dest2;
	size_t				i;

	src2 = src;
	dest2 = dest;
	if (src == NULL || dest == NULL)
		return (NULL);
	if (dest2 < src2 || dest2 >= (src2 + n))
	{
		i = 0;
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			dest2[i - 1] = src2[i - 1];
	}
	return (dest);
}
/*#include <string.h>

int	main(void)
{
	char	src[] = "Urduliz 42";
	char	dest[50];

	printf("Reimplemented function:\n");
	ft_memmove(dest, src, 7);
	printf("The copied string: %s\n", dest);

	printf("Original function:\n");
	memmove(dest, src, 7);
	printf("The copied string: %s\n", dest);
	return (0);
}
*/