/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:20:10 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/27 14:18:40 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*#include <ctype.h>

int	main(void)
{
	int	c1;
	int	c2;

	c1 = 'Z';
	c2 = 'u';
	printf("Recomposed function:\n");
	printf("%d\n", ft_tolower(c1));
	printf("%d\n", ft_tolower(c2));
	printf("Original function:\n");
	printf("%d\n", tolower(c1));
	printf("%d\n", tolower(c2));
}
*/