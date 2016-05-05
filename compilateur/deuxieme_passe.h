#ifndef __DEUXIEMEPASSE__
#define __DEUXIEMEPASSE__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tab_label.h"
#include "gestion_des_fonctions.h"

int recreer_tableLabel(char * fichier_table_label, Noeud_label * tab_label);
int recreerTableFonctions(char * fichier_table_des_fonctions,Noeud_Fonctions * tab_fonctions);
int  traiter_ligne_du_fichier(char * line, char ** tabToken);
void  traiter_ligne(char * line, Noeud_label l ) ;
void remplacer_label(char * nom_fichier_ass, Noeud_label * tab_label, int nbelement_tabLabel);


#endif
