#include <stdio.h>
#include <stdlib.h>
#include "interpreteur.h"

int main(int argc, char const *argv[])
{

	/*char  ligne[20] ="1 99 5 6" ;
	int  tab[4];
	printf("-----%d\n",traiter_ligne(ligne ,tab));*/
	charger_Programme_dans_Ram("fichierVersionCode");
	//afficher_ram();
	interpreter();
	return 0;
}