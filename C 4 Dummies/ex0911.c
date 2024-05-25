/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0911.c
                      Created: 2024-05-25, 22:36:35 |
                      Updated: 2024-05-25, 22:40:47 | 
  ────────────────────────────────────────────────────────────
 */
#include <stdio.h>

int main(void)
{
    int letter, num;
    
    for (letter = 'A'; letter <= 'G'; letter++)
    {
        for (num = 1; num <= 7; num++)
        {
            printf("%c%d\t", letter, num);
        }
        puts("");
    }
    return (0); 
}