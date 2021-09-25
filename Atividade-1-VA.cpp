#include<stdio.h>
#include<stdlib.h>

typedef struct boleto {
	int dia;
	int mes;
	int ano;
	double valor;
	struct boleto * proximo;
	char situacao;
}t_boleto;

int main(){
	
	t_boleto * ini_boleto;
	t_boleto * proximo_boleto;
	
	ini_boleto = (t_boleto *)malloc(sizeoff(t_boleto));
	if (ini_boleto == NULL)
		exit(1);
		proximo_boleto = ini_boleto;
	
	while(1){
	 printf("Digite o dia de vencimento: \t");
	 scanf("%d", &proximo_boleto->dia);
	 
	 printf("\n\nDigite o mes de vencimento: \t");
	 scanf("%d", &proximo_boleto->mes);
	 
	 printf("\n\nDigite o ano de vencimento: \t");
	 scanf("%d", &proximo_boleto->ano);
	 
	 printf("\n\nDigite o valor: \t");
	 scanf("%lf", &proximo_boleto->valor);
	 
	 printf("Digite o dia de vencimento: \t");
	 scanf("%c", &proximo_boleto->situacao);
	}
	
	proximo_boleto->proximo = NULL;
	proximo_boleto = ini_boleto;
	while(proximo_boleto != NULL) {
		printf("Dia: \t %d /\t %d/ \t %d\n valor de: %lf \n Situacao: \t %c", proximo_boleto->dia, proximo_boleto->mes, proximo_boleto->ano, proximo_boleto->valor, proximo_boleto->situacao);
		proximo_boleto = proximo_boleto->proximo;
	}
	
	
	return 0;
}
