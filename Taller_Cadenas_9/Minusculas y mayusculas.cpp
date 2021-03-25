#include<iostream>
#include<stdio.h>
#include <locale.h>
using namespace std;

class MayusculasyMinusculas{
	private:

	public:
		MayusculasyMinusculas();
		~MayusculasyMinusculas();
		void entrada(char*,int);
		void PasaraminusculayMayusculas(char*,int);
		void mostrarcadena(char*);
};

MayusculasyMinusculas::MayusculasyMinusculas(){
	char *a;
	int dimension=0;
	cout<<"INGRESE EL TAMAÑO DE LA CADENA"<<endl;
	cin>>dimension;
	a=new char[dimension];
	gets(a);
	entrada(a,dimension);
}
MayusculasyMinusculas::~MayusculasyMinusculas(){
	cout<<"Destruir"<<endl;
}
void MayusculasyMinusculas::entrada(char *a,int dimension){
	cout<<"Ingrese la cadena"<<endl;
	gets(a);
	cout<<"Entrada"<<endl;
	mostrarcadena(a);
	PasaraminusculayMayusculas(a,dimension);
}
void MayusculasyMinusculas::PasaraminusculayMayusculas(char *a,int dimension){
	for(int x=0;x<dimension;x++){
		if((a[x]>='a' && a[x]<='z')){
		   a[x]-=('A'-'a')*-1;
		}else if((a[x]>='A' && a[x]<='Z')){
			a[x]+=('a'-'A');
		}
		
	}
	cout<<"Cadena ordena de forma mayuscula y minusculas "<<endl;
	mostrarcadena(a);
}

void MayusculasyMinusculas::mostrarcadena(char *a){
	for(int x=0;a[x];x++){
		if(a[x]!=NULL){
			cout<<a[x];
		}
	}
	cout<<endl;
}

int main(){
	setlocale(LC_ALL, "spanish");
	int x;
	MayusculasyMinusculas m1;
}

