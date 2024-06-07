/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1114.c
                      Created: 2024-06-06, 23:45:05 |
                      Updated: 2024-06-07, 23:18:54 | 
  ────────────────────────────────────────────────────────────
 */


#include <stdio.h>

int main()
{
    float radians,degres;

    printf("Indiquez un radian : ");
    scanf("%f", &radians);
    degres = radians / 0.0174532925;
    printf("%1.2f est le radian de %1.2f degrés.\n", radians, degres);
    return (0);
}