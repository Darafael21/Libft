/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:00:41 by darafael          #+#    #+#             */
/*   Updated: 2025/04/17 17:19:29 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*new;

	new = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
/*#include <stdio.h>

char example_function(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return ('*');
	return (c);
}

int	main(void)
{
	char *ori = "DavidDias21";
	char *map = ft_strmapi(ori, example_function);
	if (!map)
	{
		printf("failed.\n");
		return (1);
	}
	printf("%s\n", ori);
	printf("%s\n", map);
	return (0);
}*/