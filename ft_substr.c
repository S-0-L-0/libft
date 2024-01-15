#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*strres;
	unsigned int	end;
	int		i;

	end = start + len;
	strres = (char *) malloc((len + 1) * sizeof(char));
	i = 0;
	if (strres == 0)
		return (NULL);
	while (start < end)
	{
		strres[i] = s[start];
		start ++;
		i ++;
	}
	strres[i] = '\0';
	return (strres);
}

//int main(int ac, char **av)
//{
//	if (ac)
//	{
//		printf("%s\n", av[1]);
//		printf("%s", ft_substr(av[1], 24, 7));
//	}
//	free (strres);
//	return (0);
//}
