#include <stdio.h>
#include <math.h>
main()
{
	int A; //Primo numero//
	int B; //Secondo numero//
	int C; //Variabile temporanea//
	printf("\n Inserisci il primo numero");
	scanf("%d",&A);
	printf("\n Inserisci il secondo numero");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf("\n A= %d",A);
	printf("\n B= %d",B);
}
