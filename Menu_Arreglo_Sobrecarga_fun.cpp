#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
class MenArr{
	public:
void Entrada(int,int,int*);
void Entrada(int,float,float*);
void Proceso(int,int,int*);
void Proceso(int,float,float*);
void Salida(int,int,int*);
void Salida(int,float, float*);
};
void MenArr::Entrada(int tam,int dato,int *a){
char op;
	int tam2;
	float dato2,*a2;
	cout<<"\nDigite que tipo de datos quiere en su arreglo "<<endl;
	cout<<"\n1/ Para enteros "<< "\n"<<"2/ Para decimales "<<"\n"<<"3/ Salir "<<endl;
	cout<<"\nPor favor digite una opcion "<<endl;
	cin>>op;

	switch (op){		
case '1':
Proceso(tam,dato,a);
break;
case '2':
Entrada(tam2,dato2,a2);
	break;
	case '3':
		cout<<"\nHasta luego..."<<endl;
	break;
default:
cout<<"\nError opción no valida "<<endl;
}}


void MenArr::Proceso(int tam,int dato,int *a){
	char op1;
	int i=0;
	int pos;
	cout<<"\nDigite tamaño del arreglo de enteros "<<endl;
	cin>>tam;
	while(tam<=0){
		cout<<"\nError,digite tamaño mayor que 0 "<<endl;
		cin>>tam;
	}
	a=new int[tam];
	if(tam==NULL){
		cout<<"\nError, en la signacion dinamica de memoria "<<endl;
		
	}
	for(int i=0;i<tam;i++){
		a[i]=0;
	}
	
		cout<<"\nBienvenido al menú de arreglo de enteros: "<<endl;
do{

	cout<<"\n1) Ingresar dato al arreglo "<<endl;
	cout<<"\n2) Imprimir el arreglo "<<endl;
	cout<<"\n3) Eliminar elemento "<<endl;
	cout<<"\n4) Salir "<<endl;
	cout<<"\n Por favor escoja una opción "<<endl;
	cin>>op1;
	//bool ocupado[tam];
	switch(op1){
	case '1':	

/*for(i=0;i<tam;i++){
	ocupado[i]=false;
}*/
	if(a[i]==0){
			
	
				for(i=0;i<tam;i++){

		cout<<" Digite dato "<<i+1<<endl;
	cin>>a[i];
		}
	break;
		}else{			
		cout<<"\nError, el arreglo ya se encuentra lleno "<<endl;
		
		}
		
		break;
		
	
					/*while(i<tam)	{
			cout<<" Digite dato "<<i<<endl;
		
		cin>>dato;
					i++;
				}
						a[i]=dato;*/
		
		case'2':
	if(a[i]==0){
		cout<<"\nError, el arreglo está vacio "<<endl;

	}
	else{
	cout<<"\nEl arreglo de enteros es "<<endl;
for(i=0;i<tam;i++){
	cout<<a[i]<<endl;}

}
	break;	
	
case '3':
	for(i=0;i<tam;i++){
	 pos=a[0];
	}
	
	
	if(a[i]==0){
			cout<<"\nError, el arreglo está vacio "<<endl;	
}
	else{
			for(i=0;i<tam;i++){
	
		if(i==pos){
		
		while(i<tam){
			a[i]=a[i+1];
		}
		break;
	}
}
tam=tam-1;
	cout<<"\nEl arreglo ha quedado "<<endl;
for(i=0;i<tam;i++){
cout<<a[i]<<endl;
	
}
	
}
break;
case '4':
cout<<"\nHasta luego... "<<endl;
break;
default:
cout<<"\nOpción no valida "<<endl;
	
}}while(op1!='4');}






//Arreglo de tipo flotantes
void MenArr::Entrada(int tam2,float dato2,float *a2){
	cout<<"\nDigite tamaño del arreglo de decimales "<<endl;
	cin>>tam2;
	while(tam2<=0){
		cout<<"\nError,digite tamaño mayor que 0 "<<endl;
		cin>>tam2;
	}
	a2=new float[tam2];
	if(tam2==NULL){
		cout<<" Error, en la asignacion dinamica de memoria "<<endl;
		
	}
	for(int i=0;i<tam2;i++){
		a2[i]=0.0;
	}

Proceso(tam2,dato2,a2);	
}
void MenArr::Proceso(int tam2,float dato2,float *a2){

char op1;
int i=0;
	int pos;
cout<<"\nBienvenido al menú de arreglo de decimales: "<<endl;
do{

	cout<<"\n1) Ingresar dato al arreglo "<<endl;
	cout<<"\n2) Imprimir el arreglo "<<endl;
	cout<<"\n3) Eliminar elemento "<<endl;
	cout<<"\n4) Salir "<<endl;
	cout<<"\n Por favor escoja una opción "<<endl;
	cin>>op1;
	switch(op1){
	case '1':	
	

		if(a2[i]==0){
			
		cout<<" Digite dato "<<i+1<<endl;
				for(i=0;i<tam2;i++){
			cin>>a2[i];
		}

		}else{			
		cout<<"\nError, el arreglo ya se encuentra lleno "<<endl;
		
		}
		break;
		case'2':
	if(a2[i]==0.0){
		cout<<"\nError, el arreglo está vacio "<<endl;
	}
	else{
	cout<<"\nEl arreglo de decimales es "<<endl;
for( i=0;i<tam2;i++){
cout<<a2[i]<<endl;}
}
break;
	case '3':
		for(i=0;i<tam2;i++){
	 pos=a2[0];
	 
	 
	}
	
	
	if(a2[i]==0.0){
	cout<<"\nError, el arreglo está vacio "<<endl;
		
	
}
	else{
	for(i=0;i<tam2;i++){
	
		if(i==pos){
		
		while(i<tam2){
			a2[i]=a2[i+1];
		}
		break;
	}
}
tam2=tam2-1;
	cout<<"\nEl arreglo ha quedado "<<endl;
for(i=0;i<tam2;i++){
cout<<a2[i]<<endl;
		
}}

	break;	
case '4':
		cout<<"\nHasta luego... "<<endl;
break;

default:
cout<<"\nOpcion no valida "<<endl;
	
}}while(op1!='4');}	
	
	

int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
MenArr MA;

int tam, *a;
int tam2;
int dato;
float *a2;
MA.Entrada(tam,dato,a);

system("pause");
return 1; 
}
