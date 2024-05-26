/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_strchr.c
                      Created: 2024-05-26, 22:54:02 |
                      Updated: 2024-05-26, 23:08:42 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>
#include<string.h>

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
    char text2[] = "Hello";
    int letter = 108;
    printf("%s\n",ft_strchr(text, letter));
    printf("%s\n",strchr(text2, letter));
    
}