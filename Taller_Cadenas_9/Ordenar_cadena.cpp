#include<iostream>
#include<stdio.h>
using namespace std;
class orcadena{
	public:
		void mostrar_matriz(char*,int);
		void ordenar_matriz(char*,int);
		void entrada(char*,int);
		orcadena();
		~orcadena();
};

orcadena::orcadena(){
	char *a;
	int dimension;
	cout<<"Ingrese el tamaño de la cadena"<<endl;
	cin>>dimension;
	a=new char[dimension];
	gets(a);
	entrada(a,dimension);
}
orcadena::~orcadena(){
	cout<<"Destruyendo"<<endl;
}
void orcadena::ordenar_matriz(char *a,int dimension){
	char auxiliar;
	for(int x=0;x<dimension;x++){
		for(int z=0;z<dimension;z++){
			if(int(a[x])>int(a[z])){
				auxiliar=a[x];
				a[x]=a[z];
				a[z]=auxiliar;
				//cout<<"Se cumplio"<<endl;
			}
		}
	}
	cout<<"Cadena ordenada"<<endl;
	mostrar_matriz(a,dimension);
}
void orcadena::entrada(char *a,int dimension){
 cout<<"Ingrese la cadena de caracteres"<<endl;
 gets(a);
 cout<<"Entrada"<<endl;
 mostrar_matriz(a,dimension);
 ordenar_matriz(a,dimension);
}

void orcadena::mostrar_matriz(char *a,int dimension){
for(int x=0;x<dimension;x++){
	if(a[x]!=NULL && a[x]!=' '){
	cout<<a[x];
	}
}
cout<<endl;

}
int main(){
	orcadena ob1;
}


