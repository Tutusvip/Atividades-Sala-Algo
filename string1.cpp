#include <stdio.h>
#include <string.h>

int main(){
	char nome[10], senha[10], senhaRepeticao[10];
	char sexo[10];

	printf("Digite a senha: ");
	scanf("%s", &senha);
	printf("Qualidade de caracteres: %d", strlen(nome));
	scanf("%s", &senhaRepeticao);
	
	printf("STRCMP: %d\n", strcmp(senha, senhaRepeticao));
	if (strcmp(senha, senhaRepeticao) == 0 )
	printf("Senhas iguais");
	else printf ("Senhas diferentes");
	
	
	if(strcmp(sexo, "Feminino") == 0)
		printf("Realmene o usuario digitou feminino");
	
} 
