/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:57:12 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/11 13:38:35 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporaire;

	temporaire = *a;
	*a = *a / *b;
	*b = temporaire % *b;
}

/*
int	main(void)
{	
	int	a;
	int	b;

	a = 4;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
}
*/
