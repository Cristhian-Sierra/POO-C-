#include<iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
class uno{
	public:
		int cuadrado(int);
		float cuadrado(float);
		long cuadrado(long);
};
int main(){
	uno u;

int num1=125;
	cout<<" Entero " <<u.cuadrado(num1)<<endl;
	float num2=4.3;
	cout<<" Decimal" <<u.cuadrado(num2)<<endl;
	long num3=1125;
	cout<<" Resultado3 " <<u.cuadrado(num3)<<endl;
	return 0;
}
int uno::cuadrado(int num){
	


	return num *num;
}
		float cuadrado(float m){
		
			return m*m;
		}
		
		long cuadrado(long p){
			
			return p*p;
		}
