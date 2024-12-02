/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:13:18 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/02 18:54:02 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	character;

	i = 0;
	character = c;
	while (s[i] != '\0')
	{
		if (s[i] == character)
			return ((char *)(s + i));
		i++;
	}
	if (character == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*#include <string.h>

int	main(void)
{
	const char	*str = "Born2Code";
	char		c;
	char		*result;
	char		*result2;
	
	c = 'o';
	result = ft_strchr (str, c);
	printf("Reimplemented function:\n");
	if (result != NULL)
		printf("'%c' is at the position %ld. \n", c, result - str);
	else
		printf("There is no '%c' character in this string.\n", c);
	result2 = strchr (str, c);
	printf("Original function:\n");
	if (result2 != NULL)
		printf("'%c' is at the position %ld. \n", c, result2 - str);
	else
		printf("There is no '%c' character in this string.\n", c);
	return (0);
}
*/