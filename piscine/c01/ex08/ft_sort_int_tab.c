/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:49:43 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/12 14:30:36 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (i < size - 1)
	{	
		if (tab[j] < tab[i])
		{
			ft_swap(&tab[i], &tab[j]);
			i = 0;
			j = i +1;
		}
		else
		{
			i++;
			j++;
		}
	}
}

/*
int		main(void)
{
	int i;
	i = 0;

	int tab[11] = {0,26,2,3,-34,5,22,89,8,-2,4};

	ft_sort_int_tab(tab, 11);
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
