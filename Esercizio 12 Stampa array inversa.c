#include<stdio.h>
#include<stdlib.h>
main()
{
	int x;
	int numeri[10];
	printf("Inserisci un array di 10 numeri\n");
	for(x=0;x<10;x++){
		printf("Inserisci numero: ");
		scanf("%d",&numeri[x]);
	}
	printf("\nStampa array al contrario:\n");
	for(x=9;x>=0;x--){
		printf("%d\n",numeri[x]);
	}
}
