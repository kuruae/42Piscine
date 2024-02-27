/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillet <cbaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:37:43 by cbaillet          #+#    #+#             */
/*   Updated: 2024/02/24 14:39:30 by cbaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int iswhitespace(char c)
{
	return ( c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t');
}
// https://stackoverflow.com/a/122721
char *trim_space(char *str)
{
	char *end;
	while(iswhitespace((unsigned char)*str))
		str++;
	if (*str == 0)
		return str;
	end = str + ft_strlen(str) - 1;
	while(end > str && iswhitespace((unsigned char)*end))
		end--;
	end[1] = '\0';
	return str;
}

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
		return 1;
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
	int	len;
	int	colon;

	i = 0;
	len = 0;
	colon = 0;
	while (!contains(charset, word[i]) && word[i])
	{
		if (!iswhitespace(word[i]))
		{
			len++;
			if (word[i] == ':')
				colon = 1;
		}
		else 
		{
			if (colon && word[i + 1] == ' ')
				i++;
		}
		i++;
	}
	return (len);
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

	str = trim_space(str);
	splitted = malloc(number_of_words * sizeof(char *));
	j = 0;
	if (*charset)
		str = go_to_next_word(str, charset, 0);
	while (j < number_of_words)
	{
		word = malloc(count_length_of_word(str, charset) + 1);
		i = -1;
		colon = 0;
		while (++i < count_length_of_word(str, charset) + 1)
		{
			if (!iswhitespace(str[i]))
			{
				word[k++] = str[i];
				if (str[i] == ':')
					colon = 1;
			}
			else
			{
				if (colon && str[i + 1] == ' ')
					i++;
			}
		}
		word[k] = ' ';
		word[k + 1] = '\0';
		word = trim_space(word);
		splitted[j] = word;
		str = go_to_next_word(str, charset, count_length_of_word(str, charset));
		j++;
	}
	splitted[j] = 0;
	return (splitted);
}
char *ft_strjoin(int size, char **strs, char *sep) {
    // Base case: If size is  0, return an empty string
    if (size ==  0) {
        char *empty = malloc(1);
        if (empty)
            empty[0] = '\0';
        return empty;
    }

    // Recursive case: Calculate the length of the strings and separators
    int len =  0;
    if (size >  0) {
        len += strlen(strs[0]); // Length of the first string
        for (int i =  1; i < size; i++) {
            len += strlen(strs[i]); // Length of the rest of the strings
            len += strlen(sep); // Length of the separator
        }
    }

    // Allocate memory for the new string
    char *result = malloc(len +  1); // +1 for the null terminator
    if (!result)
        return NULL;

    // Concatenate the strings and separators
    char *current = result;
    for (int i =  0; i < size; i++) {
        if (i >  0) { // Add separator if not the first string
            strcat(result, sep);
            current = strchr(result, '\0'); // Move current to the end of the result
        }
        strcat(result, strs[i]); // Concatenate the string
        current = strchr(result, '\0'); // Move current to the end of the result
    }

    return result;
}