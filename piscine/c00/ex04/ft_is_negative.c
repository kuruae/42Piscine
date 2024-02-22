/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:18:36 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/08 11:50:27 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positif;
	char	negative;

	positif = 'P';
	negative = 'N';
	if (n >= 0)
	{
		write(1, &positif, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
