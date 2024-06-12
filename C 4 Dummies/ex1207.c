/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1207.c
                      Created: 2024-06-12, 23:33:36 |
                      Updated: 2024-06-12, 23:59:00 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <math.h>

int main (void)
{

    int base[] = {10, 12, 14, 15, 16, 18, 20};
    int racine[7];
    int i;
    int tabsize;

    i = 0;
    tabsize = sizeof(base) / sizeof(base[0]);
    while ( i < tabsize )
    {
        racine[i] = (int)sqrt(base[i]);
        printf("%d \t", base[i]);
        printf("%d \n", racine[i]);
        i++;
    }
    return (0);
}