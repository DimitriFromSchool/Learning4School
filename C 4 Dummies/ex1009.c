/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1009.c
                      Created: 2024-05-30, 23:40:25 |
                      Updated: 2024-05-31, 15:35:46 | 
  ────────────────────────────────────────────────────────────
 */
#include<stdio.h>

float   convert2C(float f);
float   convert2F(float c);
void    pickyourChoice(char *choixConversion);

int main(void)
{
    float temp_f, temp_c;
    char choixConversion;

    choixConversion = 'X';
    while ( choixConversion != 'A' && choixConversion != 'B')
    {   
        pickyourChoice(&choixConversion);
 
        if (choixConversion == 'A')
        {
            printf("Entrez température en degrés Fahrenheit :");
            scanf("%f", &temp_f);
            temp_c = convert2C(temp_f);
            printf("%1.1fF correspond à %1.1fC\n" , temp_f, temp_c);
        }
        else if (choixConversion == 'B')
        {
            printf("Entrez température en degrés Celsius :");
            scanf("%f", &temp_c);
            temp_f = convert2F(temp_c);
            printf("%1.1fC correspond à %1.1fF\n" , temp_c, temp_f);
        }
        else
        {
            printf("Votre Choix semble incorrect\n");
            puts("\n");
        }
    }
    return (0);  
}

void    pickyourChoice(char *choixConversion)
{
    printf("Quelle conversion souhaitez vous efffectuer ?\n");
    printf(" A - Pour convertir Fahrenheit en Celsius\n");
    printf(" B - Pour convertir Celsius en Fahrenheit\n");
    puts("\n");
    
    printf("Entrez votre choix :");
    scanf(" %c", choixConversion);
    puts("\n");
}

float convert2C(float f)
{
    return (f - 32) / 1.8;
}

float convert2F(float c)
{
       return (c * 1.8) + 32;
}