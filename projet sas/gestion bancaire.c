#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct compte {
 	char cin[10];
   	char nom[15];
    char prenom[15];
    int montant;
};

struct compte bc[100];
int n_compte = 0 ;

/* ------------ Creer Un Compte ------------ */
void creatcompte(){
   printf("Saisir Votre CIN : ");
   scanf("%s",bc[n_compte].cin);
   printf("\nSaisir Votre Nom : ");
   scanf("%s",bc[n_compte].nom);
   printf("\nSaisir Votre Prenom : ");
   scanf("%s",bc[n_compte].prenom);
   printf("\nSaisir Votre Montant : ");
   scanf("%d",&bc[n_compte].montant);
   printf("\n\n===== #Le Compte A Ete Cree Avec Succee# ===== \n\n");
   n_compte++;
   system("cls");
   }

/* ------------ Creer Plusieur Compte ------------ */
void creatPlusieurcomptes(){
  	int i, a;
    printf("Donner Le Nombre De Compte Vous Voulez Creer : ");
    scanf("%d",&a);
    for (i = 0; i < a; i++){
        printf("\nSaisir Votre Cin : ");
        scanf("%s",bc[n_compte].cin);
        printf("\nSaisir Votre Nom : ");
        scanf("%s",bc[n_compte].nom);
        printf("\nSaisir Votre Prenom : ");
        scanf("%s",bc[n_compte].prenom);
	    printf("\nSaisir Votre Montant : ");
        scanf("%d",&bc[n_compte].montant);
        printf("\n\n==== CIN : %s ====\n\n",bc[n_compte].cin);
        printf("==== Nom : %s ====\n\n",bc[n_compte].nom);
        printf("==== Prenom : %s ====\n\n",bc[n_compte].prenom);
        printf("==== Montant : %d ====\n\n",bc[n_compte].montant);
        n_compte++;
        system("cls");
    }
        printf("===== #les Comptes Ont Etes Cree Avec Succees# ===== \n\n");
}

/* ------------ Retrait Le Montant  ------------ */
void retrait(){
   int i , usermontant;
   char usercin[15];
   printf("Entrer La Valeur De CIN : ");
   scanf("%S", &usercin );
   for (i = 0; i < n_compte; i++){
      if(strcmp(bc[i].cin , usercin) == 0 ){
        printf("entrer la valeur de montant : ");
        scanf("%d",&usermontant);
           if(bc[i].montant < usermontant){
               printf("===== #Ce Mntant Est Tres Gros Que Largent Qui Dans Ton Compte# ===== \n\n");
               break;
           }
           else{
                bc[i].montant -= usermontant;
                printf("Le Nouveau Montant C est : %d\n\n",bc[i].montant);
                break;
           }
      }
        }
}

/* ------------ Deposer Le Montant  ------------ */
void depot(){
   int i, usermontant;
   char usercin[15];
   printf("Entrer La Valeur De CIN : ");
   scanf("%S", &usercin );
   for (i = 0; i < n_compte; i++){
      if(strcmp(bc[i].cin, usercin) == 0){
        printf("Entrer La Valeur De Montant : ");
        scanf("%d",&usermontant);
        bc[i].montant += usermontant;
        printf("Le Nouveau Montant C est : %d\n\n",bc[i].montant);
        break ;
      }
      }
}

/* ------------ Function Pincipqle Main  ------------ */
int main(){
	int choix;
	reto:
    printf("======= #Menu PrinciPal# ======\n\n");
    printf("Bonjour Qu'est-Ce Que Vous Voulez \n\n");
    printf("1 .Creer Un Compte \n\n");
    printf("2 .Introduire Plusieur Comptes Bancaires \n\n");
    printf("3 .Operations \n\n");
    printf("4 .Search Par CIN  \n\n");
    printf("5 .Quitter  \n\n");
    printf("Saisir Le Choix : ");
    scanf("%d",&choix);
    switch(choix){
		case 1:
            system("cls");
            printf("===== #Creer Un Compte# ===== \n\n");
		    creatcompte();
		    goto reto;
		    break;

        case 2:
            system("cls");
            printf("===== #Creer Plusieur Comptes# ===== \n\n");
            creatPlusieurcomptes();
		    goto reto;
		    break;

		case 3:
            system("cls");
		    printf("===== #Operations# ===== \n\n");
            int menuOperations;
            printf("1. Retrait \n\n");
            printf("2. Depot \n\n");
            printf("3. Retour A Menu \n\n");
            printf("Donnez Choix : ");
            scanf("%d", &menuOperations);

            switch(menuOperations){
            case 1:
                system("cls");
                retrait();
                goto reto;
                break;

            case 2:
                system("cls");
                depot();
                goto reto;
                break;

            case 3:
                system("cls");
                goto reto;
                break;

            default:
                system("cls");
                printf("Votre Choix Doit Etre Compris Entre 1 et 3 ");
                goto reto;
                break;
            }
		    break;

		case 4:{
            /* ------------ Search Par CIN ------------ */
            int i;
            char usercin[15];
            system("cls");
            printf("\n\nentrer la valeur de cin: ");
            scanf("%S", &usercin );
            for(i = 0; i < n_compte; i++){
                if(strcmp(bc[i].cin , usercin) == 0 ){
                    printf("===== #Vous Avez Un Compt Bancaires# ===== \n\n");
                    printf("CIN : %s\n\n",bc[i].cin);
                    printf("NOM : %s\n\n",bc[i].nom);
                    printf("Prenom : %s\n\n",bc[i].prenom);
                    printf("Montant : %d\n\n",bc[i].montant);
                    goto reto;
                    break;
                }
            }
            printf("===== #Vous N Avez Un Compt Bancaires# ===== \n\n");
            goto reto;
            break;
        }
		
        case 5:
            exit(1);
		    break;

		default:
            printf("===== #Ce Choix N Est Pas Deriger# ===== \n\n");
            goto reto;
		    break;
		}

	return 0;
}
