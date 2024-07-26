/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1305.c
                    Created: 2024-07-26, 11:48:28 |
                    Updated: 2024-07-26, 11:50:48 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char response;
	
	printf("Voulez vous faire exploser la lune ? Oui (O)/ Non (N) :");
	scanf("%c", &response);
	response = toupper(response);
	if (response == 'O')
		puts("BOOM!");
	else if (response == 'N')
        puts("Ouf! Tout va bien!");
	else
        puts("Bah alors ?");
	return (0);
}	