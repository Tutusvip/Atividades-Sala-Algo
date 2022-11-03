#include <stdio.h>
#include <string.h>

int main(){
	char stringA[10], stringB[10];
	scanf("%s", &stringA);
	scanf("%s", &stringB);
	printf("%d", strcat(stringA, stringB));

} 
