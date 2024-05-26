/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_strchr.c
                      Created: 2024-05-26, 22:54:02 |
                      Updated: 2024-05-26, 23:05:36 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    char *cc;
    
    i = 0;
    cc = (char *)s;
    while (cc[i] != c)
    {
        i++;
        cc++;
    }
    if (cc[i] == c)
        return (cc);
    else
        return (NULL);
}

int main(void)
{
    char text[] = "Hello";
    int letter = 108;
    printf("%s",ft_strchr(text, letter));
    
}