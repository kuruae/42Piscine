/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:33:45 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/22 14:39:50 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	isprime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (isprime(nb) == FALSE)
	{
		nb++;
	}
	if (isprime(nb) == TRUE)
		return (nb);
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_find_next_prime(90));
}
*/
