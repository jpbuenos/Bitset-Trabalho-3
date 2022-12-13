#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	for(i = 0; i < 200; i++)
   		x[i] = 0; 
	while(1)
	{
		y = 0;
		printf("Digite um número entre 0 e 5000: ");
		scanf("%d",&y);
		
		if(y == -1)
		{
			break;		
		}		
		else if(y > 5000 || y < 0)
		{
			return EXIT_FAILURE;
		}		
		else
		{
			// z = posição do vetor
			z = y / 32;
			// k -> offset
			k = y % 32;
			// valor vai receber valor or deslocamento
			x[z] = x[z] | (1 << k);
		} 
	}
	
	for (i = 0; i < 200; i++)
	{
		for(j = 0; j < 32; j++)
		{
			w = x[i] & (1 << j);
			if(w)
			{
				printf("%d, \n", (i*32) + (j));		
			}
		
		}
	}
	return 0;
}

