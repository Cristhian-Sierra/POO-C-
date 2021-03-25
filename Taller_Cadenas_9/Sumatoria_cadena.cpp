#include<iostream>
#include<stdio.h>
using namespace std;

class sumatoriacadena{
	public:
		void mostrar_sumatoria(int);
		void mostrar_cade(char *,int);
		void sumatoria(char *,int);
		void entrada(char *,int);
		sumatoriacadena();
		~sumatoriacadena();
};

sumatoriacadena::sumatoriacadena(){
	char *a;
	int dimension;
	cout<<"Ingrese el tamaño de la cadena"<<endl;
	cin>>dimension;
	a=new char[dimension];
	gets(a);
	entrada(a,dimension);
}
sumatoriacadena::~sumatoriacadena(){
	cout<<"Destruir"<<endl;
}
void sumatoriacadena::entrada(char *a,int dimension){
	cout<<"Ingrese la cadena"<<endl;
	gets(a);
	cout<<"Entrada"<<endl;
	mostrar_cade(a,dimension);
	sumatoria(a,dimension);
}
void sumatoriacadena::sumatoria(char *a,int dimension){
	int suma=0;
	for(int x=0;x<dimension;x++){
		suma+=int(a[x]);
	}
	mostrar_sumatoria(suma);
}

void sumatoriacadena::mostrar_sumatoria(int suma){
    cout<<"La sumatoria es "<<suma<<endl;
}

void sumatoriacadena::mostrar_cade(char *a,int dimension){
	for(int x=0;x<dimension;x++){
		if(a[x]!=NULL){
		cout<<a[x];
		}
	}
	cout<<endl;
}
 
int main(){
sumatoriacadena s1;
}

