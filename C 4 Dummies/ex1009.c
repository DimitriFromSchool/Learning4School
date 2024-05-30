/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1009.c
                      Created: 2024-05-30, 23:40:25 |
                      Updated: 2024-05-30, 23:47:32 | 
  ────────────────────────────────────────────────────────────
 */
#include<stdio.h>

float convertir(float f);

int main(void)
{
    float temp_f, temp_c;
    
    printf("Entrez température en Fahrenheit :");
    scanf("%f", &temp_f);
    temp_c = convertir(temp_f);
    printf("%1.1fF correspond à %1.1fC\n" , temp_f, temp_c);
    return (0);
}

float convertir(float f)
{
    float t;

    t = (f - 32) / 1.8;
    return (t);
}