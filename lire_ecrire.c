#include <stdio.h>

#include "mes_types.h"


SLIDER lire_fichier(char *nom) {
	FILE *f= fopen("niveau01.slider", "r");//mettre niv1 dans un autre fichier 
	printf("nom = %s\n",nom);
	SLIDER S;
	fscanf(f, " %d %d", &S.L,&S.H);
	fscanf(f, " %d %d", &S.X,&S.Y);
	fscanf(f, " %d %d", &S.SOX,&S.SOY);
	//S.L = 10;
//	S.H = 5;
	
	return S;
}


void ecrire_fichier(SLIDER S, char*nom) {
}
