/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:47:25 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/10 18:44:36 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != NULL)
	{
		//siimplify *s
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}
static char	*copy_word(const char *s, size_t len)
{
	char	*word;
	
	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

static void	free_result(char **result, sze_t i)
{
	while (i--)
		free(result[i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char*));
	if (result == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while(s[len] && (s[len != c]))
			len++;
		if (len > 0)
		{
			result[i] = copy_word(s, len);
			if (result[i] == NULL)
			{
				free_result(result, i);
				return (NULL);
			}
			i++;
			s += len;
		}
	}
	result[i] = NULL;
	return (result);
}

int	main(void)
{
	char	**final_split;
	size_t	i;

	i = 0;
	final_split = ft_split("This split melts my brain.", ' ');
	if (final_split == NULL)
	{
		print_f("Memory allocation failed. \n");
		return (NULL);
	}
	while (final_split[i])
	{
		printf("Word %zu: %s\n", i + 1, final_split[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(final_split[i]);
		i++;
	}
	free (final_split);
	return(0);
}