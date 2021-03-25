#include <stdio.h>

int main(){
	int binario(int);
	int octal(int);
	int n;
	printf("dame el numero a convertir a Binario y Octal ");
	scanf("%d",&n);
	printf("binario = ");
	binario(n);
	printf("\n");
	printf("octal = ");
	octal(n);
}
int binario(int n){
	if(n>1){
		binario(n/2);
	}
	printf("%d",n%2);
}
int octal(int n){
	if(n>=8){
		octal(n/8);
	}
	printf("%d",n%8);
}
