/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_isdigit.c
                      Created: 2024-05-15, 20:41:59 |
                      Updated: 2024-05-16, 20:42:39 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int main(void)
{
    int d;
    d = 49;
    
    if (ft_isdigit(d)== 1)
        printf("%c est bien un chiffre.", d);
    else 
        printf("Ceci n'est pas un chiffre");
    return (0);
}