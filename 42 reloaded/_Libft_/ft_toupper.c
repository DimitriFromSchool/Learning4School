/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_toupper.c
                      Created: 2024-05-16, 12:00:49 |
                      Updated: 2024-05-16, 20:44:57 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}

int main(void)
{
    int l;
    l = 68;
    
    if ( l != ft_toupper(l))
        printf("%c deviens %c",l, ft_toupper(l));
    else 
        printf("%c n'est pas une lettre minuscule", l);
    return (0);
}