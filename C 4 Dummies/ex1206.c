/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1206.c
                      Created: 2024-06-11, 23:53:10 |
                      Updated: 2024-06-11, 23:58:42 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main (void)
{
    float tabBourseFin[] = {14450.06, 14458.62, 14539.14, 14514.11, 14452.06};
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Jour %d : %.2f\n", (i + 1), tabBourseFin[i]);
    }
    return (0);
}