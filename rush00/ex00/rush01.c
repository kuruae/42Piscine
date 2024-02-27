/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:27:21 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/10 18:27:53 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printline(char start, char middle, char end, int width)
{
	int	letter_count;

	letter_count = 1;
	while (letter_count <= width)
	{
		if (letter_count == 1)
		{
			ft_putchar(start);
		}
		else if (letter_count == width)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		letter_count++;
	}
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	int	line_count;

	line_count = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_count <= y)
		{
			if (line_count == 1)
			{
				ft_printline('/', '*', '\\', x);
			}
			else if (line_count == y)
			{
				ft_printline('\\', '*', '/', x);
			}
			else
			{
				ft_printline('*', ' ', '*', x);
			}
			line_count++;
		}
	}
}
