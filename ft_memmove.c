/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:00:49 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:15:22 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tempsrc;
	unsigned char	*tempdest;

	if (src == NULL && dest == NULL)
		return (NULL);
	tempsrc = (unsigned char *) src;
	tempdest = (unsigned char *) dest;
	i = 0;
	if (tempdest < tempsrc)
	{
		while (i < len)
		{
			tempdest[i] = tempsrc[i];
			i++;
		}
	}
	else
	{
		while (0 < len--)
		{
			tempdest[len] = tempsrc[len];
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "1234567890";
	printf("Before: %s\n", str);
	ft_memmove(str + 2, str, 5);
	printf("After : %s\n", str);
	return (0);
}*/
