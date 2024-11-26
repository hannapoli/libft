/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:46:20 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/26 18:45:25 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# include <string.h>
# include <stdio.h>
//# include <stdlib.h>
//# include <unistd.h>

# define LIBFT_H

int	ft_isalpha(int c)
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

#endif
