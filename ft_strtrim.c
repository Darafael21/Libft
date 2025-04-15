/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:28:08 by darafael          #+#    #+#             */
/*   Updated: 2025/04/15 15:20:25 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	s;
	size_t	e;
	size_t	i;
	


	while (s1[s] == set[i])
	{
		if (s1[s] == set[i])
		{
			i++;
		}
		s++;
	}
	e = ft_strlen(s1);
	
	while (s1[e] == set[i])
	{
		if (s1[e] == set[i])
		{
			i++;
		}
		--e;
	}

	join = malloc( + 1) * sizeof(char));
	
}