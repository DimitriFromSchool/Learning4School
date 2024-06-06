/*
 *             ░       ░                             ░    ░   
 *    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
 *     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
 *                                 github:DimitriFromSchool::.
 *  ────────────────────────────────────────────────────────────
 *           Project: ex1113
 *                      Created: 2024-06-06, 23:38:55 |
 *                      Updated: 2024-06-06, 23:44:25 | 
 *  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main()
{
    float degres,radians;

    printf("Indiquez un angle en degrés : ");
    scanf("%f", &degres);
    radians = 0.0174532925*degres;
    printf("%1.2f degres valent %1.2f radians.\n", degres, radians);
    return (0);
}