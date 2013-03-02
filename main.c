#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
  PROJET C
  Gerer une classe de max 25 étudiants
  1 etudiant -id unique
  -nom
  -prenom
  -adresse(rue,#nCP,ville)
  tableau de 5 cotes

  procedures => encoder un etudiant
                supprimer "" (avec son id)
                modifier ""  ("")
                afficher la classe
                encoder cotes.
*/
#define L_STRING 100
#define M_STRING 50
#define S_STRING 25

typedef struct {
    int id;
    char nom[M_STRING+1];
    char prenom[M_STRING+1];
    struct {
        char rue[M_STRING+1];      // appartement -> chiffre et lettres
        int CP;
        char ville[M_STRING+1];
    } Adresse;
    int cote[5];
} T_Etu;
int nbEtu = 0;
//
void encoder_Etu(void);

int main() {
 //encoder_Etu();

 return 0;
}


void encoder_Etu(void)
/*
  Encoder un nouvel etudiant ou reencoder un ancient etudiant.

*/
// TODO (Xavier#3#): rajouter une fct pour mettre le nom en MAJ.
{
    T_Etu EtuEphec[25];
    char ls[L_STRING],ms[M_STRING];
    int integer;
    printf("Encoder ETU\n");
    printf("id: ");
    scanf("%d",&integer);
    EtuEphec[nbEtu].id = integer;
    fflush(stdin);
    printf("Nom: "); gets(ms);
    strcpy(EtuEphec[nbEtu].nom, ms);
    printf("Prenom: "); gets(ms);
    strcpy(EtuEphec[nbEtu].prenom, ms);
    printf("Adresse:\nRue: "); gets(ls);
    strcpy(EtuEphec[nbEtu].Adresse.rue, ls);
    printf("Ville: "); gets(ms);
    strcpy(EtuEphec[nbEtu].Adresse.ville, ms);
    printf("CP: "); scanf("%d",&integer);
    EtuEphec[nbEtu].Adresse.CP = integer;

    printf("\nID: %d\n%s %s\n%s\n%s%d",EtuEphec[nbEtu].id, EtuEphec[nbEtu].nom, EtuEphec[nbEtu].prenom, EtuEphec[nbEtu].Adresse.rue, EtuEphec[nbEtu].Adresse.ville, EtuEphec[nbEtu].Adresse.CP);
};


