/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasablon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:16:05 by lasablon          #+#    #+#             */
/*   Updated: 2024/02/17 10:16:07 by lasablon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	rush01(char *str);
void	print_error(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_error("Error\n");
		return (0);
	}
	else
		rush01(argv[1]);
	return (0);
}
