
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;
	size_t				i;

	if (dest == 0 || src == 0)
		return (0);
	pdst = dest;
	psrc = src;
	if (dest != src && n != 0)
	{
		i = 0;
		if (psrc < pdst)
		{
			while (i++ < n)
			pdst[n - i - 1] = psrc[n - i - 1];
		}
		else
		{
			while (i++ < n)
				pdst[i] = psrc[i];
		}
	}
	return ((void *)pdst);
}
