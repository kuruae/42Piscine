/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:07:52 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/11 10:54:23 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int a = 15;
	int b = 7;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
	
	return (0);
}
*/
