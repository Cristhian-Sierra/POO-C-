#include<iostream>
using namespace std;

class uno{
public:
void leer(int,int*,int*);
void leer(int,float*,float*);
void leer(int,char*,char*);
void hacer(int,int*,int*);
void hacer(int,float*,float*);
void hacer(int,char*,char*);

void ver(int,int*,int*);	
void ver(int,float*,float*);	
void ver(int,char*,char*);		
};
//Lee los datos del arreglo de enteros
void uno::leer(	int tam,int *a,int *b){

	cout<<"\nDigite tamaño del arreglo "<<endl;
	cin>>tam;
	while(tam<=0){
		cout<<"\nError, digite tamaño del arreglo mayor que 0 "<<endl;
		cin>>tam;
	}
	a=new int[tam];
	b=new int[tam];
	int i=0;


	if(tam==NULL){
		cout<<"\nError en la asignación dinamica de memoria " <<endl;
		
	}
	
	
	for(int i=0;i<tam;i++){
		a[i]=0;
		b[i]=0;
	}

	for(i=0;i<tam;i++){
		cout<<"\nDigite numero en la posicion "<< i+1 <<endl;
		cin>>a[i];
		b[i]=a[i];
	}
	hacer(tam,a,b);
}



void uno::hacer(int tam,int*a,int*b){
	int i=0;
	int j=0;
	int aux='\0';

	for(i=0;i<tam;i++)
	for(j=i;j<tam;j++)
if(a[i]>a[j]){
	aux=a[i];
	a[i]=a[j];
	a[j]=aux;
}
ver(tam,a,b);	
}



void uno::ver(int tam,int *a,int *b){
	int i=0;
	int j=0;
		cout<<"\nEl vector original es "<<endl; 
		for(i=0;i<tam;i++)
	cout<<b[i]<<"\t";
	cout<<endl;
	cout<<"\nLos datos ordenados son:"<<endl;
	for(i=0;i<tam;i++)
	
	cout<<a[i]<<"\t";
	cout<<endl;
delete a;
delete b;	

}


//Lee los datos del arreglo de decimales
void uno::leer(int tam2,float *a2,float *b2){

	cout<<"\nDigite tamaño del arreglo "<<endl;
cin>>tam2;

	while(tam2<=0){
		cout<<"\nError, digite tamaño del arreglo mayor que 0 "<<endl;
		cin>>tam2;
	}
	a2=new float[tam2];
	b2=new float[tam2];
	int i=0;


	if(tam2==NULL){
		cout<<"\nError en la asignación dinamica de memoria " <<endl;
		
	}
	
	
	for(int i=0;i<tam2;i++){
		a2[i]=0.0;
		b2[i]=0.0;
	}

	for(i=0;i<tam2;i++){
		cout<<"\nDigite numero en posicion  "<< i+1 <<endl;
cin>>a2[i];
		b2[i]=a2[i];
	}
	hacer(tam2,a2,b2);
}	
void uno::hacer(int tam2,float*a2,float*b2){
	int i=0;
	int j=0;
float aux=0;

	for(i=0;i<tam2;i++)
	for(j=i;j<tam2;j++)
if(a2[i]>a2[j]){
	aux=a2[i];
	a2[i]=a2[j];
	a2[j]=aux;
}
ver(tam2,a2,b2);	
}

void uno::ver(int tam2, float *a2,float *b2){
	int i=0;
	int j=0;
		cout<<"\nEl arreglo original es "<<endl; 
		for(i=0;i<tam2;i++)
	cout<<b2[i]<<"\t";
	cout<<endl;
	cout<<"\nLos datos ordenados son:"<<endl;
	for(i=0;i<tam2;i++)
	
	cout<<a2[i]<<"\t";
	cout<<endl;
	
delete a2;
delete b2;
}
//Digitar arreglo de caracteres
void uno::leer(int tam3,char *a3,char *b3){

	cout<<"\nDigite tamaño del arreglo "<<endl;
cin>>tam3;
while(tam3<=0){
	cout<<" Error, digite tamaño mayor que 0 "<<endl;
	cin>>tam3;
}
a3=new char[tam3];
b3=new char[tam3];
gets(a3);




	if(tam3==NULL){
		cout<<"\nError en la asignación dinamica de memoria " <<endl;
		
	}
	
	
	for(int i=0;i<tam3;i++){
		a3[i]='\0';
		b3[i]='\0';
	}

	for(int i=0;i<tam3;i++){
		cout<<"\nDigite  caracter en posicion  "<< i+1 <<endl;
cin>>a3[i];
		b3[i]=a3[i];
	}
	hacer(tam3,a3,b3);
}	
void uno::hacer(int tam3,char *a3,char *b3){
	int i=0;
	int j=0;
char aux=0;

	for(i=0;i<tam3;i++)
	for(j=i;j<tam3;j++)
if(a3[i]>a3[j]){
	aux=a3[i];
	a3[i]=a3[j];
	a3[j]=aux;
}
ver(tam3,a3,b3);	
}

void uno::ver(int tam3, char *a3,char *b3){
	int i=0;
	int j=0;
		cout<<"\nEl vector original es "<<endl; 
		for(i=0;i<tam3;i++)
	cout<<b3[i]<<"\t";
	cout<<endl;
	cout<<"\nLos datos ordenados son:"<<endl;
	for(i=0;i<tam3;i++)
	
	cout<<a3[i]<<"\t";
	cout<<endl;
	

}
int main()
{
setlocale(LC_ALL,"spanish");
uno objeto;
int tam,tam2,tam3;
int *a;
int *b;
float *a2;
float *b2;
char *a3;
char *b3;
objeto.leer(tam,a,b);
objeto.leer(tam2,a2,b2);
objeto.leer(tam3,a3,b3);

}
