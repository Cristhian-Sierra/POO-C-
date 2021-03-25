#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

class primrelat{
	public:
	int Entrada();
int  Proceso(int,int);
int  Salida(int,int,int);
	
	
};
int primrelat::Entrada(){
	int a,b;
		cout<<" Digite primer numero "<<endl;
		cin>>a;
		return a;
		cout<<" Digite segundo numero "<<endl;
		cin>>b;
return b;
		//Proceso(a,b);
}
	int primrelat::Proceso(int a,int b){
		int c;
		int i;
/*	for( i=1;i<=a;i++){		
	if(a%i==0){
		
	}
	}
	
		for( i=1;i<=b;i++){		
	if(b%i==0){
	
	}
	}*/
	for(i=1;i<=b;i++){
	
	if((a%i==0)&& (b%i==0)){
		c++;
		
	}
	
	
	}
	
	//Salida(a,b,c);	
	return c;
	}
int primrelat::Salida(int a,int b,int c){
		int i;
		cout<<" Los divisores de "<< a << " son "<<endl;
	
	
			for( i=1;i<=a;i++){		
	if(a%i==0){
		cout<<i<<endl;;
	}
	
	}        	
	
	cout<<" Los divisores de " << b<< " son " <<endl;

	
			for(i=1;i<=b;i++){		
	if(b%i==0){
		cout<<i<<endl;
	}
	
		
	}
	if(c==1){
	cout<< "Los numeros " <<a << " y "<<b<< " son primos relativos " <<endl;	
	}else{
			cout<< "Los numeros " <<a << " y "<<b<< " no son primos relativos " <<endl;
	}
	
	}
	
	int main(){
		int a,b,c;
		primrelat pr;
		a=pr.Entrada();
		b=pr.Entrada();
		c= pr.Proceso(a,b);
		pr.Salida(a,b,c);
	}
	
