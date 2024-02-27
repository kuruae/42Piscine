int	test(char *path)
{
	char	**buff = malloc(1 * sizeof(char *));
	char	**splitted;
	int	fd = open(path, O_RDONLY);
	int	const file_size = read_file(fd, buff);
	int	i;
	char **trimmed;

	i = 0;
	splitted = ft_split(*buff, "\n");
	while (splitted[i])
	{
		if (is_line_valid(splitted[i]) == 0)
			printf("error\n");
		else
			(trim(splitted[i], trimmed[i]));
			printf("%s\n", trimmed[i]);
		//	return (0);
		i++;
	}
	close(fd);
}


char	trim(char *str, char *str2)
{
	int i;
	int	j;
	i = 0;
	j = 0;
	while(str[i])
	{
		while (str[i])
		{
			if (str[i] != ' ' || str[i + 1] == ':' 
				|| str[i - 1] == ':')
				str2[i] = str[i];
			i++;
		}
		str2[i] = '\0';
		return (str2);
		
	}
}

// int iswhitespace(char c)
// {
// 	return ( c == ' ' || c == '\f' || c == '\n' 
// 		|| c == '\r' || c == '\t');
// }

int	is_line_valid(char *str)
{
	while(*str <= '9' && *str >= '0')
	{
		str++;	
	}
	while (*str == ' ')
		str++;
	if (*str == ':')
		str++;
	while (*str == ' ')
		str++;
	while (*str > 32 && *str < 127)
		str++;
	if (*str == '\0')
		return (1); 
	return (0);
}
