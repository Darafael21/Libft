/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:40:20 by darafael          #+#    #+#             */
/*   Updated: 2025/04/11 13:43:28 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	while (dst[i])
		i++;
	dstlen = i;
	i = 0;
	while (src[i])
		i++;
	srclen = i;
	i = 0;
	if (len <= dstlen)
		return (len + srclen);
	while (src[i] && (dstlen + i < len - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*#include <stdio.h>

int	main()
{
	char src[]="Dias";
	char dst[20]="David ";
	size_t	len;
	
	len = ft_strlcat(dst, src, sizeof(dst));
	printf("%s", dst);
	return (0);
}*/