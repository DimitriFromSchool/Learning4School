/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_memset.c
                      Created: 2024-05-16, 21:49:35 |
                      Updated: 2024-05-23, 13:46:47 | 
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
    //#include <string.h>
    char    test[] = "Salut";
    int     data = 68;
    size_t  stop = 6;
    char    *ret = ft_memset(test,data,stop);
    
    printf ("%s\n", ret);
    //printf ("%s", (char*)memset(test,data,stop));
}
