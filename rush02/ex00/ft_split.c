/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillet <cbaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:37:43 by cbaillet          #+#    #+#             */
/*   Updated: 2024/02/25 19:47:21 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int	contains(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	new_word;
	int	number_of_words;
	int	is_contained;

	if (!*charset)
		return (1);
	new_word = true;
	number_of_words = 0;
	i = 0;
	while (str[i])
	{
		is_contained = contains(charset, str[i]);
		if (new_word && !is_contained)
		{
			number_of_words++;
			new_word = false;
		}
		else if (!new_word && is_contained)
			new_word = true;
		i++;
	}
	return (number_of_words);
}

int	count_length_of_word(char *word, char *charset)
{
	int	i;

	i = 0;
	while (!contains(charset, word[i]) && word[i])
		i++;
	return (i);
}

char	*go_to_next_word(char *str, char *charset, int length_of_word)
{
	str += length_of_word;
	while (contains(charset, *str) && *str)
		str++;
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char		**splitted;
	int const	number_of_words = count_words(str, charset);
	int			i;
	int			j;
	char		*word;

	splitted = malloc(number_of_words * sizeof(char *));
	j = 0;
	if (*charset)
		str = go_to_next_word(str, charset, 0);
	while (j < number_of_words)
	{
		word = malloc(count_length_of_word(str, charset));
		i = -1;
		while (++i < count_length_of_word(str, charset))
			word[i] = str[i];
		word[i] = '\0';
		splitted[j] = word;
		str = go_to_next_word(str, charset, count_length_of_word(str, charset));
		j++;
	}
	splitted[j] = 0;
	return (splitted);
}
