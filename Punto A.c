#include <stdio.h>
#include <stdlib.h>

int suma(int a,int b){
	return a+b;
}
	
void resta(int a,int b){
	int s;
	s=a-b;
	printf("El resultado de la resta es %d\n",s);
}

float divi(int a,int b){
	float n1,n2;
	n1=a;
	n2=b;
	return n1/n2;
}

int main() {
	int n1,n2,o,r;
	float rf;
	printf("Ingrese un numero: ");
	scanf("%d",&n1);
	printf("Ingrese otro numero: ");
	scanf("%d",&n2);
	system("CLS");
	printf("Numero 1: %d\n",n1);
	printf("Numero 2: %d\n",n2);
	printf("Elija una opcion:\n");
	printf("1-Sumar \n2-Restar \n3-Multiplicar \n4-Dividir\n");
	scanf("%d",&o);
	if(o==1){
		r=suma(n1,n2);
		printf("El resultado de la suma es %d\n",r);
	}
	if(o==2){
		resta(n1,n2);
	}
	if(o==3){
		r=n1*n2;
		printf("El resultado de la multiplicacion es %d\n",r);
	}
	if(o==4){
		rf=divi(n1,n2);
		printf("El resultado de la division es %.2f",rf);
	}
	return 0;
}
