int main() {
	char Nom[25];
	char Prenom[30];
	int Age;
	char NumTele[25];
	char Sexe[8];
	printf("entrer la valeur Nom:");
	scanf("%s",Nom);
	printf("entrer la valeur Prenom:");	
	scanf("%s",Prenom);
	printf("entrer la valeur Age:");
	scanf("%d",&Age);
	printf("entrer la valeur NumTele:");
	scanf("%s",NumTele);
	printf("entrer la valeur Sexe:");
	scanf("%s",Sexe);
	//affichage
	printf("Hi %s %s votre Age: %d votre NumTele: %s votre Sexe: %s",Nom,Prenom,Age,NumTele,Sexe);
	return 0;
  }
  
