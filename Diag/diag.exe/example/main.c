#include <stdio.h>
#include <string.h>
#include "avalam.h"
#include "topologie.h"

void writePos(char * filename, T_Position p) ;

int main(int argc, char ** argv)
{
	int numCase, numCaseD, choix;
	char chemin2[100],chemin[100];
	T_Score s ;

	T_Position p = getPositionInitiale();
	//afficherPosition(p);
	puts("Quel chemin voulez vous utilisez ?");
	puts("=====MENU=====");
	puts("1) Utiliser le chemin de fichier par defaut");
	puts("2) Utiliser le chemin de votre fichier");
	puts("==============");
	printf("Donner votre choix (1 ou 2)");
	scanf("%d",&choix);
	switch (choix)
	{
		case 1:
		{
			puts("Le chemin utilisait est celui par defaut");
			strcpy(chemin,"../../avalam-web/data.json");
			break;
		}
		case 2:
		{
			puts("Quel est le chemin de votre fichier ?\nExemple:../../avalam-web/data.json");
			scanf("%s",chemin2);
			strcpy(chemin,"../../avalam-web/");
			strcat(chemin,chemin2);
			break;
		}
		default:
		{
			puts("Le chemin utilisait est celui par defaut");
			strcpy(chemin,"../../avalam-web/data.json");
			break;
		}
	}
	writePos(chemin, p);

	T_ListeCoups l = getCoupsLegaux(p);
	//afficherListeCoups(l);

	while(l.nb > 0) {

		printf("caseO ? : ");
		scanf("%d",&numCase);

		printf("caseD ? : ");
		scanf("%d",&numCaseD);

		printf("On joue %d -> %d\n", numCase, numCaseD);
		p = jouerCoup(p, numCase,numCaseD);
		afficherPosition(p);
		writePos(chemin, p);

		s = evaluerScore(p);
		afficherScore(s);

		l = getCoupsLegaux(p);
		//afficherListeCoups(l);
}

}



void writePos(char * filename, T_Position p) {
	FILE * fp;
	int i;

	T_Score s = evaluerScore(p);


	// Le fichier ne devrait-il pas être préfixé par le PID du process ?
	// On devrait lui faire porter le nom du groupe, passé en ligne de commandes
	fp = fopen(filename,"w");

	// On écrit le trait
	fprintf(fp, "{\n%s:%d,\n",STR_TURN,p.trait);

	// On écrit les scores
	fprintf(fp, "%s:%d,\n",STR_SCORE_J,s.nbJ);
	fprintf(fp, "%s:%d,\n",STR_SCORE_J5,s.nbJ5);
	fprintf(fp, "%s:%d,\n",STR_SCORE_R,s.nbR);
	fprintf(fp, "%s:%d,\n",STR_SCORE_R5,s.nbR5);



	// Les colonnes // attention aux "," ?
	fprintf(fp, "%s:[\n",STR_COLS);

	// première
	fprintf(fp, "\t{%s:%d, %s:%d}",STR_NB,p.cols[0].nb, STR_COULEUR,p.cols[0].couleur);

	// autres
	for(i=1;i<NBCASES;i++) {
		fprintf(fp, ",\n\t{%s:%d, %s:%d}",STR_NB,p.cols[i].nb, STR_COULEUR,p.cols[i].couleur);
	}
	fprintf(fp,"\n]\n"); // avec ou sans "," ?

	fprintf(fp,"}");

	fclose(fp);
}
