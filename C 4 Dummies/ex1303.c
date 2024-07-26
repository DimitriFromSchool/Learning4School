/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1303.c
                    Created: 2024-07-26, 11:22:51 |
                    Updated: 2024-07-26, 11:22:54 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char str[] = "Art.4 : La liberté consiste à pouvoir faire tout ce qui ne nuit pas à autrui :"
    "ainsi l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent "
    "aux autres Membres de la Société la jouissance de ces memes droits. Ces bornes ne peuvent être déterminées de par la loi";
    int i, alpha, blank, punct, lower, upper, total;
    
    alpha = blank = punct = lower = upper = total = 0;

    /* Collecte */
    i = 0;
    while(str[i])
    {
        if(isalpha(str[i]))
            alpha++;
        if(isblank(str[i]))
        {
            blank++;
            total++;
        }
        if(ispunct(str[i]))
            punct++;
        if(islower(str[i]))
            lower++;
        if(isupper(str[i]))
            upper++;
        if(isascii(str[i]))
            total++;
        i++;
    }
    
    /* Affichage */
    printf("\"%s\"\n", str);
    puts("\nAnalyse du texte :");
    printf("%d lettres de l'alphabet\n", alpha);
    printf("%d lettres miniscules\n", lower);
    printf("%d lettres majuscules\n", upper);
    printf("%d signes de ponctuations\n", punct);
    printf("%d espaces\n", blank);
    putchar('\n');
    printf("Nombres de charactères : %d\n", total);
    
    return (0);
}