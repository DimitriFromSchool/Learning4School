/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1104.c
                      Created: 2024-06-01, 22:35:30 |
                      Updated: 2024-06-01, 22:37:24 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>

int main(void)
{
    int i;
    
    for (i = -10; i <= 10; i++)
    {
        printf("%d ", i);
    }
    for (i = 10; i >= 10; i--)
    {
        printf("%d ", i);
    }
    putchar('\n');
    return (0);
}