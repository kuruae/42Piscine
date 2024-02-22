/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:46:36 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/09 13:33:39 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = 0;
	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int a;
	int b;
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("A = %d\nB = %d\n", a, b);
	return (0);
	
}
*/
