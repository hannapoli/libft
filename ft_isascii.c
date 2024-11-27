/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:34:49 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/27 14:23:34 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>

int	main(void)
{
	int	c1;
	int	c2;

	c1 = '&';
	c2 = '	';
	printf("Recomposed function:\n");
	printf("%d\n", ft_isascii(c1));
	printf("%d\n", ft_isascii(c2));
	printf("Original function:\n");
	printf("%d\n", isascii(c1));
	printf("%d\n", isascii(c2));
	return (0);
}
*/