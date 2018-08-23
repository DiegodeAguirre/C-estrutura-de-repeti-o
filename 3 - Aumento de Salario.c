#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

	//declaraçao das variaveis reais
	float salario, aumento, novosal;
	
	//Entrada do valor de salario
	printf("________________________________________________________________________________");
	printf("\nDigite seu salario: ");
	scanf("%f", &salario);
	
	if(salario <= 300)//teste para salario menor ou igual a 300
	{
		
		aumento = salario * 35/100;
		novosal = aumento + salario;
		printf("________________________________________________________________________________");
		printf("\nSeu aumento e de: %.f\n\n\n", novosal);
		printf("________________________________________________________________________________");
	}
	else
		if(salario > 300)//teste para salario maior que 300
		{//inicio
			aumento = salario * 15/100;
			novosal = salario + aumento;
			printf("________________________________________________________________________________");
			printf("\nSeu aumento e de: %.f\n", novosal);
			printf("________________________________________________________________________________");
		}//fim
		
	system("PAUSE");
    return 0;
}
