/*
 *                ░       ░                             ░    ░
 *       .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
 *        ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
 *                                    dimitri4school@gmail.com::.
 *  ──────────────────────────────────────────────────────────────
 *           Project: ft_tolower.c
 *                    | Created: 2024-05-16, 13:42:08 |
 *                    | Updated: 2024-05-16, 14:33:30 | 
 *  ──────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

int main(void)
{
    int l;
    l = 6;
    
    if ( l != ft_tolower(l))
        printf("%c deviens %c",l, ft_tolower(l));
    else 
        printf("%c n'est pas une lettre Majuscule", l);
    return (0);
}