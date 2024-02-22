/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:30:35 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/22 14:40:22 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (nb);
	while (res < 46341)
	{
		if (res == nb)
			return (i);
	i++;
	res = i * i;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    int number = 2147483647; //nsm les maths c chiant

    int result = ft_sqrt(number);
    printf("Square root of %d is %d\n", number, result);

    return 0;
}
*/
