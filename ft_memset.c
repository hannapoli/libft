/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:38:06 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/04 11:27:21 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
#include <string.h>

int	main(void)
{
	char	str[50] = "Urduliz 42";
	char	*ptr;

	printf("Reimplemented function:\n");
	ptr = ft_memset(str, 'A', 7);
	printf("The new string is: %s\n", ptr);

	printf("Original function:\n");
	ptr = memset (str, 'A', 7);
	printf("The new string is: %s\n", ptr);
	return (0);
}
*/