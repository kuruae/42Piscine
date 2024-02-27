/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillet <cbaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:19:41 by cbaillet          #+#    #+#             */
/*   Updated: 2024/02/25 20:39:58 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#define CHUNK 1024

void	read_number(char *line, char **dict);
int		ft_strlen(char *str);
char	**ft_split(char *str, char *charset);c0

void	ft_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

int	read_file(int fd, char **buf)
{
	int		n;
	int		np;
	int		r;
	char	*b;
	char	*b2;

	n = 0;
	np = CHUNK;
	b = malloc(sizeof (char) * np);
	r = read(fd, b, np);
	while (r > 0)
	{
		n += r;
		if (np - n < CHUNK)
		{
			np *= 2;
			b2 = malloc(np * sizeof(char));
			ft_memcpy(b2, b, n * sizeof(char));
			free(b);
			b = b2;
		}
		r = read(fd, b, np);
	}
	*buf = b;
	return (n);
}

void	rush02(char *path)
{
	char	**buff;
	char	**splitted;
	int		fd;
	int		i;
	int		file_size;

	fd = open(path, O_RDONLY);
	buff = malloc(1 * sizeof(char *));
	file_size = read_file(fd, buff);
	i = 0;
	splitted = ft_split(*buff, "\n");
	read_number("234", splitted);
	close(fd);
	free(buff);
	free(splitted);
}

int	is_line_valid(char *str)
{
	while (*str <= '9' && *str >= '0')
		str++;
	while (*str == ' ')
		str++;
	if (*str == ':')
		str++;
	while (*str == ' ')
		str++;
	while (*str < ' ' && *str != 127)
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}

void	display(char *msg)
{
	int const	size = ft_strlen(msg);

	write(1, msg, size);
}
