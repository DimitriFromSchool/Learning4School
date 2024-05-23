/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: memcpy.c
                      Created: 2024-05-23, 15:33:24 |
                      Updated: 2024-05-23, 16:41:01 | 
  ────────────────────────────────────────────────────────────
 */
#include <stdio.h>
#include <string.h>

int ft_overflowerror (size_t n, size_t length)
{
    if (length < n)
    {
        printf("\e[31m\e[1merror:\e[0m \e[1m‘ft_memcpy’\e[0m writing %ld bytes into a region of size %ld overflows the destination\n", n, length);
        return (1);
    }
    return (0);       
}

void *ft_memcpy (void *dest, const void *src, size_t n)
{
    size_t                i;
    unsigned char         *destination;
    const unsigned char   *source;
    
    i = 0;
    destination = (unsigned char *) dest;
    source = (const unsigned char *) src;
    
    if (ft_overflowerror(n,sizeof(destination))== 1)
        return NULL;
    if (dest == 0 && src == 0)
        return (dest);
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return(dest); 
}

int main(void)
{
    size_t  n = 9;
    const char src[] = "Hello";
    char dest[] = "Bonjour";
    char *result = ft_memcpy(dest,src,n);
    

    printf("%s\n", result);
    return (0);
}