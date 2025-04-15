/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:55:02 by darafael          #+#    #+#             */
/*   Updated: 2025/04/15 13:44:18 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(count * size);
	if (temp == NULL)
		return (NULL);
	while (i < count * size)
		temp[i++] = 0;
	return (temp);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t	i;
	int *arr;
	size_t n = 5;
	i = 0;
	arr = ft_calloc(0 , n);
	if (!arr)
	{
		printf("Failed\n");
		return (1);
	}
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);
	return (0);
}*/