/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1115.c
                      Created: 2024-06-07, 23:21:09 |
                      Updated: 2024-06-07, 23:31:53 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <math.h>

#define PI 3.1459
#define LONGUEURONDE 35
#define PERIODE .1 //  == 0.1

int main(void)
{
    float graph,s,x;
    
    for ( graph = 0; graph < PI; graph+= PERIODE)
    {
        s = sin(graph);
        for ( x = 0; x < s * LONGUEURONDE; x++)
            putchar('*');
        putchar('\n');   
    }
    return (0);
}