/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:35:16 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/29 15:22:56 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	rev_len(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	while (str[i-1] == 32 || str[i-1] == 9)
		i--;
	while (i != 0)
	{
		if (str[i-1] == 32 || str[i-1] == 9)
			return i;
		i--;
	}
	return i;
}

char last_word(char *str)
{
	int	i;

	i = rev_len(str);
	while (str[i] && str[i] != 32 && str[i] != 9)
	{
		write (1, &str[i], 1);
		i++;
	}
	return 0;
}

int	main()
{
	last_word(" etst 	tets  tets wrug erg-tth+erg-wjk 	test4 ");
	return 0;
}
