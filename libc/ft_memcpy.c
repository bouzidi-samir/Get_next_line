
#include "libft.h"


void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char *str;
	unsigned char *str2;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);	
	str = (unsigned char*)src;
	str2 = (unsigned char*)dest;
	i = 0;
	while (n > 0)
	{
		str2[n] = str[n];
		n--;
	}
	
return(dest);
}
