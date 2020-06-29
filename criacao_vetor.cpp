#include<stdio.h>

/*
	Romario F.  Data: 29/06/2020
	
	criando um vetor char em linguagem C e addicionando 
	dados pelo teclado,depois exibindo o resultado do 
	ultimo nome digitado para o primeiro.
	
*/

int main(){
	
	//variaveis
	int caracter = 20;
	int nomes = 10;  
	char lista_nomes[caracter][nomes];
	
	printf("*Lista de nomes, digite %d nomes e aperte a tecla Enter*\n",nomes);
	for(int i=1; i<=nomes; i++){
		printf("nome %d : ",i);
		scanf("%s",lista_nomes[i]); // o vetor ja e o propio ponteiro
		fflush(stdin); //limpa o buffer do teclado
	}
	printf("\n\n");
	
	printf("*Os nomes digitados de tras para frente*\n");
	for(int j=10; j>=1; j--){
		printf("%d nome digitado: %s\n",j,lista_nomes[j]);
				
	}
		
}
