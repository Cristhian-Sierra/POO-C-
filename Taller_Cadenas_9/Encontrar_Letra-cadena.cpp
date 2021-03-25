#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 

class CadenaLetra{

	char Cadena[30],letra;
	int i,espacios,contletra;
	public: void Entrada();
	void Proceso(	char[],char);
	void Salida(char[],char);

};

void CadenaLetra::Entrada(){
	char Cadena[30],letra;
	cout<<" Digite cadena "<<endl;
	cin.getline(Cadena,30,'\n');
	cout<<" Digite letra para saber si se encuentra en la cadena "<<endl;
	cin>>letra;
	Proceso(Cadena,letra);
}

	void CadenaLetra::Proceso(char Cadena[],char letra){
		int contletra=0;
		int espacios=0;
		for(i=0;i<30;i++){
			if(letra==Cadena[i]){
				contletra++;
			}
		}
			for(i=0;i<30;i++){
	if(Cadena[i]== ' '){
	espacios++;	
	}
	}
	Salida(Cadena,letra);
	
	}
void CadenaLetra::Salida(char Cadena[],char letra){
	
		cout<<"\nletra "<< letra<<" Si se encuentra en la cadena un total de  "<<contletra<< " veces "<<endl;
	
				cout<<"\nse encuentra en las posciones  "<<endl;
		for(i=0;i<30;i++){
			if(letra==Cadena[i]){
			cout<<i<<endl;
			}
		}
}
int main() {

setlocale(LC_ALL, "spanish");
//código del programa
CadenaLetra Cl;
Cl.Entrada();

system("pause");
return 1; 
}


