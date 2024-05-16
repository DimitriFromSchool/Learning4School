/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_isalnum.c
                      Created: 2024-05-15, 21:00:31 |
                      Updated: 2024-05-16, 20:43:48 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
    (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}

int main(void)
{
    int a;
    a = 109;

    if (ft_isalnum(a)== 1)
        printf("%c est un caractère alphanumérique.", a);
    else
        printf("Ceci n'est pas un caractère alphanumérique.");
    return (0);
}