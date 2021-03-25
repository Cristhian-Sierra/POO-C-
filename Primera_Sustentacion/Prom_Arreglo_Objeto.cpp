#include <locale.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
class Arreglo{
	
	private:
double *Vec;
int tam, i;
double SumVec=0.0;
double Promvec=0.0;
double contmay=0.0;
double contmen=0.0;
 
	
public:
void LeerArr();
void SumArr();
void Prom();
void MayProm();
void MenProm();
void PosMayo();
void PosMeno();
void Imprimir();
Arreglo();
~Arreglo();
};
Arreglo::Arreglo(){
	cout<<" Construyendo "<<endl;
 SumVec=0.0;
 Promvec=0.0;
 contmay=0.0;
 contmen=0.0;
}
Arreglo::~Arreglo(){
	cout<<" Destruyendo "<<endl;
	delete Vec;
}
void Arreglo::LeerArr(){
	//Iniciar vector
	cout<<" Digite tamaño del vector "<<endl;
	cin>>tam;
		while(tam<=0){

cout<<" Error digite tamaño mayor que 0 " <<endl;
cin>>tam;}
	Vec =new double[tam];

if(tam==NULL){
		cout<<" Error, en asignacion de memoria "<<endl;
	}

	for(i=0;i<tam;i++){
		cout<<" Digite posicion "<<i+1<<" del vector "<<endl;
		cin>>Vec[i];
	}

}
void Arreglo::SumArr() {

		for(i=0;i<tam;i++){
SumVec+=Vec[i];
	}
		

}
void Arreglo::Prom() {
	
	for(i=0;i<tam;i++){
		
	Promvec=SumVec/tam;
	}

}
void Arreglo::MayProm(){
	

	for(i=0;i<tam;i++){
		if(Vec [i]>Promvec){
		
			
				contmay++;

					}
	}


	
}
void Arreglo::MenProm(){
	
		

	for(i=0;i<tam;i++){
		if(Vec [i]<Promvec){
		
			
				contmen++;
		
					}
	}
}
//Poscion Mayor que el promedio
	void Arreglo::PosMayo(){
		
	
	for(i=0;i<tam;i++){
		if(Vec [i]>Promvec){
		
					}
	}
	}
	void Arreglo::PosMeno(){
		
	for(i=0;i<tam;i++){
		if(Vec [i]<Promvec){
			
		
					}
	}
	}
	void Arreglo::Imprimir(){
		cout<<"\nEl vector queda: "<<endl;
cout<<"\n";
		for(i=0;i<tam;i++){

cout <<Vec[i]<<"\t";
	}	
cout<<"\n";
cout<<"\nLa suma del vector es: "<< SumVec<<endl;	
cout<<"\nEl promedio del vector es: "<< Promvec<<endl;


cout<<"\nLos números mayores al promedio son:"<<endl;
for(i=0;i<tam;i++){
if(Vec[i]>Promvec){
cout<<Vec[i]<<endl;
					}
	}
cout<<"\nLos números menores al promedio son:"<<endl;

	for(i=0;i<tam;i++){
		if(Vec [i]<Promvec){
		
				
			cout<<Vec[i]<<endl;
					}
	}
	cout<<"\nLa cantidad de números mayores al promedio es: "<<contmay<<endl;
					
cout<<"\nLa cantidad de números menores al promedio son: "<<contmen<<endl;
				
				
cout<< "\nLa posicion de los números mayores al promedio son:"<<endl;
	for(i=0;i<tam;i++){
		if(Vec [i]>Promvec){
			cout<<i<<endl;}
		}
							
	cout<< "\nLa posicion de los números menores al promedio son:"<<endl;
	for(i=0;i<tam;i++){
		if(Vec [i]<Promvec){
			cout<<i<<endl;
					}}}

int main(){
	setlocale(LC_ALL, "spanish");
	Arreglo Promedio;
	Promedio.LeerArr();
	Promedio.SumArr();
	Promedio.Prom();
	Promedio.MayProm();
	Promedio.MenProm();
	Promedio.PosMayo();
	Promedio.PosMeno();
	Promedio.Imprimir();
	system("pause");
	return 0;
}













