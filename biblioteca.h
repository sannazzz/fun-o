void soma(int num1, int num2){
	int total;
total=num1+num2;
}
void subtracao(int num1, int num2){
	int total;
	total=num1-num2;
}
void multiplicacao(int num1, int num2){
	int total;
	total=num1*num;
}
void divisao(int num1, int num2){
	float total;
	while(num2==0){
		printf("Nao e possivel dividir por 0\n");
		printf("Digite um novo valor: \n");
		scanf("%d",&num2);
	}
	total=num1/num2;
	printf("total divisao: %.2f\n",total);
}
