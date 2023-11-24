#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"
#include<locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n1;
	int n2;
	int opera;
	int conta;
	int total;
	conta = 1;
	while (conta=1){
		printf("\nOPERAÇÕES\nSOMA[1]\nSUBTRAÇÃO[2]\nMULTIPLICAÇÃO[3]\nDIVISÃO[4]\n:");
		scanf("%d", &opera);
		printf("\nDigite o primeiro número:");
		scanf("%d", &n1);
		printf("\nDigite o segundo número:");
		scanf("%d", &n2);	
		switch(opera){
			case 1:
				total=n1+n2;
				break;
			case 2:
				total=n1-n2;
				break;
			case 3:
				total=n1*n2;
				break;
			case 4:
				total=n1/n2;
				break;
		}
		if(opera>4){
			printf("\nDigite uma operação que exista");
		}
		else if(opera<1){
			printf("\nDigite uma operação que exista");
		}
		printf("\nTotal da operação:%d", &total);
		printf("\nDeseja fazer outra operação:\nSim[0]\nNão\n: ");
		scanf("%d", &conta);
