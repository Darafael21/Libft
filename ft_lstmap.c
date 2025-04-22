/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:35:18 by darafael          #+#    #+#             */
/*   Updated: 2025/04/22 17:50:41 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newcont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		newcont = ft_lstnew(f(lst->content));
		if (newcont == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newcont);
		lst = lst->next;
	}
	return (newlist);
}
/*#include <stdio.h>

void	del(void *content)
{
	printf("%s\n", (char *)content);
	free(content);
}

void	*f(void *content)
{
	char **ptr = (char **)&content;
	free(*ptr);
	*ptr = strdup("Funciona");
}

int	main(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew(strdup("First"));
	t_list *node2 = ft_lstnew(strdup("Second"));
	t_list *node3 = ft_lstnew(strdup("Third"));
	t_list *node4 = ft_lstnew(strdup("Fourth"));
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	ft_lstadd_back(&list, node4);
	ft_lstmap(node3, f, del);
//	printf("%s\n", (char *)node3->content);
	return (0);
}*/