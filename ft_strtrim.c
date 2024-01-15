#include <stdlib.h>
#include <stdio.h>

int	ft_len(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	int	len_str;
	int	i;

	len_str = (ft_len(s1) - (ft_len(set) * 2)) + 1;
	trimstr = (char *) malloc(len_str * sizeof(char));

}
