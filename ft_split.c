char	*ft_mkword(char const *s, int start, int end)
{
	char	*word;
	int	i;
	
	word = (char *)malloc((end - start) *sizeof(int));
	if (word == 0)
		return(NULL);
	while (start < end)
	{
		word[i] = s[start];
		start ++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j ++;
		}
		i ++;
	}
	i = 0;
	j = 0;
	start = 0;
	res = (char **)malloc((j + 1) * sizeof(char));
	while (s[i])
	{
		if (s[i] == c)
		{
			res[j] = *ft_mkword(s, start, i);
			if (res[j] == NULL)
				return (NULL);
			j ++;
			start = i + 1;
		}
	}
	return (res);
}



//#include <unistd.h>
//
//void	ft_putstr(char *str)
//{
//	int	i;
//
//	i = 0 ;
//	while (str[i] != '\0')
//	{
//		write(1, &str[i], 1);
//		i ++;
//	}
//}
//
//int	main(char **av, int ac)
//{
//	char	**words;
//
//	while (*av[1] && ac)
//	{
//		words = **ft_split;
//
//	}
//}
