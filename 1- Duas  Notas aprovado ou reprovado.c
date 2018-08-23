#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    float n1, n2, media;
    
    //Entrada de valor Nota 1 e Nota2
    system("color B9"); 
    printf("________________________________________________________________________________");
    printf("\nDigite a 1a Nota: ");
    scanf("%f", &n1);
    printf("________________________________________________________________________________");
    printf("\nDigite a 2a Nota: ");
    scanf("%f", &n2);
    //Achei a Media das Notas
    media = ((n1 + n2) / 2);
    //Teste de Reprovado Exame e Aprovado
    if((media >= 0)&&(media < 4))
    {//inicio
     printf("________________________________________________________________________________");
     printf("\nREPROVADO");         
             
    }//fim
    else
        if((media >= 4) &&(media < 7))
        {//inicio
              printf("________________________________________________________________________________");
            printf("\nEXAME");
        }//fim
        else
            if((media >= 7)&&(media <= 10))
            {//inicio
                 printf("________________________________________________________________________________");       
               printf("\nAPROVADO PARABENS !!!");       
                      
            }//fim
    
    getche();
    return 0;
}//FIM
    
    
    
