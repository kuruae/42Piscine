/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:30:35 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/25 15:17:59 by emagnani         ###   ########.fr       */
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
	if (nb > 46340 * 46340)
		return (0);
	while (res <= nb)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    int number = 25; //nsm les maths c chiant

    int result = ft_sqrt(number);
    printf("Square root of %d is %d\n", number, result);

    return 0;
}
*/
