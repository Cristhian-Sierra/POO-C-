#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
class Factorial{
	private:
int n1,n2,i;
int rest;
long long factorial;
public:
void Entrada();
void Proceso();
void Salida();
Factorial();
~Factorial();
};


Factorial::Factorial(){
	cout<<" Construyendo "<<endl;
	factorial=1;
	i=1;
	rest=0;
}

Factorial::~Factorial(){
	cout<<" Destruyendo"<<endl;
}
	void Factorial::Entrada(){
		
		cout<<" Digite primer numero "<<endl;
			cin>>n1;
				while(n1<0){
			cout<< " Error digite numero entero positivo "<<endl;

			cin>>n1;
			
		}
		cout<<"Digite segundo numero "<<endl;
		cin>>n2;
		while(n2<0){
			cout<< " Error digite numero entero positivo "<<endl;

			cin>>n2;
			
		}
	}
	void Factorial::Proceso(){
		if(n1<n2)//si primer numero es menor que el segundo
		{
	rest=n2-n1;
		for(i=n1;i<=rest+1;i++){
		
		for(i=n1;i<=n2;i++){
		
			
		}
			
		}
			}
		else{// si primer numero es mayor que el segundo
		rest=n1-n2;
for(i=n2;i<=rest+1;i++){
	
	for(i=n2;i<=n1;i++){	
			
		}

		}
		
		}}
	void Factorial::Salida()
{
		if(n1<n2)//si primer numero es menor que el segundo
		{

		for(i=n1;i<=rest+1;i++){
		
		for(i=n1
		;i<=n2;i++){
	factorial*=i;	
		cout<<" El factorial de "<<i<< " es "<<factorial<<endl;	
		}
			
		}
			}
		else{// si primer numero es mayor que el segundo
	
for(i=n2;i<=rest+1;i++){
	
	for(i=n2;i<=n1;i++){
factorial*=i;
	
			cout<<" El factorial de "<<i<< " es "<<factorial<<endl;
	
		}

		}
		
		}}
	
int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
Factorial Fac;
Fac.Entrada();
Fac.Proceso();
Fac.Salida();


system("pause");
return 1; 
}	
