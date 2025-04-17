/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:42:31 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:49:15 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}
/*#include <stdio.h>

int	main(void)
{
	t_list *n1 = ft_lstnew("David");
	t_list *n2 = ft_lstnew("Rafael");
	t_list *n3 = ft_lstnew("Barreto");
	t_list *n4 = ft_lstnew("Dias");
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	t_list *last = ft_lstlast(n1);
	if (last)
		printf("%s\n", (char *)last->content);
	return (0);
}*/
