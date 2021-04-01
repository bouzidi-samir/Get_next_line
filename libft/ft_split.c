




#include "libft.h"
#include "stdio.h"
#include "stdlib.h"

char	**ft_memory(char const *s, char c)
{
	int i;
	int o;
	char	**str;

	i = 0;
	o = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			o++;
		}
		i++;
	}
	str = (char**)malloc(sizeof(s) * (o + 2));
	if (!str)
		return (NULL);
	else
		return (str);	
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char 	**ret;
	
	i = 0;
	j = 0;
	k = 0;
	ret = ft_memory(s, c);	
	if (!ret)
		return (NULL);
	ret = NULL;
	while (s[i])
	{	
		while (s[i] != c)
		{
			ret[j][k] = s[i];	
			i++;
			k++;
		}	
		ret[j][k] = '\0';
		k = 0;
		j++;		

	}
return (ret);
	
}

