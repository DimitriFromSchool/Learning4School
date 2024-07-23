/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1218.c
                    Created: 2024-07-23, 1:04:40 |
                    Updated: 2024-07-23, 1:10:50 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

#define TAILLE 3

int main (void)
{
    char president[TAILLE][8] = {
        "Sarkozy",
        "Coty",
        "Grevy"
    };
    int x, i;
    
    for ( x = 0; x < TAILLE; x++)
    {
        i = 0;
        while(president[x][i] != '\0')
        {
            putchar(president[x][i]);
            i++;
        }
        putchar('\n');
    }
    return (0);
    
}