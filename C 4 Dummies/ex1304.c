/*
  ░ 	  ░ 							░	 ░  	
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
							   github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
		 Project: ex1304.c
					Created: 2024-07-26, 11:26:10 |
                    Updated: 2024-07-26, 11:47:23 |
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
	if(response == 'O')
		puts("BOOM!");
	else
		puts("La lune ne craint rien.");
	return (0);
}	