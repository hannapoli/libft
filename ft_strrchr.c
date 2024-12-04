/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:05:38 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/04 11:27:44 by hpolishc         ###   ########.fr       */
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
	char		*result1;
	char		*result2;
	
	c = 'o';
	printf("Reimplemented function:\n");
	result1 = ft_strrchr (str, c);
	if (result1 != NULL)
		printf("The last position of '%c' is %ld. \n", c, result1 - str);
	else
		printf("There is no '%c' character in this string.\n", c);

	printf("Original function:\n");
	result2 = strrchr (str, c);
	if (result2 != NULL)
		printf("The last position of '%c' is %ld. \n", c, result2 - str);
	else
		printf("There is no '%c' character in this string.\n", c);
	return (0);
}
*/