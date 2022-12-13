#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	int y;
	int z;
	int k;
	int w;
	int j;
	int i;

	y = 0; 	
	printf("Digite número(s) entre 0 e 31, para printar-los digite -1:\n" );

	while(x != -1){ 
		scanf("%d",&x);
		
		if(x == -1){
			continue;
			}
		y = y | (1 << x); 
	}
	
	for(k = 0; k < 32; k++){
		w = y & (1 << k);
			
			if(w){
				printf("%d\n", k); 
			}
	}
	
	return 0;  
}
	
//"x" armazena a quantidade de deslocamentos.
//"y" armazena todos os bits deslocados.
//"k" pega números de 0 a 31 e verifica com o y. 
//"w" recebe a verificação.
//no final, w será printado ao receber -1.  
	
