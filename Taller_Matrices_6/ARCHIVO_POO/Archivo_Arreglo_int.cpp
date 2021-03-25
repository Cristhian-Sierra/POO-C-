#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
#include <fstream>
using namespace std;

class Archivoint{
	private:
int *vec;
int i;
int tam;
int sumvec;
public:
void Entrada();
void Proceso();
void Salida();
Archivoint();
~Archivoint();
};
Archivoint::Archivoint(){
cout<<" Construyendo... "<<endl;
i=0;
sumvec=0;

cout<<" Digite tamaño del vector "<<endl;
 cin>>tam;
 	while(tam<=0){
 			cout<<" Error, digite tamaño mayor a 0 "<<endl;
 		cin>>tam;
		 }
 			vec= new int[tam];
		 	if(tam==NULL){
 			cout<<" Error en la asignacion dinamica de memoria "<<endl;
		 }
		 	for(i=0;i<tam;i++){
 			vec[i]=0;
		 }
	 }
	Archivoint::~Archivoint(){
		cout<<" Destruyendo... "<<endl;
		delete vec;
	}
	void Archivoint::Entrada(){
	ofstream guardarinfo("blog.txt");
		for(i=0;i<tam;i++){
			cout<<" Digite posicion "<<i<< " del arreglo "<<endl;
		guardarinfo<<vec[i];
		}
		
	}
	void  Archivoint::Proceso(){
		
			
		for(i=0;i<tam;i++){
			sumvec+=vec[i];
		}
		}
		

	void Archivoint::Salida(){
		ifstream mostrarinfo("blog.txt");
		while(!mostrarinfo.eof()){
	cout<<"\nEl vector original es "<<endl;
		for(i=0;i<tam;i++){;
	mostrarinfo>>vec[i];
		}
cout<< "\nLa suma de sus elementos es " <<endl;
mostrarinfo>>sumvec;
		}}

int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
Archivoint ai;
ai.Entrada();
ai.Proceso();
ai.Salida();

system("pause");
return 1; 
}
