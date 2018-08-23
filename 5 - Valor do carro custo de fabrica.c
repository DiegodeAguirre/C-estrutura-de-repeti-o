#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

	float custo, preco, distribuidor, imp;
	
	//Entrada do valor
	printf("Digite o valor do Custo de Fabrica: ");
	scanf("%f", &custo);
	
	if(custo < 12000)
	{//inicio
		preco = custo + (custo * 5)/100;
	}//fim
	else
		if((custo >= 12000)&&(custo <= 25000))
		{//inicio
			preco = (custo + (custo * 10)/100) +((custo * 15)/100);
		}//fim
		else
			preco = (custo + (custo * 15)/100) +((custo * 20)/100);
	
	printf("\nO valor final do carro: %.f\n\n\n", preco);
	
	getche();
	return 0;
}


