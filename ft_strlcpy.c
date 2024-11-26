/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:55:55 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/26 18:14:54 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	length;

	length = 0;
	while (src[length] != '\0')
		length++;
	if (size > 0)
	{
		n = 0;
		while (n < (size - 1) && src[n] != '\0')
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	return (length);
}

/*int	main(void)
{
	char	src[] = "Up2You!";
	char	dst[10];

	printf("The length of the string: %zu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("The copied string: %s\n",dst);

	return (0);
}*/