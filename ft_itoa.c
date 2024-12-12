/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:11:56 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/12 17:36:19 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	*ft_itoa(int n)

#include <stdio.h>

void	ft_loop(int n)
{
	int count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
		printf("%d\n", n);
	}
	printf("count %d\n", count);
}

int	main(void)
{
	int	i;
	
	i = -62690;
	
	ft_loop(i);

	return(0);
}