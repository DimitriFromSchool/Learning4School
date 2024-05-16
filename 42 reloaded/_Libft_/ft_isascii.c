/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_isascii.c
                      Created: 2024-05-15, 21:18:48 |
                      Updated: 2024-05-16, 20:44:25 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int main(void)
{
    int a;
    a = 33;

    printf("%i",ft_isascii(a));
    return (0);
}