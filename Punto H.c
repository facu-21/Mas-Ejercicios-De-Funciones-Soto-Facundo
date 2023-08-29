#include <stdio.h>

float op(int n){
	return n*n-n*2;
}
int main() {
	int n;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	n=op(n);
	printf("El resultado de restar el doble del numero a su cuadrado es %d\n",n);
	return 0;
}
