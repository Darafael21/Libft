/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:02:55 by darafael          #+#    #+#             */
/*   Updated: 2025/04/16 19:37:24 by darafael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*pre_conv(int len)
{
	char	*temp;

	temp = malloc((len + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	temp[0] = '0';
	return (temp);
}

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = pre_conv(len);
	if (!result)
		return (NULL);
	i = len - 1;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr != 0)
	{
		result[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int main(void)
{
	int i = 0;
	int test_values[] = {0, 1, -1, 42, -42, 123456, -123456, 2147483647, -2147483648};
	int count = sizeof(test_values) / sizeof(test_values[0]);

	while (i < count)
	{
		char *result = ft_itoa(test_values[i]);
		if (result)
		{
			printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
			free(result);
		}
		else
		{
			printf("ft_itoa(%d) = NULL (allocation failed)\n", test_values[i]);
		}
		i++;
	}

	return 0;
}*/
