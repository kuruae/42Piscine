/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:37:25 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/21 13:24:13 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[]="asf";
	char s2[]="";
	printf("%d\n", ft_strncmp(s1, s2, 7));
	if (ft_strncmp(s1, s2, 3) == strncmp(s1, s2, 3))
		printf("ok\n");
	else
		printf("error\n");
}
*/
