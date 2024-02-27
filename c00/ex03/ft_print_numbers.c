/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:18:04 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/08 11:00:56 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		write (1, &chiffre, 1);
		chiffre++;
	}
}
