/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: memmove.c
                      Created: 2024-05-24, 22:10:34 |
                      Updated: 2024-05-24, 22:55:21 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>
#include<string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *destination;
    const unsigned char *source;
    size_t              i;
    
    destination = (unsigned char *) dest;
    source = (const void *) src;
    i = 0;

    if (destination == 0 && source == 0)
        return (NULL);
    while (i < n)
    {
        destination [i] = source[i];
        i++;
    }
    return (dest);
}

int	main(void)
{
	int	src[10] = {1,2,3,4,5,6,7,8,9,10};
	int dest1 [10];
	int	dest2 [10];
	int i = 0;

	memmove(dest1, src, sizeof(int) * 10);
	ft_memmove(dest2, src, sizeof(int) * 10);
	printf(" Resultat Vraie fonction:\n");
	while (i < 10)
	{
		printf(" dest[%d] contient : %d \n", i, dest1[i]);
		i++;
	}
	printf(" Resultat Ma fonction:\n");
	i = 0;
	while (i < 10)
	{
		printf(" dest[%d] contient : %d \n", i, dest2[i]);
		i++;
	}
	return (0);
}