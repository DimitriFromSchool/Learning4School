/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0915.c
                      Created: 2024-05-25, 23:10:02 |
                      Updated: 2024-05-25, 23:21:20 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    float   x = -5;

    while (x <= 5)
    {
        if ((int)x == x )
            printf("%1.0f ", x);
        else
            printf("%1.1f ", x);
        x = x + 0.5;
        
    }
    return (0);
}