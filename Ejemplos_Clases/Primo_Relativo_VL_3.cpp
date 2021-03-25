#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

class primrelat{
	public:
void Entrada(int *,int*);
void Proceso(int *,int *);
  void Salida(int *,int *,int *);
	
	
};
void primrelat::Entrada(int *a,int *b){

		cout<<" Digite primer numero "<<endl;
		cin>>*a;
		
		cout<<" Digite segundo numero "<<endl;
		cin>>*b;

		//Proceso(a,b);
}
	void primrelat::Proceso(int *a,int *b){
		int *c;
		int i;
	for(i=1;i<=*b;i++){
	
	if((*a%i==0)&& (*b%i==0)){
		*c++;
		
	}
	
	
	}
	
	//Salida(a,b,c);	

	}
void primrelat::Salida(int *a,int *b,int *c){
		int i;
		cout<<" Los divisores de "<< *a << " son "<<endl;
	
	
			for( i=1;i<=*a;i++){		
	if(*a%i==0){
		cout<<i<<endl;;
	}
	
	}        	
	
	cout<<" Los divisores de " << *b<< " son " <<endl;

	
			for(i=1;i<=*b;i++){		
	if(*b%i==0){
		cout<<i<<endl;
	}
	
		
	}
	if(*c==1){
	cout<< "\nLos numeros " <<*a << " y "<<*b<< " son primos relativos " <<endl;	
	}else{
			cout<< "\nLos numeros " <<*a << " y "<<*b<< " no son primos relativos " <<endl;
	}
	
	}
	
	int main(){

		primrelat pr;
				int a,b,c;
		pr.Entrada(&a,&b);
		 pr.Proceso(&a,&b);
		pr.Salida(&a,&b,&c);
		return 0;
	}
