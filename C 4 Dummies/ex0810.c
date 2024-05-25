/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0810.c
                      Created: 2024-05-25, 22:15:03 |
                      Updated: 2024-05-25, 22:19:53 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int a, b, leplusgrand;
    
    printf("Indiquez la valeur de A:");
    scanf("%d", &a);
    printf("Indiquez une valeur différente à B:");
    scanf("%d", &b);
    
    leplusgrand = (a > b) ? a : b;
    printf("%d est la valeur la plus grande.\n", leplusgrand);
    return(0);
}