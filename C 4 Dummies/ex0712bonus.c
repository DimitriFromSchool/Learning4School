/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0712bonus.c
                      Created: 2024-05-23, 20:21:57 |
                      Updated: 2024-05-23, 20:39:44 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

void nombre(int *n)
{
    *n = 8;
}

int main(void)
{
    int er = 4;
    
    printf("%d\n", er);
    nombre(&er);
    printf("%d\n", er);
    return (0);
    
}