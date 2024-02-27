/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:30:43 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/08 18:23:42 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	hundreds;
	int	tens;	
	int	units;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &units, 1);
				if (hundreds != '7')
					write(1, ", ", 2);
				units++;
			}
			tens++;
		}
		hundreds++;
	}
}

/* 
int main() 
{
    ft_print_comb();
    return 0;
}
*/
