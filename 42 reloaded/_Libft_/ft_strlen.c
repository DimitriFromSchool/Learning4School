/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_strlen.c
                      Created: 2024-05-16, 21:30:15 |
                      Updated: 2024-05-17, 16:58:58 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

size_t  ft_strlen(const char *s)
{
    size_t  i;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char quote[] = "Hello World";
    
    printf("La chaine contient : %li charactère(s)", ft_strlen(quote));
    return (0);
}