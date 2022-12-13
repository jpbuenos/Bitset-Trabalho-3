#ifndef SET_H
#define SET_H

typedef struct SET 
{
	size_t numero_de_elementos;
	int valor_maximo;
	float densidade;
	int *pset;	
}Set;

Set *readSet(FILE*);
Set *emptySet();
void writeSet(FILE*, Set*);
void unionSet(Set*, Set*, Set*); 
void intersecSet(Set*, Set*, Set*);
#endif


