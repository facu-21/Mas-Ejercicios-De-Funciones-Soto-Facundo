#include <stdio.h>

float dsc(int c,float p){
	p=c*p;
	if(c>6){
		if(c>12){
			return p-(p/10);
		}
		else{
			return p-(4*p/100);
		}
	}
	return p;
}
int main() {
	int c;
	float p;
	printf("Ingrese cantidad de unidades: ");
	scanf("%d",&c);
	printf("Ingrese el precio unitario: ");
	scanf("%f",&p);
	p=dsc(c,p);
	printf("El precio final es %.2f\n",p);
	return 0;
}
