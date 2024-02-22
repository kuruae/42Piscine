/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:55:25 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/21 10:03:51 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	fact;

	res = nb;
	fact = 1;
	if (nb == 0)
		return (1);
	while (fact != nb)
	{
		res *= fact;
		fact++;
	}
	return (res);
}

/*
#include <stdio.h>

int main()
{
    printf("%d",ft_iterative_factorial(8));
    return 0;
}
*/
