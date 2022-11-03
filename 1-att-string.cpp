#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];
	
	printf("Digite o seu nome:");
	fgets(nome-1, 100, stdin);
	printf("%d", strlen(nome));	
} 
