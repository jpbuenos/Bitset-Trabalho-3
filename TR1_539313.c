#include<stdio.h>
#include <stdlib.h>

//Criado 5 variáveis para armazenar os bits do print final.

//Count utilizado para localizar as varáveis.

//While vai guardar todos os cálculos de divisão binária até o 0.

//Ao final do while, incrementado o count++ para adicionar 1 ao contador.
    
int main(){
	int n1=0, n2=0, n3=0, n4=0, n5=0;
	int count = 1;
	int x;
	printf("Digite um valor entre 0 e 31: \n");   
	scanf("%d",&x);	
	while(x != 0){
		if(count == 1){
			n1 = x % 2;
		}
		
		else if(count == 2){
			n2 = x % 2; 	
		}
		
		else if(count == 3){
			n3 = x % 2;
		} 
		
   		else if(count == 4){			
			n4 = x % 2;
		}

		else if(count == 5){
			n5 = x % 2;
		}
		x = x/2;
		count ++;
		
	}
	
	printf("%d%d%d%d%d", n5, n4, n3, n2, n1);
	return 0;	
}	
