// Lembrado que o intuito desse programa � s� mostrar e testar as funcionalidades
// O foco principal � transformar os codigos originais na Lingua portuguesa.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "minhabiblioteca.h"


INTEIRO PRINCIPAL(){
	IDIOMA(PORTUGUES);
	INTEIRO x;
	
	
	ENQUANTO((x!=1) E (x!=2) E (x!=3)){
		ESCREVA("INSIRA UMA SAUDACAO:\n 1 - Bom dia\n 2 - Boa tarde\n 3 - Boa noite ");
			LEIA("\n %i",&x);
		ESCOLHA(x){
		   	CASO 1:
			   	ESCREVA("Voc� escolheu: Bom dia!");
			   		PARAR;
		   	CASO 2:
			   	ESCREVA("Voc� escolheu: Boa tarde!");
			   		PARAR;
			CASO 3:
			   	ESCREVA("Voc� escolheu: Boa noite!");
			   	   	PARAR;
	   	    CASO_CONTRARIO:
		  	   	ESCREVA("INSIRA UM VALOR V�LIDO!"); // Ao ser inserido um valor diferente de 1,2 ou 3 ele n�o sai do loop
				   	PARAR;	
			
		}
		ESCREVA("\n\n");
		PAUSA;
		LIMPATELA;
	}
	
	/*--------------------------------------------------------------------*/
	
	INTEIRO n1,n2;
	ESCREVA("\n\n\n ---------- Agora vamos somar ----------\nInsira dois valores: ");
	LEIA("\n %i",&n1);
	LEIA("\n %i",&n2);
	LIMPATELA;
	ESCREVA("\n\n O resultado da soma �: %i ",n1+n2);
	ESCREVA("\n\n");
	PAUSA;
	LIMPATELA;
	/*--------------------------------------------------------------------*/
	
	
	//� positivo ou negativo? 
	INTEIRO testecondicao;
	ESCREVA("\n\n\n� POSITIVO OU NEGATIVO? \nInsira um valor: ");
		LEIA("\n %i",&testecondicao);
	LIMPATELA;	
	
	SE(testecondicao>=0){
		ESCREVA("O numero %i � positivo.",testecondicao);
	}SENAO{
		ESCREVA("O numero %i � negativo.",testecondicao);
	}
	ESCREVA("\n\n");
	PAUSA;
	
	LIMPATELA;	
	ESCREVA("================================\n");
	ESCREVA("OBRIGADO POR USAR NOSSO SISTEMA!\n");
	ESCREVA("         VOLTE SEMPRE!\n");
	ESCREVA("================================");
	ESCREVA("\n\n");
	PAUSA;
	RETORNA 0;
}