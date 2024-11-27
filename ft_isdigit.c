/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:08:36 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/27 14:20:56 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <ctype.h>

int	main(void)
{
	int	c1;
	int	c2;

	c1 = 'a';
	c2 = '2';
	printf("Recomposed function:\n");
	printf("%d\n", ft_isdigit(c1));
	printf("%d\n", ft_isdigit(c2));
	printf("Original function:\n");
	printf("%d\n", isdigit(c1));
	printf("%d\n", isdigit(c2));
	return (0);
}
*/