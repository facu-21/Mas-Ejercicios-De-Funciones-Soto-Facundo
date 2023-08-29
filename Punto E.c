#include <stdio.h>

void ast(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int n;
	printf("Ingrese una cantidad de lineas de asteriscos: ");
	scanf("%d",&n);
	ast(n);
	return 0;
}
