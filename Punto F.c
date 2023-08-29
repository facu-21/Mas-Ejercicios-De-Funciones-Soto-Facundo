#include <stdio.h>

void mes(int n){
	if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
		printf("El mes ingresado tiene 31 dias\n");
	}
	else{
		if(n!=2){
			printf("El mes ingresado tiene 30 dias\n");
		}
		else{
			printf("El mes ingresado tiene 29 dias en años bisiestos y 28 dias en años no bisiestos\n");
		}
	}
}
int main() {
	int n;
	printf("Ingrese el numero de un mes: ");
	scanf("%d",&n);
	mes(n);
	return 0;
}
