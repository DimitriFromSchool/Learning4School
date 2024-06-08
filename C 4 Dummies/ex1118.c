/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1118.c
                      Created: 2024-06-08, 22:40:27 |
                      Updated: 2024-06-08, 22:43:19 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, a, b, result;

    puts("100 chiffres au hasard inférieur à 20");
    for ( a = 0; a < 20; a++)
    {
       for(b=0; b < 5; b++)
       {
         r = rand();
         result = r%20;
         
         printf("%d\t", result);
       }
       putchar('\n');
    }
    return (0);
}