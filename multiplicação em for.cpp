#include <stdio.h>

int main(){
	int i,valor, rs;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	

	
	for(i=1;i<11;i++){
	rs=valor*i;
	printf("\n%d X %d = %d", valor , i, rs);
		
	}
	
	printf("\n--------------------------------");
	printf("\n\tFIM DO CODIGO");
	return (0);	
 }
