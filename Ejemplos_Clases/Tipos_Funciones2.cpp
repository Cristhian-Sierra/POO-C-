#include <iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;
class uno{
	public:
	void Entrada(char frase[]);
	void Salida(char cad[]);
};
void uno::Entrada(char frase[]){

	cout<<" Digite una frase " <<endl;
gets(frase);
	
}

	void uno::Salida(char cad[]){
		cout<<"\nLa cadena es "<<endl;
	
			for(int i=0;cad[i];i++){
		cout<<cad[i]<< " ";
		}
	
		
	}
	int main(){
		uno u;
	char arreglo [10];
		u.Entrada(arreglo);
		u.Salida(arreglo);
		
	}
