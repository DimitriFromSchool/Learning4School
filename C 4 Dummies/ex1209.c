/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1209.c
                      Created: 2024-06-13, 23:36:43 |
                      Updated: 2024-06-13, 23:36:57 | 
  ────────────────────────────────────────────────────────────
 */

include <stdio.h>

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