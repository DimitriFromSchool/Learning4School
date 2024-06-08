/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1120.c
                      Created: 2024-06-08, 23:02:42 |
                      Updated: 2024-06-08, 23:15:12 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int r, a, b, rr, r1, rr1, final;
    
    srand((unsigned)time(NULL));
    for ( a = 0; a < 20; a++)
    {
       for(b=0; b < 5; b++)
       {
         r = rand();
         rr = r%20 + 1;
         r1 = rand();
         rr1 = r1%3 + 1;
         final = rr / rr1;
         printf("%d\t", final);
       }
       putchar('\n');
    }
    return (0);
}