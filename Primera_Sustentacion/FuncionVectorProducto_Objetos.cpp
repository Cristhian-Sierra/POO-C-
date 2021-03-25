#include <iostream>
#include <stdlib.h>
#include <locale.h> 
using namespace std;
class Vector{
	private:
int tam,i,*vec,*vec2, *vec3;
public:
void FunDat();
void funcvec();
void FunMulVec ();
void Mostrar();
Vector();
~Vector();
};
Vector::Vector(){
	cout<<" Construyendo..."<<endl;

}
Vector::~Vector(){
	cout<<" Destruyendo..."<<endl;
	delete vec,vec2,vec3;
}


void Vector::FunDat( ){

cout <<" Digite los tamaños del vector " <<endl;
cin>> tam;
while(tam<=0){

cout<<" Error digite tamaño mayor que 0 " <<endl;
cin>>tam;}
vec=new int[tam];
vec2 =new int[tam];
vec3=new int[tam];

if(tam==NULL){
	cout<<" Error en la asignacion dinamica de memoria "<<endl;
}}
void Vector::funcvec( ){
for( i=0; i<tam;i++){
cout<< "\nDigite posicion " << i+1<<" del primer vector "<<endl;

cin>>vec[i];

}

for( i=0;i<tam;i++){

cout<< "\nDigite posicion " << i+1<< " del segundo vector "<< endl;
cin>>vec2[i];
}
}

void Vector::FunMulVec(){

for(  i=0;i<tam;i++){
vec3[i]=vec[i]*vec2[i];

}

}
void Vector::Mostrar(){
	
cout<<"\nEl primer vector queda: " << endl;
	for(  i=0; i<tam;i++){
		
cout <<vec[i]<<"\t";

}
cout<<"\n";
	cout<<"\nEl segundo  vector queda: " << endl;
	for( i=0; i<tam;i++){
cout <<vec2[i]<<"\t";	}

cout<< "\nEl  producto de los vectores es: "<<endl;
for(  i=0;i<tam;i++){
vec3[i]=vec[i]*vec2[i];

 cout << "\nPosicion "<<i+1 << " = " << vec3[i]<<endl;
}
cout<<"\n";
}


int main(){
setlocale(LC_ALL, "spanish");
Vector escalarvec;
 escalarvec.FunDat( );
 escalarvec.funcvec( );
escalarvec.FunMulVec();
escalarvec.Mostrar();


system ("pause");
return 0;
}


