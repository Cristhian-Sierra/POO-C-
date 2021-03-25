#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
class Factorial{
	private:
		int num,i;
	long 	double factorial;
		
		public:
	void Entrada();
void Proceso();
void Salida();
Factorial();
~Factorial();
};

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
Factorial::Factorial(){
	cout<<" Construyendo "<<endl;
	factorial=1;
	i=1;
}

Factorial::~Factorial(){
	cout<<" Destruyendo"<<endl;
}
	void Factorial::Entrada(){
		
		cout<<" Digite un numero "<<endl;
			cin>>num;
	}
	void Factorial::Proceso(){
		for(i=1;i<=num;i++){
			factorial*=i;
		}
	}
	void Factorial::Salida()
{cout<<" El factorial del numero " << num << " es " <<factorial<<endl;
	
			;
	
	}	
