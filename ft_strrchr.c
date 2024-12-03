/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:05:38 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/03 09:40:43 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	size_t	i;
	char	character;

	i = 0;
	character = c;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i - 1] == character)
			return ((char *)(s + i - 1));
		i--;
	}
	if (s[i] == character)
		return ((char *)(s + i));
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	const char	*str = "Born2Code";
	char		c;
	char		*result;
	char		*result2;
	
	c = 'o';
	result = ft_strrchr (str, c);
	printf("Reimplemented function:\n");
	if (result != NULL)
		printf("The last position of '%c' is %ld. \n", c, result - str);
	else
		printf("There is no '%c' character in this string.\n", c);
	result2 = strrchr (str, c);
	printf("Original function:\n");
	if (result2 != NULL)
		printf("The last position of '%c' is %ld. \n", c, result2 - str);
	else
		printf("There is no '%c' character in this string.\n", c);
	return (0);
}
*/