
#include "libft.h"

void	ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char cc;
	unsigned char *dest;
	unsigned char *sour;
	size_t i;

	cc = (unsigned char)c;
	dest = (unsigned char*) dst;
	sour = (unsigned char*) src;
	i = 0;
	while (i < n)
	{
		dest[i] = sour[i];
		if (sour[i] == cc)
			return (dst + i + 1);
		i++;
	}

return (0);
}
