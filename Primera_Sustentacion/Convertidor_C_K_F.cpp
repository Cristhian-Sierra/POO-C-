#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 

class Grados{
	
	private: 
	double ncent,kelvin,Conkel,Confh;
	public: 
	void Entrada();
	void Proceso();
	void Salida ();
	Grados();
	~Grados();
	
};

	Grados::Grados(){
		cout<<" Construyendo..."<<endl;
		Conkel=0.0;
		Confh=0.0;
	kelvin=273.15;
	}
	Grados::~Grados()
{ cout<<" Destruyendo..."<<endl;} 


void Grados::Entrada(){
	cout<<" Digite numero en grados centigrados "<<endl;
	cin>>ncent;
	
	
}

void Grados::Proceso(){
Conkel=ncent+kelvin;
Confh=(ncent*9/5)+32;

}
void Grados::Salida(){
	cout<<" El valor de "<<ncent<< " en Kelvin es:"<<Conkel<<endl;
	cout<<" El valor de "<<ncent<< " en Farenheit es:"<<Confh<<endl;
	
	
}
int main() {
 
setlocale(LC_ALL, "spanish");
//código del programa
Grados conv;
conv.Entrada();
	conv.Proceso();
	conv.Salida();
system("pause");
return 1; 
}
