/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1117.c
                      Created: 2024-06-08, 22:30:32 |
                      Updated: 2024-06-08, 22:34:38 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, a, b;

    puts("100 chiffres au hasard");
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