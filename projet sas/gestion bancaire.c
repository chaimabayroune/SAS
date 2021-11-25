#include<stdio.h>
#include <string.h>

 

  struct compte {
	
 	     char cin[10];
   	     char nom[15];
         char prenom[15];
         int montant;
      
   };


     struct compte bc[100];

         int n_compte = 0 ;

     void creatcompte(){     	
    
	         printf("\n saisir votre cin:\n");
	         scanf("%s",bc[n_compte].cin);
             printf("saisir votre nom :\n");
	         scanf("%s",bc[n_compte].nom);
	         printf("saisir votre prenom :\n");
	         scanf("%s",bc[n_compte].prenom);
	         printf("saisir votre montant:\n");
	         scanf("%d",&bc[n_compte].montant);
	         printf("le compte a ete cree avec succee \n\n");

	 n_compte++;
	
}
	
     void creatncompte(){  
	
    	 int i,a;   
	
	         printf("donner le nombre de compte vous voulez creer : ");
	         scanf("%d",&a);
	
	     for (i=0;i<a;i++)
	{
	         printf("saisir votre cin:\n");
	         scanf("%s",bc[n_compte].cin);
	         printf("saisir votre nom :\n");
	         scanf("%s",bc[n_compte].nom);
	         printf("saisir votre prenom :\n");
	         scanf("%s",bc[n_compte].prenom);
	         printf("saisir votre montant:\n\n");
	         scanf("%d",&bc[n_compte].montant);
             printf("CIN : %s\n",bc[n_compte].cin);
             printf("NOM : %s\n",bc[n_compte].nom);
             printf("Prenom : %s\n",bc[n_compte].prenom);
             printf("Montant : %d\n",bc[n_compte].montant);
	
	 n_compte++;
	
	}

	         printf("les comptes ont etes cree avec succees \n\n");
}

     void retrait(){
	
         int i , usermontant ;
         char usercin[15];
         int conteur = n_compte ;

             printf("entrer la valeur de cin: ");
             scanf("%S", &usercin );
 
     for ( i = 0 ; i < conteur ; i++){

         if(strcmp(bc[i].cin , usercin) == 0 ){

             printf("entrer la valeur de montant : ");
             scanf("%d",&usermontant);

         if(bc[i].montant < usermontant){
         	
             printf("ce montant est tres gros que largent qui dans ton compte");
          }

                  bc[i].montant -= usermontant;
                 printf("%d",bc[i].montant);
                 break ;
    }   
}	
}

     void depot(){
	
         int i , usermontant ;
         char usercin[15];
         int conteur = n_compte ;

             printf("entrer la valeur de cin: ");
             scanf("%S", &usercin );
 
     for ( i = 0 ; i < conteur ; i++){
     	
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
		 	
		      creatcompte();
		     goto reto;
		 break;
		
		 case 2:
		 	
		     creatncompte();
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
             
        }
		break;
		
		case 4:
	     
	     goto reto;
		break;
		
		default:
			printf("ce choix n est pas deriger");
			break;
		}
		
	
	return 0;
}
