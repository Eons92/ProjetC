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
#define L_STRING 50
#define S_STRING 10

typedef struct {
    int id;
    char nom[L_STRING];
    char prenom[L_STRING];
    struct {
        char rue[L_STRING];
        char nb[S_STRING];
        int CP;
        char ville[L_STRING];
    } T_Adresse;
    int cote[5];
} T_Etu;


int nbEtu = 0;
void encoder_Etu(void)
{
    T_Etu EtuEphec[25];
    char ls[L_STRING],ss[S_STRING];
    int integer;
    printf("Encoder ETU\n");
    printf("id: ");
    scanf("%d",&integer);
    EtuEphec[nbEtu].id = integer;
    printf("\nnom: ");
    fflush(stdin);
    gets(ls);
    //EtuEphec[nbEtu].nom = ls;
    printf("\nprenom: ");
    fflush(stdin);
    gets(ls);
    //EtuEphec[nbEtu].prenom = ls;
    printf("\n%d",EtuEphec[nbEtu].id);
};


int main() {
 encoder_Etu();

 return 0;
}
