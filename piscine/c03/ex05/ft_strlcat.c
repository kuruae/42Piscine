/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:32:33 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/21 13:59:55 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c != '\0')
	{
		c++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && len_d + i + 1 < size)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	if (size <= len_d)
		return (len_s + size);
	return (len_d + len_s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[]="efwag";
	char b[]="qwefj";
	ft_strlcat(a, b, 7);
	printf("%s", a);
}
*/
