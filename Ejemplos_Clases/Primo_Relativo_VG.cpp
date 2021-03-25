#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

class primrelat{
	int a,b,c,i;
	public:
	void Entrada();
	void Proceso();
	void Salida();
	
	
};
void primrelat::Entrada(){

		cout<<" Digite primer numero "<<endl;
		cin>>a;
		cout<<" Digite segundo numero "<<endl;
		cin>>b;
	
}
	void primrelat::Proceso(){
	
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
	

	}
	void primrelat::Salida(){
		
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
	cout<< "\nLos numeros " <<a << " y "<<b<< " son primos relativos " <<endl;	
	}else{
			cout<< "\Los numeros " <<a << " y "<<b<< " no son primos relativos " <<endl;
	}
	
	}
	
	int main(){
		primrelat pr;
		pr.Entrada();
		pr.Proceso();
		pr.Salida();
	}
	
