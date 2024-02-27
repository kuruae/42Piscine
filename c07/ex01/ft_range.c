/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:57:29 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/26 17:46:39 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	if (min >= max)
		return (0);
	*tab = 0;
	while (min < max)
	{
		tab[i] = min;
		printf("%d", tab[i]);
		i++;
		min++;
	}
	return (tab);
}
/*
int	main()
{
	ft_range(10, 20);
	return 0;
}
*/
