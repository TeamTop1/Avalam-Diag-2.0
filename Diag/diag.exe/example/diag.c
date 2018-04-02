#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "avalam.h"
#include "topologie.h"

void viderBuffer();
void writePos(char * filename, T_Position p) ;

void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
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

int main () {
    //Var
    int numCase, numCaseD, choix, sauv, max, a, i, j, point_jaune, point_rouge, point_rouge5, point_jaune5, compteur;
    int colonne_ad[9];
    FILE *fp;
    char filename[100], FEN[60];
    T_Score s;
    T_Position p;

    //Debut
    colonne_ad[0] = 0;
    colonne_ad[1] = 2;
    colonne_ad[2] = 6;
    colonne_ad[3] = 12;
    colonne_ad[4] = 20;
    colonne_ad[5] = 28;
    colonne_ad[6] = 36;
    colonne_ad[7] = 42;
    colonne_ad[8] = 46;
    colonne_ad[9] = 48;
    compteur = point_jaune = point_jaune5 = point_rouge = point_rouge5 = 0;
    a=0;
    i=0;
    puts("Quelle est le numero de sauvegarde ?");
    scanf("%d",&sauv);
    viderBuffer();
    puts("Voulez vous entrez votre code FEN");
    fgets(FEN,60,stdin);
    if (strlen(FEN) <= 18) {
        puts("FEN pas assez long, FEN mis par defaut");
        strcpy(FEN,"Uu/UuUu/uUuUuU/UuUuUuUu/UuUuuUuU/uUuUuUuU/UuUuUu/UuUu/uU j");
    }
    stpcpy(filename, "../../avalam-web/initial.json");
    fp = fopen(filename, "w");
    fprintf(fp, "{\n");
    fprintf(fp, "%s:[\n", STR_COLS);
    do
    {
        switch (FEN[i])
        {
            case '/':
                a++;
                if (compteur < colonne_ad[a] && compteur<47)
                {
                    for (j = compteur; j < colonne_ad[a]; j++)
                    {
                        if (compteur == 47)
                        {
                            fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 0, STR_COULEUR, VIDE);
                            a++;
                        }
                        else
                        {
                            fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 0, STR_COULEUR, VIDE);
                        }
                        p.cols->nb = 0;
                        p.cols->couleur = VIDE;
                        compteur++;
                    }
                }
                break;
            case 'U':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 1, STR_COULEUR, ROU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 1, STR_COULEUR, ROU);
                }
                point_rouge++;
                p.cols->nb = 1;
                p.cols->couleur = ROU;
                compteur++;
                break;
            case 'u':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 1, STR_COULEUR, JAU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 1, STR_COULEUR, JAU);
                }
                point_jaune++;
                p.cols->nb = 1;
                p.cols->couleur = JAU;
                compteur++;
                break;
            case 'D':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 2, STR_COULEUR, ROU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 2, STR_COULEUR, ROU);
                }
                point_rouge++;
                p.cols->nb = 2;
                p.cols->couleur = ROU;
                compteur++;
                break;
            case 'd':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 2, STR_COULEUR, JAU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 2, STR_COULEUR, JAU);
                }
                point_jaune++;
                p.cols->nb = 2;
                p.cols->couleur = JAU;
                compteur++;
                break;
            case 'T':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 3, STR_COULEUR, ROU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 3, STR_COULEUR, ROU);
                }
                point_rouge++;
                p.cols->nb = 3;
                p.cols->couleur = ROU;
                compteur++;
                break;
            case 't':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 3, STR_COULEUR, JAU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 3, STR_COULEUR, JAU);
                }
                point_jaune++;
                p.cols->nb = 3;
                p.cols->couleur = JAU;
                compteur++;
                break;
            case 'Q':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 4, STR_COULEUR, ROU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 4, STR_COULEUR, ROU);
                }
                point_rouge++;
                p.cols->nb = 4;
                p.cols->couleur = ROU;
                compteur++;
                break;
            case 'q':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 4, STR_COULEUR, JAU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 4, STR_COULEUR, JAU);
                }
                point_jaune++;
                p.cols->nb = 4;
                p.cols->couleur = JAU;
                compteur++;
                break;
            case 'C':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 5, STR_COULEUR, ROU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 5, STR_COULEUR, ROU);
                }
                point_rouge5++;
                p.cols->nb = 5;
                p.cols->couleur = ROU;
                compteur++;
                break;
            case 'c':
                if (compteur == 47)
                {
                    fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 5, STR_COULEUR, JAU);
                }
                else
                {
                    fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 5, STR_COULEUR, JAU);
                }
                point_jaune5++;
                p.cols->nb = 5;
                p.cols->couleur = JAU;
                compteur++;
                break;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
                max=atoi(&FEN[i]);
                printf("%d\n",max);
                for (j=0; j < max; j++)
                {
                    p.cols->nb = 0;
                    p.cols->couleur = VIDE;
                    if (compteur == 47)
                    {
                        fprintf(fp, "\t{%s:%d, %s:%d}", STR_NB, 0, STR_COULEUR, VIDE);
                    }
                    else
                    {
                        fprintf(fp, "\t{%s:%d, %s:%d},\n", STR_NB, 0, STR_COULEUR, VIDE);
                    }
                    compteur++;
                    printf("%d\n",compteur);
                }
                break;
            case ' ':
                break;
            case 'j':
                puts("jaune");
                fprintf(fp, "\n],\n");
                fprintf(fp, "%s:%d,\n", "\"trait\"", JAU);
                p.trait = JAU;
                FEN[i+1]='\0';
                compteur=47;
                break;
            case 'r':
                puts("rouge");
                fprintf(fp, "\n],\n");
                fprintf(fp, "%s:%d,\n", "\"trait\"", ROU);
                p.trait = ROU;
                FEN[i+1]='\0';
                compteur=47;
                break;
            default:
                puts("ERREUR DANS VOTRE CODE FEN !!!");
                puts("ARRET DANS LA LECTURE");
                FEN[i+1]='\0';
                break;
        }
        if (compteur> colonne_ad[a+1])
        {
            fclose(fp);
            puts("ERREUR DANS VOTRE CODE FEN !!!");
            puts("VOTRE CODE SERA REMPLACE PAR CELUI PAR DEFAUT !");
            strcpy(FEN,"Uu/UuUu/uUuUuU/UuUuUuUu/UuUuuUuU/uUuUuUuU/UuUuUu/UuUu/uU j");
            fp = fopen(filename, "w");
            fprintf(fp, "{\n");
            fprintf(fp, "%s:[\n", STR_COLS);
            i=-1;
            compteur=0;
            a=0;
        }
        i++;
    }
    while (FEN[i] != '\0');
    printf("%d,%c\n",i,FEN[i-1]);
    fprintf(fp,"\"numdiag\": %d,\n",sauv);
    fprintf(fp,"\"notes\":\"Position initiale. Les règles ne le précisant pas, nous choisirons de faire commencer la couleur la plus claire, ici les jaunes (à l'instar des échecs où les blancs commencent). Cela semble cohérent dans le mesure où les rouges semblent avantagés, car leurs pions ont globalement moins de voisins (148 voisins pour les jaunes contre 144 pour les rouges). Cela reste toutefois à prouver par la pratique.\"\n");
    fprintf(fp, "}");
    fclose(fp);
}































