#include "main.h"

int     check_if_output_is_valid(int *tab, int grid[4][4]);
void	print_grid(int grid[4][4]);
void	print_error(char *str);

int is_absent(int num, int grid[4][4],int row, int col)
{
    int i;

    i = 0;
    while(i < 4)
    {
        if (num == grid[i][col])
            return (false);
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if (num == grid[row][i])
            return (false);
        i++;
    }
    return (true);
}


int    ft_populate_grid(int *tab, int grid[4][4], int coordinates, int num)
{
	int col;
	int row;

	col = coordinates % 4;
	row = coordinates / 4;
    print_grid(grid);

	if (check_if_output_is_valid(tab,grid))
	{
		print_grid(grid);
		return (true);
	}
	while(num <= 4 )
	{
        if (col > 3)
		{
			row++;
			col = 0;
		}
		if (is_absent(num, grid, row, col))
		{
			grid[row][col] = num;
            num++;
			if (ft_populate_grid(tab, grid, coordinates + 1, num))
				return true;
        }
		if (num > 4)
			num = 1;
		col++; 
	}
    grid[row][col] = 0;
    //print_error("Error\n");
	return (false);
}
		

