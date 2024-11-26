/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:12:58 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/26 17:30:03 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

/*int	main(void)
{
	char	*test_string = "Up2You!";

	printf("%zu\n", ft_strlen(test_string));

	return 0;
}*/
