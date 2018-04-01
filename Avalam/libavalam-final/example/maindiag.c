#include <stdio.h>
#include "avalam.h"
#include "topologie.h"
#include <stdlib.h>
#include <string.h>

int main()
{
	int numCase, numCaseD; 
	T_Score s ; 
	char fen[54];

	T_Position p = getPositionInitiale();
	//afficherPosition(p);
	writePos("../../avalam-web/data.json", p);
	
	T_ListeCoups l = getCoupsLegaux(p);
	//afficherListeCoups(l);

	puts("Bienvenue dans Avalam !\n");
	puts("A vous de jouer !\n");
	scanf("%s",fen);
	interpretation("diag.json", fen);

	//j/Uu/UuUu/uUuUuU/UuUuUuUu/UuUuuUuU/uUuUuUuU/UuUuUu/uU;
}

int interpretation(char * filename, char * tab){
	FILE * fp;
	fp = fopen(filename, "w");
	int i = 0;
	
	/*fprintf(fp, "%s:%d,\n",STR_SCORE_J,s.nbJ); 
	fprintf(fp, "%s:%d,\n",STR_SCORE_J5,s.nbJ5); 
	fprintf(fp, "%s:%d,\n",STR_SCORE_R,s.nbR); 
	fprintf(fp, "%s:%d,\n",STR_SCORE_R5,s.nbR5);*/

	fprintf(fp, "%s:[\n", STR_COLS);

	while(tab[i]!="\0"){
		switch(tab[i])
		{
			case 'u':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,1, STR_COULEUR,1);
				i++;
				break;
			case 'U':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,1, STR_COULEUR,2);
				i++;
				break;
			case 'd':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,2, STR_COULEUR,1);
				i++;
				break;
			case 'D':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,2, STR_COULEUR,2);
				i++;
				break;
			case 't':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,3, STR_COULEUR,1);
				i++;				
				break;
			case 'T':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,3, STR_COULEUR,2);
				i++;
				break;
			case 'q':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,4, STR_COULEUR,1);
				i++;
				break;
			case 'Q':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,4, STR_COULEUR,2);
				i++;
				break;
			case 'c':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,5, STR_COULEUR,1);
				i++;
				break;
			case 'C':
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,5, STR_COULEUR,2);
				i++;
				break;
			case '/':
				i++;
				break;
			case ( '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' ):
			for(int j=0; j<atoi(tab[i]); j++)
				{
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,0, STR_COULEUR,0);
				}
			i++;
			break;
			case "j":
				fprintf(fp, "{\n%s:1,\n",STR_TURN);
				i++;
				break;
			case "r":
				fprintf(fp, "{\n%s:2,\n",STR_TURN);
				i++;
				break;
			default:
				break;
		}
	}
}
