/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:49:49 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/21 18:20:02 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0 
#define TRUE 1

int	ft_is_prime(int nb)
{
	int	div;

	div = 3;
	if (nb <= 1)
		return (FALSE);
	if (nb == 2)
		return (TRUE);
	if ((nb % 2) == 0)
		return (FALSE);
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (FALSE);
		div += 2;
	}
	return (TRUE);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(73));
}
*/
