/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_memcmp.c
                      Created: 2024-05-28, 23:00:21 |
                      Updated: 2024-05-28, 23:42:38 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>
#include<string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *mem1;
    unsigned char   *mem2;
    size_t          i;

    mem1 = (unsigned char *) s1;
    mem2 = (unsigned char *) s2;
    i = 0;
    while (i < (n - 1))
        i++;
    return (mem1[i] - mem2[i]);
}

int main (void)
{
    char    *str1 = "Helloa";
    char    *str2 = "Hellob";
    size_t  n = 6;

    printf("%d\n", ft_memcmp(str1, str2, n));
    printf("%d\n", memcmp(str1, str2, n));
    return (0);
}
    
