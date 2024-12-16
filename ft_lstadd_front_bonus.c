/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:37:50 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/15 23:30:39 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((lst != NULL) || (new != NULL))
	{
		new->next = *lst;
		*lst = new;
	}
}
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new_node;
	t_list	*new_new_node;
	t_list	*lst;
	t_list	*temp;

	head = ft_lstnew("Node1");
	new_node = ft_lstnew("New Node");
	ft_lstadd_front(&head, new_node);
	new_new_node = ft_lstnew("New New Node");
	ft_lstadd_front(&head, new_new_node);
	lst = head;
	while (lst != NULL)
	{
		printf("%s -> ", (char *)(lst->content));
		lst = lst->next;
	}
	printf("NULL\n");
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
		return (0);
	}
}
 */