#include<iostream>
#include <locale.h>
using namespace std;
class vector{
	public:
	int pedirtam();
    void iniciarm(int A[],int tam);
    int cantidad(int A[],int tam);
    void ejecutar();
    void mostrar(int A[],int tam);
    void agregar(int A[],int tam);
    void eliminar(int A[],int tam);
    void iniciarm(float A[],int tam);
    int cantidad(float A[],int tam);
    void mostrar(float A[],int tam);
    void agregar(float A[],int tam);
    void eliminar(float A[],int tam);
};
void vector::agregar(int A[],int tam){
	int cant,info;
	   	         do{
	   	         	cout<<"De dato a agregar: "<<endl;
	   	            cin>>info;
					}while(info<0);
			     cant=cantidad(A,tam);
				if(cant==tam)
				cout<<"No se puede agregar, arreglo lleno.."<<endl;
				else{
				for(int i=0;i<tam;i++){
					if(A[i]==0){
					A[i]=info;
					break;
                    }				
				}
				}
}
int vector::pedirtam(){
	int s;
	
	do{
		cout<<"De tamaño del arreglo de enteros y flotantes: "<<endl;
		cin>>s;
	}while(s<=0);
	return s;
}
int vector::cantidad(int A[],int tam){
	int s=0;
	for(int i=0;i<tam;i++){
		if(A[i] != 0)
		s++;
	}
	return s;
}
void vector::iniciarm(int A[],int tam){
	for(int i=0;i<tam;i++){
		A[i]=0;
	}
}
void vector::eliminar(int A[],int tam){
	int cant,aux;
	   	         cant=cantidad(A,tam);
	   	         if(cant==0)
	   	         cout<<"No se puede eliminar, arreglo vacio.."<<endl;
				else
				{
				for(int i=0;i<tam;i++){
					if(i==0){
						A[i]=0;
					}
					aux=A[i+1];
					A[i+1]=A[i];
					A[i]=aux;
				}
				}
}
void vector::mostrar(int A[],int tam){
	cout<<"El arreglo es: "<<endl;
	for(int i=0;i<tam;i++){
		if(A[i] != 0)
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

void vector::agregar(float A[],int tam){
	int cant;
	float info;
	   	         do{
	   	         	cout<<"De dato a agregar: "<<endl;
	   	            cin>>info;
					}while(info<0);
			     cant=cantidad(A,tam);
				if(cant==tam)
				cout<<"No se puede agregar, arreglo lleno.."<<endl;
				else{
				for(int i=0;i<tam;i++){
					if(A[i]==0){
					A[i]=info;
					break;
                    }				
				}
				}
}
int vector::cantidad(float A[],int tam){
	int s=0;
	for(int i=0;i<tam;i++){
		if(A[i] != 0)
		s++;
	}
	return s;
}
void vector::iniciarm(float A[],int tam){
	for(int i=0;i<tam;i++){
		A[i]=0,0;
	}
}
void vector::eliminar(float A[],int tam){
	int cant,aux;
	   	         cant=cantidad(A,tam);
	   	         if(cant==0)
	   	         cout<<"No se puede eliminar, arreglo vacio.."<<endl;
				else
				{
				for(int i=0;i<tam;i++){
					if(i==0){
						A[i]=0;
					}
					aux=A[i+1];
					A[i+1]=A[i];
					A[i]=aux;
				}
				}
}
void vector::mostrar(float A[],int tam){
	for(int i=0;i<tam;i++){
		if(A[i] != 0)
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void vector::ejecutar(){
	int tam=0,op=0,s=0;
	tam=pedirtam();
	int A[tam];
	float B[tam];
	iniciarm(A,tam);
	iniciarm(B,tam);
	do{
	   cout<<"************MENU************ \n 1. Insertar en arreglo de enteros. \n 2. Insertar en arreglo de flotantes. \n 3. Eliminar en arreglo de enteros  \n 4. Eliminar en arreglo de flotantes \n 5. Mostrar arreglo de enteros. \n 6. Mostrar arreglo de flotantes. \n 7. Salir \n";
	   cin>>op;
	   switch(op){
	   	 case 1: agregar(A,tam);
			   break;
	   	 case 2: agregar(B,tam);
		    break;	
     	    case 3:eliminar(A,tam);
	    	break;
	     case 4:  eliminar(B,tam);
		    break;
		case 5:cout<<"El arreglo de enteros es: "<<endl;  
		       mostrar(A,tam);
			break;
		case 6:cout<<"El arreglo de flotantes es: "<<endl; 
		       mostrar(B,tam);
			break;
		case 7:cout<<"saliendo.."<<endl;
		    break;	
		default: cout<<"Dato incorrecto :/"<<endl;
		    break;		
	   }	
	}while(op != 7);
}
main(){
	setlocale(LC_ALL,"spanish");
	vector o;
	o.ejecutar();
}

