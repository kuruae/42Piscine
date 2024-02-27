    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outputVerif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:17:30 by emagnani          #+#    #+#             */
/*   Updated: 2024/02/18 13:33:45 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	check_col_up(int *tab, int grid[4][4], int col)
{
	int	row;
	int	highest;
	int	count;

	row = 0;
	highest = 0;
	count = 0;
	while (row < 4)
	{
		if (grid[row][col] > highest)
		{
			highest = grid[row][col];
			count++;
		}
		row++;
	}
	if (tab[col] == count)
		return (true);
	else
		return (false);
}

int	check_col_down(int *tab, int grid[4][4], int col)
{
	int	row;
	int	highest;
	int	count;

	row = 3;
	highest = 0;
	count = 0;
	while (row >= 0)
	{
		if (grid[row][col] > highest)
		{
			highest = grid[row][col];
			count++;
		}
		row--;
	}
	if (tab[4 + col] == count)
		return (true);
	else
		return (false);
}

int	check_row_left(int *tab, int grid[4][4], int row)
{
	int	col;
	int	highest;
	int	count;

	col = 0;
	highest = 0;
	count = 0;
	while (col < 4)
	{
		if (grid[row][col] > highest)
		{
			highest = grid[row][col];
			count++;
		}
		col++;
	}
	if (tab[8 + row] == count)
		return (true);
	else
		return (false);
}

int	check_row_right(int *tab, int grid[4][4], int row)
{
	int	col;
	int	highest;
	int	count;

	col = 3;
	highest = 0;
	count = 0;
	while (col >= 0)
	{
		if (grid[row][col] > highest)
		{
			highest = grid[row][col];
			count++;
		}
		col--;
	}
	if (tab[12 + row] == count)
		return (true);
	else
		return (false);
}

int	check_if_output_is_valid(int *tab, int grid[4][4])
{
	int	i;

	i = 0;
    //printf("Enter check if output is valid");
	while (i < 16)
	{
		if (i < 4)
		{
			if (!check_col_up(tab, grid, i))
            {
               //printf("Error in col up");
                return (false);
            }
		}
		else if (i < 8)
		{
			if (!check_col_down(tab, grid, i - 4))
			{
                //printf("Error in col up");
                return (false);
            }
		}
		else if (i < 12)
		{
			if (!check_row_left(tab, grid, i - 8))
				{
                //printf("Error in col up");
                return (false);
            }
		}
		else if (i < 16)
		{
			if (!check_row_right(tab, grid, i - 12))
			{
               // printf("Error in col up");
                return (false);
            }
		}
		i++;
	}
	printf("\nOutput valid \n");
	return (true);
}
// int main()
// {
//     int	grid[4][4] = {{1, 0, 2, 3},
//                       {2, 4, 3, 0},
//                       {0, 0, 0, 0},
//                       {0, 0, 0, 0}};

//     int tab2[16] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};

//     check_if_output_is_valid(tab2, grid);

//     return 0;
// }
