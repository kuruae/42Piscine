/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasablon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:23:35 by lasablon          #+#    #+#             */
/*   Updated: 2024/02/18 12:01:11 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	check_if_output_is_valid(int *tab, int grid[4][4]);
int		check_col_up(int *tab, int grid[4][4], int col);
int		check_col_down(int *tab, int grid[4][4], int col);
int		check_row_left(int *tab, int grid[4][4], int row);
int		check_row_right(int *tab, int grid[4][4], int row);
void	print_error(char *str);
int    ft_populate_grid(int *tab, int grid[4][4], int coordinates, int num);

int	*ft_transform_input_to_tab(char *str, int *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
   // printf("Enter input to tab");
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = str[i] - '0';
            //printf("%d ,", tab[j]);
			j++;
		}
		i++;
	}
	return (tab);
}

int	ft_count_input(char *str)
{
	int	i;
	int	j;
	int	is_valid;

	i = 0;
	j = 0;
	is_valid = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4' && (str[i + 1] == ' '
			|| str[i + 1] == '\0'))
		{
			j++;
			is_valid = true;
		}
		else if (str[i] == ' ')
		{
			if (is_valid == false)
			{
				print_error("Error\n");
				return (false);
			}
			is_valid = false;
		}
		else
		{
            printf("Input is not valid");
			//print_error("Error\n");
			return (false);
		}
		i++;
	}
	if (j == 16 && is_valid == true)
	{
    printf("Good number of arguments !\n");
		return (true);
	}
	else
	{
		printf("Wrong number of arguments !\n");
		//print_error("Error\n");
		return (false);
	}
}

int	ft_check_input(char *str)
{
	if (ft_count_input (str) == false)
		return (false);
	else
		return (true);
}

int	rush01(char *str)
{
	int	tab[16];
	int	grid[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0}, {0, 0, 0, 0},{0, 0, 0, 0}};
	if (ft_check_input(str) == false)
    {
        printf("Input is false");
		return false;
    }
	else
	{
        printf("Input is true \n");
		ft_transform_input_to_tab(str, tab);
        ft_populate_grid(tab, grid, 0, 1);
	}
    return (true);
}
