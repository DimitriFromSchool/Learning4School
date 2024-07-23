/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1220.c
                    Created: 2024-07-23, 1:18:38 |
                    Updated: 2024-07-23, 1:19:53 |
────────────────────────────────────────────────────────────
*/


#include <stdio.h>

#define TAILLE 6

int main (void)
{
    char president[TAILLE][10] = {
        "Sarkozy",
        "Coty",
        "Grevy",
        "Mitterrand",
        "Chirac",
        "Pompidou"
    };
    int x;
    
    for ( x = 0; x < TAILLE; x++)
    {
        puts(president[x]);
    }
    putchar('\n');
    return (0);  
}