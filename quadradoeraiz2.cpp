#include <stdio.h>
#include <math.h>

int main(){

	int numero,quadrado;
	float raiz;
	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	if (numero > 0){
		quadrado=pow(numero,2);
		raiz=sqrt(numero);
		printf("Numero Digitado %d\nQuadrado %d\nRaiz %f\n", numero, quadrado,raiz);
		}
		else
		printf("ERRO");
	return (0);	
 }
 
 
