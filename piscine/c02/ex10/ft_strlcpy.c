/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:19:25 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/18 11:32:05 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
	{	
		len_src++;
	}
	if (i < size)
		return (len_src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*
#include <stdio.h>

int	main()
{
	char dest[20];
	char src[]="test";
	printf("%d\n", ft_strlcpy(dest, src, 2));
}
*/
