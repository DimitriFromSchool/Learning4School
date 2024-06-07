/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1115.c
                      Created: 2024-06-07, 23:21:09 |
                      Updated: 2024-06-07, 23:26:14 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <math.h>

#define PI 3.1459
#define LONGUEURONDE 70
#define PERIODE .1

int main(void)
{
    float graph,s,x;
    
    for ( graph = 0; graph < PI; graph++)
    {
        s = sin(graph);
        for ( x = 0; x < s; x++)
            putchar('*');
        putchar('\n');   
    }
    return (0);
}