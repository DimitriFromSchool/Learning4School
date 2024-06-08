/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1119.c
                      Created: 2024-06-08, 22:48:06 |
                      Updated: 2024-06-08, 22:51:00 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned seed;
    int r, a, b;
    
    printf("Entrez une valeur pour la seed");
    scanf(" %u", &seed);
    srand(seed);
    for ( a = 0; a < 20; a++)
    {
       for(b=0; b < 5; b++)
       {
         r = rand();
         printf("%d\t", r);
       }
       putchar('\n');
    }
    return (0);
}