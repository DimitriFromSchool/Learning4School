/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1009.c
                      Created: 2024-05-30, 23:40:25 |
                      Updated: 2024-05-30, 23:59:49 | 
  ────────────────────────────────────────────────────────────
 */
#include<stdio.h>

float   convert2C(float f);
float   convert2F(float c);
char    choixConversion;

int main(void)
{
    float temp_f, temp_c;
    char choix;

    printf("Quelle conversion souhaitez vosu efffectuer ?\n");
    
    switch (choixConversion)
    {
    case 'A':
        printf("Entrez température en degrés Fahrenheit :");
        scanf("%f", &temp_f);
        temp_c = convert2C(temp_f);
        printf("%1.1fF correspond à %1.1fC\n" , temp_f, temp_c);
        break;
    case 'B':
        printf("Entrez température en degrés Celcius :");
        scanf("%f", &temp_f);
        temp_c = convert2F(temp_f);
        printf("%1.1fC correspond à %1.1fF\n" , temp_c, temp_f);
        break;
    default :
        printf("Votre Choix semble incorrect");
    }
    
}

float convert2C(float f)
{
    float t;

    t = (f - 32) / 1.8;
    return (t);
}

float convert2F(float c)
{
    float t;

    t = (c + 32) * 1.8;
    return (t);
}