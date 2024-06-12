/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1208.c
                      Created: 2024-06-12, 23:28:19 |
                      Updated: 2024-06-12, 23:32:48 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main (void)
{
    char phrase[] = "Texte insignifiant";
    int i;

    i = 0;
    while ( phrase[i] != '\0' )
    {
        putchar(phrase[i]);
        i++;
    }
    putchar('\n');
    return (0);
}