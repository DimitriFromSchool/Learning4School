/*
 *                ░       ░                             ░    ░   
 *       .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
 *        ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
 *                                    dimitri4school@gmail.com::.
 *  ──────────────────────────────────────────────────────────────
 *           Project: ft_isdigit.c
 *                    | Created: 2024-05-15, 20:41:59 |
 *                    | Updated: 2024-05-15, 22:56:29 | 
 *  ──────────────────────────────────────────────────────────────
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