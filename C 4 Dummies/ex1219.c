/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1219.c
                    Created: 2024-07-23, 1:14:52 |
                    Updated: 2024-07-23, 1:18:13 |
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
    int x;
    
    for ( x = 0; x < TAILLE; x++)
    {
        puts(president[x]);
    }
    putchar('\n');
    return (0);  
}