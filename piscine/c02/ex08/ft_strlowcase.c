/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:23:05 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/16 11:33:16 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
//	char	test[]="QzzzWEGPIIADLZKCNDJ22aaaAAA22";
	printf("%s\n", ft_strlowcase(argv[1]));
}
*/
