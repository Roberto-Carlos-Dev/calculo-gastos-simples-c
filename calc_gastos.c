#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario, gastos;
	
	printf("Informe seu sal�rio: R$");
	scanf("%f", &salario);
	
	printf("Informe seus gastos: R$");
	scanf("%f", &gastos);
	
	if(gastos <= salario){
		printf("Gastos dentro do or�amento\n");
		printf("Sobra: R$%.2f", (salario - gastos));
	}else{
		printf("Or�amento estourado\n");
		printf("Falta: R$%.2f", (salario - gastos));
	}
	
return 0;
}
