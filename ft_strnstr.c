/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:50:02 by darafael          #+#    #+#             */
/*   Updated: 2025/04/15 13:41:57 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *pool, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[i] == '\0')
		return ((char *)pool);
	while (pool[i] && i < len)
	{
		j = 0;
		while ((pool[i + j] == find[j]) && (i + j < len))
		{
			j++;
		}
		if (find[j] == '\0')
			return ((char *)pool + i);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main()
{
	char *pool = "When Mary Lennox was sent to Misselthwaite Manor";
	char *find1 = "Mary";
	char *find2 = "sent ";
	char *find3 = "ola";
	char *find4 = "senti";
	char *find5 = "";
	size_t len = 100;

	printf("\n");
	printf("%s\n", ft_strnstr(pool, find1, len));
	printf("%s\n", ft_strnstr(pool, find2, len));
	printf("%s\n", ft_strnstr(pool, find3, len));
	printf("%s\n", ft_strnstr(pool, find4, len));
	printf("%s\n", ft_strnstr(pool, find5, len));

	return 0;
}*/