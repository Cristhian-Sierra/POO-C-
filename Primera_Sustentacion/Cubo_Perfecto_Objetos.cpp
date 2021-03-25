#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 

class CubPerfec{
	private:
		
	int n,i;	
	int cont;
		public:
			void Entrada();
			void Proceso();
			void Salida();
			CubPerfec();
		  ~CubPerfec();
	
	
	
	
};
CubPerfec::CubPerfec(){
	cout<<" Construyendo..."<<endl;
	cont=0;
	i=0;
	
}
		  CubPerfec::~CubPerfec(){
		  	cout<<" Destruyendo... "<<endl;
		  }
		  
	

void CubPerfec::Entrada(){
	cout<< "\nDigite numero "<<endl;
	cin>>n;
	
}
void CubPerfec::Proceso(){
	for(i=0;i<n;i++){
	
n%10;
n/10;
n%10;
n/10;
n%10;
cont++;

}	
}
	void CubPerfec::Salida(){
		cout<< " numero es "<<cont<<endl; 
		
	}
int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa

CubPerfec cp;
cp.Entrada();
cp.Salida();


system("pause");
return 1; 
}
