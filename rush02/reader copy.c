/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillet <cbaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:19:41 by cbaillet          #+#    #+#             */
/*   Updated: 2024/02/24 14:43:42 by cbaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

# define CHUNK 1024

char	**ft_split(char *str, char *charset);

void	*ft_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

int read_file(int *fd, char **buf) 
{
	  int n, np, r;
	  char *b, *b2;

	  n = 0;
	  np = CHUNK;
	  b = malloc(sizeof(char)*np);
	  while ((r = read(fd, b, np)) > 0) {
		n += r;
		if (np - n < CHUNK) { 
		  np *= 2;                      // buffer is too small, the next read could overflow!
		  b2 = malloc(np*sizeof(char));
		  ft_memcpy(b2, b, n * sizeof(char));
		  free(b);
		  b = b2;
		}
	}
	*buf = b;
	return n;
}

void	test(char *path)
{
	int i = 0;
	char	**buff = malloc(1 * sizeof(char *));
	char	**splitted;
	int	fd = open(path, O_RDONLY);
	int	const file_size = read_file(fd, buff);
	splitted = ft_split(*buff, "\n");
	while (*splitted)
	{
		printf("%s\n", *splitted);
		splitted++;
	}
	close(fd);
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i]) 
		i++;
	return (i);
}

void display(char *msg)
{
	int const	size  = ft_strlen(msg);	
	write(1, msg, size);
}

int	main(int argc, char **argv)
{
	test("numbers.dict");
	return (0);
}
