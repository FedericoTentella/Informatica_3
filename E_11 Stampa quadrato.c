#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	int i;
	int k;
	do{
		printf("Inserisci lato tra 2 e 20:");
		scanf("%d",&n);
	}while(n<2 || n>20);
	i=0;
	while(i<n) {
		printf("*");
		k=0;
		while(k<(n-1)) {
			if((i=0) || (i=n-1)) {
				printf(" ");
			}else{
				printf("*");
			}
			k++;
		}
		printf("\n");
		i++;
	}
}
