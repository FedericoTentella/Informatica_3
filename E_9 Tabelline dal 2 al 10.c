#include<stdio.h>
#include<stdlib.h>
int main () {
	int r;
	int tab;
	int i;
	
	tab=2;
	while(tab<=10) {
		i=1;
		while(i<=10) {
			r=tab*i;
			printf (" %d",r);
			i++;
		}
		printf("\n");
		tab++;
	}
}
