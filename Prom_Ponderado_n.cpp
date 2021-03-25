#include <iostream>
#include <stdlib.h>
#include<locale.h>
#define tam 5
using namespace std;
class uno{
	
public: 
struct Estudiante{
char nom[30];
float nota[tam];
int *arrest;
int tames;
long double cod;
double sumpromar;
double  not1;
double not2;
double not3;
double not4;
double not5;

double finalpon;
double finalmar;	
	};
	
	
void leer(Estudiante);
void proceso(Estudiante);
void ver(Estudiante);

};

	void uno::leer(Estudiante pilo ){
		int j=0;
	int dato;
		int i=0;

		cout<<"\nDigite cantidad de estudiantes "<<endl;
		cin>>pilo.tames;
	
		while(pilo.tames<=0){
			cout<<"\nError, digite tamaño mayor que 0 "<<endl;
			cin>>pilo.tames;
		}
		pilo.arrest=new int[pilo.tames];

if(pilo.arrest==NULL){
cout<<"\nError en la asignación dinamica de memoria "<<endl;}

	

		for(j=0;j<pilo.tames;j++){
			
			cout<<"\nEstudiante digite su nombre "<<endl;
gets(pilo.nom);
gets(pilo.nom);
	
		
	cout<<"\nEstudiante "<<j+1 <<" digite su codigo "<<endl;
	cin>>pilo.cod;


	for(int i=0;i<tam;i++){
		cout<<"\nEstudiante "<<j+1<<" digite su nota "<< i+1 <<endl;
	cin>>pilo.nota[i];
	
	}	
	

		proceso(pilo);	
	}

	
	}

void uno::proceso(Estudiante pilo){
 pilo.sumpromar=0.0;
pilo.finalmar=0.0;
 pilo.not1=0.0;
 pilo.not2=0.0;
 pilo.not3=0.0;
 pilo.not4=0.0;
pilo.not5=0.0;
pilo.finalpon=0.0;
int j=0;
int i=0;
	for( i=0;i<tam;i++){

		pilo.sumpromar+=pilo.nota[i];
			pilo.finalmar=pilo.sumpromar/tam;
	}

//for(j=0;j<pilo.tames;j++){


	
for(i=0;i<tam;i++){

 pilo.not1=pilo.nota[0]*0.35;
pilo.not2=pilo.nota[1]*0.20;
pilo.not3=pilo.nota[2]*0.15;
 //pilo.not4=pilo.nota[3]*0.20;
pilo.not4=pilo.nota[3]*0.20;
pilo.not5=pilo.nota[4]*0.10;

	}
pilo.finalpon=pilo.not1+pilo.not2+pilo.not3+pilo.not4+pilo.not5;			

//}
	//ver(pilo);
		//	for( j=0;j<pilo.tames;j++){
			
		cout<<"\n\n***LISTADO DE NOTAS DE ESTUDIANTE **** "<<endl;
	cout<<"\nEstudiante de nombre "<<pilo.nom<<endl;
	cout<<"\nEstudiante de codigo "<<pilo.cod<<endl;
	cout<<"\nEstudiante  su nota final aritmetica es "<<pilo.finalmar<<endl;
	cout<<"\nEstudiante su nota final del ponderado es "<<pilo.finalpon<<endl;
	if(pilo.finalmar>=2.95){
		cout<<"\nEstudiante ha pasado con promedio aritmetico "<<endl;
	}
	else{
		cout<<"\nEstudiante  no ha pasado con promedio aritmetico "<<endl;
	}
		if(pilo.finalpon>=2.95){
		cout<<"\nEstudiante ha pasado con promedio del ponderado"<<endl;
	}
	else{
		cout<<"\nEstudiante  no ha pasado con promedio del ponderado"<<endl;
	}		
	//}

}
	void uno::ver(Estudiante pilo){
		int j=0;

	delete pilo.arrest;
	}
	int main(){
			setlocale(LC_ALL,"spanish");
	uno::Estudiante p;
	
		uno u;
		u.leer(p);
	}
