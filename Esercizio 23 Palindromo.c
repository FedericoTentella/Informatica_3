#include<stdio.h>
int main()
{
	char Parola[100];
	int Palindromo;
	int Medio;
	int I;
	int Cont;
	printf("inserisci un nome: ");
	scanf("%s", Parola);
	Cont=0;
	while(Parola[Cont]!='\0'){
		Cont++;
	}
	Cont--;
	I=0;
	Palindromo=1;
	Medio=Cont/2;
	while((I<Medio) && (Palindromo==1)){
		if(Parola[Cont]!=Parola[I]){
			Palindromo=0;
		}
		Cont--;
		I++;
	}
	if(Palindromo==1){
		printf("\nil nome e' palindromo\n");
	}else{
		printf("\nil nome non e' palindromo\n");
	}
}
