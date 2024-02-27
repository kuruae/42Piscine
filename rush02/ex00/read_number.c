/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillet <cbaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:42:18 by cbaillet          #+#    #+#             */
/*   Updated: 2024/02/25 20:39:16 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	rush02(char *path);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		count_number(char *line);
char	*ft_strcat(char *dest, char *src);

char	*find_value_by_key(char **dict, char *key)
{
	int	i;
	int	j;
	int	key_size;

	i = 0;
	key_size = ft_strlen(key);
	while (ft_strncmp(dict[i], key, key_size) != 0)
		i++;
	if (!dict[i])
		return (NULL);
	j = 0;
	while (dict[i][j] != ':')
		j++;
	j++;
	return (&dict[i][j]);
}

void	in_loop(char *key, int i, char **dict, char *number)
{
	int		modulo;
	int		j;
	int		len;
	char	*value;

	len = count_number(number);
	j = 0;
	modulo = (len - i) % 3;
	*key = number[i];
	if (modulo == 0)
	{
		value = ft_strcat(find_value_by_key(dict, key), " ");
		value = ft_strcat(value, find_value_by_key(dict, "100"));
	}
	if (modulo == 1)
	{
		value = find_value_by_key(dict, key);
	}
	if (modulo == 2)
	{
		key = ft_strcat(key, "0");
		value = find_value_by_key(dict, key);
	}
	ft_putstr(value);
}

void	read_number(char *number, char **dict)
{
	int const	number_len = count_number(number);
	int			i;
	int			modulo;
	char		*value;
	char		*key;

	key = malloc(3);
	i = 0;
	while (i < number_len)
	{
		in_loop(key, i, dict, number);
		i++;
	}
}

int	main(void)
{
	rush02("numbers.dict");
	return (0);
}
