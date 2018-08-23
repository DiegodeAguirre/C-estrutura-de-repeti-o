#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    float n1, n2, md, diferenca, produto, divisao;
    int op;
    
    //Entrada dos valores
    printf("Digite 1o Valor: ");
    scanf("%f", &n1);
    printf("Digite 2o Valor: ");
    scanf("%f", &n2);
    system("cls");
    
    //Tabela para escolha das opçoes 
    printf("\n\t\t\t\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb");
    printf("\n\t\t\t\xDb 1-A MEDIA DOS NUMEROS DIGITADOS       \xDb");
    printf("\n\t\t\t\xDb 2-DIFERENCA DO MAIOR PELO MENOR       \xDb");
    printf("\n\t\t\t\xDb 3-PRODUTO ENTRE OS NUMEROS DIGITADOS  \xDb");
    printf("\n\t\t\t\xDb 4-DIVISAO DO PRIMEIRO PELO SEGUNDO    \xDb");
    printf("\n\t\t\t\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb\xDb");
    //Entrada de qual opçao
    printf("\n\t\t\tEscolha uma Opcao: ");
    scanf("%d", &op);
    //teste para saber qual opçao o usuario digitou
    if(op == 1)//A media dos numeros digitados
	{//inicio
		md = (n1 + n2)/2;
		printf("\nA media e: %.f\n\n\n", md);
    }//fim
    else
    	if(op == 2)// A diferença do maior pelo menor
		{//inicio da opcao 2
			if(n1 > n2)//Acha o maior 1º numero digitado
			{
				diferenca = n1 - n2;
				printf("A diferenca e: %.f\n\n\n", diferenca);
			}
			else
				if(n2 > n1)//Acha o maior 2º numero digitado
				{
					diferenca = n2 - n1;
					printf("A diferenca e: %.f\n\n\n", diferenca);
				}
				else
					if((n1 == n2)&&(n2==n1))//Acha se os numeros forem iguais
					{
						printf("\nNumeros sao IGUAIS !!!\n\n\n");
					}
    	}//fim da opcao 2
    	else
			if(op == 3)//produto entre os numeros digitados	
    		{//inicio
    			produto = n1 - n2;
    			printf("\nO produto e: %.f\n\n\n", produto);
    		}//fim
    		else
    			if(op == 4)//divisao do primeiro pelo segundo
    			{//inicio
    				if(n2 == 0)//segundo numero nao pode ser ZERO
					{
						printf("Nao Pode dividir por ZERO!!!\n\n\n");
    				}
    				else
    					divisao = n1 / n2;
    					printf("\nA divisao e: %.f\n\n\n", divisao);
    			}//fim
    else
    	printf("\nERRO Digite de 1 a 4\n\n\n\n\n");
    system("PAUSE");
    return 0;
}

