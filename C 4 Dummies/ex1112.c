/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1112.c
                      Created: 2024-06-04, 22:13:03 |
                      Updated: 2024-06-04, 22:21:41 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int power;
    float num, result;
  
    power = 0;
    num = 2.0;
    for (power = 1; power <= 10; power++)
    {
        result = pow(num, power);
        printf("%1.0f Puissance %d = %1.0f\n", num, power, result);
    }
    return (0);
}