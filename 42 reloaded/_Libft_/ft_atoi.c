/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_atoi.c
                      Created: 2024-06-05, 12:58:25 |
                      Updated: 2024-06-05, 13:04:29 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

/*int ft_atoi(const char *str)
{
    return (0);
}*/

int main(void)
{
    char *ascii = "2247483647";
    int result = atoi(ascii) + 1;

    printf("%d \n", result);
}