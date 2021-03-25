#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 

class MayCadena{
	private:
		char cadena[50];
		int cadenaen[50],cadenaen2[50];
		char cadenainv[50];
	int i,j,aux;
	int k,l;
		public:
		void Entrada();
		void Proceso();
		void Salida();
		MayCadena();
		~MayCadena();
};
MayCadena::MayCadena(){
	cout<<" Construyendo... "<<endl;
	i=0;
	j=0;
	aux=0;
	k=0;
	l=0;
	cadena[50]='\0';
	cadenainv[50]='\0';
	for(i=0;i<50;i++){
		
	cadena[i]=cadenainv[i]='\0';}
}
		MayCadena::~MayCadena(){
		
			cout<<"\nDestruyendo "<<endl;
			
		}
		void MayCadena::Entrada(){
			
			cout<< " Digite cadena "<<endl;
			cin.getline(cadena,50,'\n');
			cadenainv[i]=cadena[i];
		}
		void MayCadena::Proceso(){
/*for(i=0;i<50;i++){
cadenaen[k]=cadena[i];	
}		
for(i=0;i<50;i++){

cadenaen2[k]=cadenainv[i];}*/
aux=0;
	for(i=0;i<50;i++)
	for(j=i;j<50;j++)
if(cadena[i]>cadena[j]){
	aux=cadena[i];
	cadena[i]=cadena[j];
	cadena[j]=aux;
}}

void MayCadena::Salida(){
	
		cout<<"\nLa cadena de menor a mayor es : "<<endl;
	for(i=0;i<50;i++){
	
	cout<<cadena[i];}
	cout<<"\n";
}

 int main() {
 
setlocale(LC_ALL, "spanish");
//código del programa
MayCadena MayCad;
MayCad.Entrada();
MayCad.Proceso();
MayCad.Salida();
system("pause");
return 1; 
}
