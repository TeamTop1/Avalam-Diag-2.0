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
	scanf("%s",&fen);
	interpretation("diag.json", fen);

	//j/Uu/UuUu/uUuUuU/UuUuUuUu/UuUuuUuU/uUuUuUuU/UuUuUu/uU;
}

int interpretation(char * filename, char * tab){
	FILE * fp;
	fp = fopen(filename, "w");
	int i = 0;
	if(tab[0] == "j") fprintf(fp, "{\n%s:%d,\n",STR_TURN,1);
	else fprintf(fp, "{\n%s:%d,\n",STR_TURN,1);
	
	/*fprintf(fp, "%s:%d,\n",STR_SCORE_J,s.nbJ); 
	fprintf(fp, "%s:%d,\n",STR_SCORE_J5,s.nbJ5); 
	fprintf(fp, "%s:%d,\n",STR_SCORE_R,s.nbR); 
	fprintf(fp, "%s:%d,\n",STR_SCORE_R5,s.nbR5);*/

	fprintf(fp, "%s:[\n", STR_COLS);

	while(tab[i]!="\0"){
		if(tab[i] == "u"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,1, STR_COULEUR,1);
			i++;
		}
		else if(tab[i] =="U"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,1, STR_COULEUR,2);
			i++;
		}
		else if(tab[i] =="d"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,2, STR_COULEUR,1);
			i++;
		}
		else if(tab[i] =="D"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,2, STR_COULEUR,2);
			i++;
		}	
		else if(tab[i] =="t"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,3, STR_COULEUR,1);
			i++;				
		}	
		else if(tab[i] =="T"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,3, STR_COULEUR,2);
			i++;
		}	
		else if(tab[i] =="q"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,4, STR_COULEUR,1);
			i++;
		}	
		else if(tab[i] =="Q"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,4, STR_COULEUR,2);
			i++;
		}	
		else if(tab[i] =="c"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,5, STR_COULEUR,1);
			i++;
		}
		else if(tab[i] =="C"){
			fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,5, STR_COULEUR,2);
			i++;
		}
		else if(tab[i] =="/"){
			i++;
		}

		else if((47<tab[i])&&(tab[i]<57)){
			for(int j = 48; j != atoi(tab[i]); j++){
				fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,0, STR_COULEUR,0)
			}
	
		}
	
	}
}
