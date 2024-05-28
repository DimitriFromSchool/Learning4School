/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_memcmp.c
                      Created: 2024-05-28, 23:00:21 |
                      Updated: 2024-05-28, 23:27:12 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>
#include<string.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *mem1;
    unsigned char   *mem2;
    size_t          i;

    mem1 = (unsigned char *) s1;
    mem2 = (unsigned char *) s2;

    if (mem1 == NULL && mem2 == NULL)
        return (0);
    while (i < n)
        i++;
    return (mem1[i] - mem2[i]);
}

int main (void)
{
    char    str1[] = "Hellob";
    char    str2[] = "Helloa";
    size_t  n = 5;

    printf("%d", ft_memcmp(str1, str2, n));
    printf("%d", memcmp(str1, str2, n))
}
    
