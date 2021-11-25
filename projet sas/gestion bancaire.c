#include <stdlib.h>
#include<stdio.h>
#include <string.h>

//    declaration sruct:kifach nkteb bzaf dyal les type de variable dans case 1 dans un tableau;

  struct compt {
	
 	char cin[10];
   	char nom[15];
    char prenom[15];
    int montant;
      
   };

//    type+nom de struct +nom de tableau=nomre de case;
struct compt bc[100];
//   conteur qui nous donne les cases qui charger dans les tableaus 
int n_compt = 0 ;
// void ne utilliser pour ne retour pas ;	
void creatcompt(){     //   pou creation dun seul compt	
    
	printf("\n saisir votre cin:\n");
	scanf("%s",bc[n_compt].cin);
	printf("saisir votre nom :\n");
	scanf("%s",bc[n_compt].nom);
	printf("saisir votre prenom :\n");
	scanf("%s",bc[n_compt].prenom);
	printf("saisir votre montant:\n");
	scanf("%d",&bc[n_compt].montant);
	printf("le compte a ete cree avec succee \n\n");

	n_compt++;
	
}
	
void creatncompt(){  //  pou cration de pleusiuer compts
	
	int i,a;   //i pour inqrimantation est a pour donner les valeur de copmts;
	
	printf("donner le nombre de compt vous voulez creer : ");
	scanf("%d",&a);
	
	for (i=0;i<a;i++)
	{
	printf("saisir votre cin:\n");
	scanf("%s",bc[n_compt].cin);
	printf("saisir votre nom :\n");
	scanf("%s",bc[n_compt].nom);
	printf("saisir votre prenom :\n");
	scanf("%s",bc[n_compt].prenom);
	printf("saisir votre montant:\n\n");
	scanf("%d",&bc[n_compt].montant);
    printf("CIN : %s\n",bc[n_compt].cin);
    printf("NOM : %s\n",bc[n_compt].nom);
    printf("Prenom : %s\n",bc[n_compt].prenom);
    printf("Montant : %d\n",bc[n_compt].montant);
	
	n_compt++;
	
	}

	printf("les comptes ont etes cree avec succees \n\n");
}

void retrait(){// pour retirer largent;
	
        int i , usermontant ;
        char usercin[15];
        int conter = n_compt ;

        printf("entrer la valeur de cin: ");
        scanf("%S", &usercin );
 
    for ( i = 0 ; i < conter ; i++){

        

          if(strcmp(bc[i].cin , usercin) == 0 ){

            printf("entrer la valeur de montant : ");
            scanf("%d",&usermontant);


          if(bc[i].montant < usermontant){
              printf("ce montant est tres gros que largent qui dans ton compt");
          }

            bc[i].montant -= usermontant;
            printf("%d",bc[i].montant);
            break ;
    }   
}	
}

void depot(){// pour depot() largent;
	
        int i , usermontant ;
        char usercin[15];
        int conter = n_compt ;

        printf("entrer la valeur de cin: ");
        scanf("%S", &usercin );
 
    for ( i = 0 ; i < conter ; i++){

        

          if(strcmp(bc[i].cin , usercin) == 0 ){

            printf("entrer la valeur de montant : ");
            scanf("%d",&usermontant);

            bc[i].montant += usermontant;
            printf("%d",bc[i].montant);
            break ;
    }   
}	
}
	
  

int main()
{
	int choix;
	reto:
	printf("            menu :          ");
	printf("\n\n Bonjour qu'est-ce que vous voulez : \n");
    printf("1 .Creer un compte \n");
    printf("2 .Introduire plusieur comptes bancaires :\n");
    printf("3 .Operations :  \n");
    printf("4 .Affichage  \n");
    printf("5 .Fidelisation  \n");
    printf("6 .Quitter  \n\n\n");
    printf("saisir le chois:");
	scanf("%d",&choix);
	
	switch(choix)
	{
		
		case 1:
		   creatcompt();
		   goto reto;
		break;
		
		case 2:
		   creatncompt();
		   goto reto;
		break;
		
		case 3:
			
		printf("\n\n * 3. Operations  *\n\n");
        int menuOperations ;

        printf("1. Retrait \n\n");
        printf("2. Depot \n\n");
        printf("3. retour a menu \n\n");

        printf("donnez choix : ");
        scanf("%d", &menuOperations);


        switch (menuOperations){
        case  1:
            retrait();
            goto reto;
            break;
        case  2:
            depot();
            goto reto;
            break;
        case  3:
            goto reto;
            break;
        default:
            printf("votre choix doit etre compris entre ( 1 et 3 )  : ");
            goto reto;
            break;
        };
		break;
		
			case 4:
		     depot();
		     goto reto;
		break;
		
		default:
			printf("ce chois nest pas deriger");
		}
		
		//afichage
//	int i,j,j;
//	
//		for (i=0;i<x;i++){
//		
//		for (k=0;l<x+1;k++)
//			
//			j=T[k];
//			T[i]=T[k+1];
//			T[k+1]=j;
//		}
//					
//	}

	
	return 0;
}
