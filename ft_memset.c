/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:38:06 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/28 21:35:24 by hpolishc         ###   ########.fr       */
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

/*#include <string.h>

int	main(void)
{
	char	str[50] = "Urduliz 42";
	char	*ptr;

	ptr = ft_memset(str, 'A', 7);
	printf("The new string is: %s\n", ptr);
	return (0);
}
*/