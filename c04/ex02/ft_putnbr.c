/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:41:15 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/21 08:46:29 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	// if (nb == -2147483648)
	// {
	// 	ft_putchar('-');
	// 	ft_putchar('2');
	// 	nb = 147483648;
	// }
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr (n / 10);
		ft_putchar (n % 10 + '0');
	}
	else
		ft_putchar (n + '0');
}
/*
int	main()
{
	ft_putnbr(-412309842);
}
*/
