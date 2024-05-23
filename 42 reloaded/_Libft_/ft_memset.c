/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_memset.c
                      Created: 2024-05-16, 21:49:35 |
                      Updated: 2024-05-23, 14:12:21 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *buffer;
    size_t i;
    
    buffer = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        buffer[i] = c;
        i++;
    }
    return (s);
}

int main(void)
{
    #include <string.h>
    char    input[] = "Salut";
    int     value = 68;
    size_t  length = 6;
    char    *result = ft_memset(input,value,length);
    
    printf ("%s\n", result);
    printf ("%s", (char*)memset(input,value,length));
    return (0);
}
