#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario, gastos;
	
	printf("Informe seu salário: R$");
	scanf("%f", &salario);
	
	printf("Informe seus gastos: R$");
	scanf("%f", &gastos);
	
	if(gastos <= salario){
		printf("Gastos dentro do orçamento\n");
		printf("Sobra: R$%.2f", (salario - gastos));
	}else{
		printf("Orçamento estourado\n");
		printf("Falta: R$%.2f", (salario - gastos));
	}
	
return 0;
}
