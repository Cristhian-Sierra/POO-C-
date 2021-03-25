#include<iostream>
#include <locale.h>
using namespace std;
class vector{
	public:
	void pedirdat();
void  pedirtam(int A[],int tam);
void pedirtam(float B[],int tam1);
void  cantidad(int A[],int tam1);
void cantidad(float B[],int tam1);
    void mostrar(int A[],int tam);
    void mostrar(float B[],int tam1);
    void agregar(int A[],int tam);
        void agregar(float B[],int tam1);
    void eliminar(int A[],int tam);
     void eliminar(float B[],int tam1);
    void ejecutar();

};
	void vector::pedirdat(){
		char op1;
int *A,tam;
float *B;
int tam1;
		cout<<"Digite que tipo de datos quiere para su arreglo "<<endl;
		cout<<"1)Para datos de tipo enteros "<<endl;
		cout<<"2)Para datos de tipo flotante "<<endl;
		cout<<"3)Para salir "<<endl;
		cin>>op1;
		switch (op1)
		{
			case '1':
				pedirtam(A,tam);
				break;
				case 2:
					pedirtam(B,tam1);
					break;
					case '3':
					cout<<"\nHasta luego :) "<<endl;
					break;
					default:
						cout<<"\nError, opción no valida "<<endl;
						break;
		}
		
		
		
	}
void vector::agregar(int A[],int tam){
	int cant,info;
	   	         do{
	   	         	cout<<"De dato a agregar: "<<endl;
	   	            cin>>info;
					}while(info<0);
			   cantidad(A,tam);
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
void vector::agregar(float B[],int tam1){
	
	int cant;
	char info;
	   	         do{
	   	         	cout<<"De dato a agregar: "<<endl;
	   	            cin>>info;
					}while(info<=0);
			     cantidad(B,tam1);
				if(cant==tam1)
				cout<<"No se puede agregar, arreglo lleno.."<<endl;
				else{
				for(int i=0;i<tam1;i++){
					if(B[i]==0.0){
					B[i]=info;
					break;
                    }				
				}
				}	
}
void vector::pedirtam(int A[],int tam){
	int s;

	

	do{
		cout<<"De tamaño del arreglo de enteros: "<<endl;
		cin>>s;
	}while(s<=0);
	agregar(A,tam);
}
void  vector::pedirtam(float B[],int tam1){
	int s;

	do{
		cout<<"De tamaño del arreglo de flotantes: "<<endl;
		cin>>s;
	}while(s<=0);
	agregar(B,tam1);
}
void vector::mostrar(int A[],int tam){
	cout<<"El arreglo es: "<<endl;
	for(int i=0;i<tam;i++){
		if(A[i] != 0)
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void vector::mostrar(float B[],int tam1){
	cout<<"El arreglo es: "<<endl;
	for(int i=0;i<tam1;i++){
		if(B[i] != 0.0)
		cout<<B[i]<<" ";
	}
	cout<<endl;
}
void vector::cantidad(int A[],int tam){
	int s=0;
	for(int i=0;i<tam;i++){
		if(A[i] != 0)
		s++;
	}

}

void vector::cantidad(float B[],int tam1){
	int s=0;
	for(int i=0;i<tam1;i++){
		if(B[i] != 0.0)
		s++;
	}

}
void vector::eliminar(int A[],int tam){
	int cant,aux;
	   	        cantidad(A,tam);
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



void vector::eliminar(float B[],int tam1){
	int cant,aux;
	   	         cantidad(B,tam1);
	   	         if(cant==0)
	   	         cout<<"No se puede eliminar, arreglo vacio.."<<endl;
				else
				{
				for(int i=0;i<tam1;i++){
					if(i==0){
						B[i]=0;
					}
					aux=B[i+1];
					B[i+1]=B[i];
					B[i]=aux;
				}
				}
}

void vector::ejecutar(){
	int tam=0,op=0,s=0,tam1=0;
		int A[tam];
	float B[tam1];
//	tam=pedirtam(A,tam);
//	tam1=pedirtam(B,tam1);


	
	do{
	   cout<<"************MENU************ \n 1. Insertar en arreglo de enteros. \n 2. Insertar en arreglo de flotantes. \n 3. Eliminar en arreglo de enteros  \n 4. Eliminar en arreglo de flotantes \n 5. Mostrar arreglo de enteros. \n 6. Mostrar arreglo de flotantes. \n 7. Salir \n";
	   cin>>op;
	   switch(op){
	   	 case 1: agregar(A,tam);
			   break;
	   	 case 2: agregar(B,tam1);
		    break;	
     	    case 3:eliminar(A,tam);
	    	break;
	     case 4:  eliminar(B,tam1);
		    break;
		case 5:cout<<"El arreglo de enteros es: "<<endl;  
		       mostrar(A,tam);
			break;
		case 6:cout<<"El arreglo de flotantes es: "<<endl; 
		       mostrar(B,tam1);
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
o.pedirdat();
}

