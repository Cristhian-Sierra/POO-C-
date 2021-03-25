#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
class SumChar{
	private: 
	char cadena[50];
	int cadenaen[50];
int i;
	int k;
	int sum;
	int sumbit;
	int bit;
	public:
		void Entrada();
		void Proceso();
		void Salida();
		SumChar();
		~SumChar();
};

SumChar::SumChar(){
cout<< " Construyendo... "<<endl;
cadena[50]='\0';
i=0;
k=0;
sum=0;
bit=8;
sumbit=0;
	}
SumChar::~SumChar(){
cout<<" Destruyendo... "<<endl;}
void SumChar::Entrada(){
	cout<<" Digite cadena " <<endl;
	cin.getline(cadena,50,'\n');
}

void SumChar::Proceso(){
	
	for(i=0;i<50;i++){
cadenaen[k]=cadena[i];	
sum+=cadenaen[k];

}		
	for(i=0;i<50;i++){
sumbit=cadena[i]+bit;
}		


}
void SumChar::Salida(){
	cout<< " La suma total de la cadena es "<<sum<<endl;
cout<<" La longitud de sus bits es  "<<sumbit<<endl;

}

int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
SumChar Sc;
Sc.Entrada();
Sc.Proceso();
Sc.Salida();


system("pause");
return 1; 
}
