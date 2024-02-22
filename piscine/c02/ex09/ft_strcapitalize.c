/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:36:33 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/15 18:26:35 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alpha(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
			return (0);
		else
			return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			if (is_alpha(str[i - 1]) == 0)
				i++;
			else
			{
				str[i] -= 32;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (is_alpha(str[i - 1]) == 0)
			{
				str[i] += 32;
			}	
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	test[]="as ? 42Mmots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(test));
}
*/
