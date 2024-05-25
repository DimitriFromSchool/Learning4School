/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: memmove.c
                      Created: 2024-05-24, 22:10:34 |
                      Updated: 2024-05-25, 20:49:14 | 
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
    if (destination > source)
    {
        while (n > 0)
            {
                n --;
                destination[n] = source[n];
            }
    }
    else
    {
        while (i < n)
        {
            destination [i] = source[i];
            i++;
        }
    }
    return (dest);
    
}

int	main(void)
{
    // test tableau de int :
    
	int	src[10] = {1,2,3,4,5,6,7,8,9,10};
	int dest1 [12];
	int	dest2 [12];
	int i = 0;

	memmove(dest1, src, sizeof(int) * 10);
	ft_memmove(dest2, src, sizeof(int) * 10);
	printf(" Resultat Vraie fonction: |  Resultat Ma fonction: \n");
    printf("                          |                        \n");
	while (i < 10)
	{
		printf(" dest[%d] contient : %d \t", i, dest1[i]);
        printf("  |  dest[%d] contient : %d \n", i, dest2[i]);
		i++;
	}

    // test chevauchement chaine de caractères :

    char str[] = "Hello, World!";
    char str1[] = "Hello, World!";
    
    ft_memmove(str + 7, str, 6); 
    memmove(str1 + 7, str1, 6); 
    
    printf("\n#########################################################\n");
    printf(" Originale : %s\n", str);
    printf(" Ma Version: %s\n", str1);
    printf("#########################################################\n");
	return (0);
}
