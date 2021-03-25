#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
/*Programa que pide 2 numeros, haya la suma de su rango, 
dice cuales son los pares, cuales impares, cuantos pares y cuantos impares*/
class ParImpar{
	private:int n1,n2,contpar,contimpar,i;
	double sumRang;
	public:
		
void Leer();	
void Funsum();
void FunPar();
void Funimpar();
void FuncuPar();
void FuncuImpar( );
void Mostrar();
ParImpar();
~ParImpar();
};
ParImpar::ParImpar(){
	cout<<" Construyendo... "<<endl;
	contpar=0;
	contimpar=0;
	sumRang=0;
	i=0;
}
ParImpar::~ParImpar(){
	cout<<" Destruyendo "<<endl;
}
void ParImpar::Leer(){

// Pedir los dos numeros al usuario
cout << " Digite  primer numero    " <<endl;

cin >>n1;

cout <<" Digite segundo numero " <<endl;
cin>>n2;}


void ParImpar::Funsum(){
	
//si el primer numero es menor que el segundo
if(n1<n2){

for (  i =n1;i <=n2;i ++){
// sumando el rango de los numeros
sumRang+=i;
}
}
//si el primer numero es mayor que el segundo
else{
	for (  i =n2;i <=n1;i ++){

// sumando el rango de los numeros

sumRang+=i;

}}}
//Mostrando los pares
void ParImpar::FunPar( ){

if(n1<n2){
cout << "\n Los  números pares de  " << n1<< " a "<< n2 << " son: "<<endl; 
for ( i =n1;i <=n2; i ++){

if(i % 2==0){


cout <<i<< endl;}

}}
// Si el primer numero es mayor que el segundo
else{
	
cout << "\n Los  números pares de  " << n1<< " a "<< n2 << " son: "<<endl; 

for (  i =n2;i <=n1; i ++){

if(i % 2==0){


cout <<i<< endl;}

}
	
}}
//Mostrando los impares

void ParImpar::Funimpar( ){

if(n1<n2){
cout << " Los  números impares de  " << n1<< " a "<< n2 << " son: "<<endl; 
for (  i =n1;i <=n2;i ++){
	
if(i % 2!=0){


cout <<i << endl;}
}
}
else{
	cout << " Los  números impares de  " << n1<< " a "<< n2 << " son: "<<endl; 
for (  i =n2;i <=n1;i ++){
	
if(i % 2!=0){


cout <<i << endl;}
}
}} 
// Cantidad de pares
void ParImpar::FuncuPar( ){

contpar=0;
//Si el primer numero es menor que el segundo
if(n1<n2){
	
	for( i=n1;i<=n2;i++){
	if(i%2==0){
	
		contpar++;}
		
}


//cout << " \n La cantidad de numeros pares es de " << contpar<<endl;
}
	//Si el primer numero es mayor que el segundo
else{

		for( i=n2;i<=n1;i++){
	if(i%2==0){
	
		contpar++;}
	

}

//cout << "\nLa cantidad de numeros pares es de " << contpar<<endl;	

}}
//Numeros impares cantidad

void ParImpar::FuncuImpar( ){

	contimpar=0;
//Si el primer numero es menor que el segundo

	if(n1<n2){
		
		for( i=n1;i<=n2;i++){
	if(i%2!=0){
	
		contimpar++;
}
}

}
	//Si el primer numero es mayor que el segundo
else{

		for( i=n2;i<=n1;i++){
	if(i%2!=0){
	
		contimpar++;
}

}

}
}



void ParImpar::Mostrar(){
//si el primer numero es menor que el segundo
if(n1<n2){
// Mostrar el rango de numeros al usuario 
cout<<" El rango de "<<n1<< " hasta "<<n2<< " es: "<<endl;
for ( i =n1;i <=n2;i ++){
		cout<<i<<endl;
	
}
/*for ( i =n1;i <=n2;i ++){
		
	sumRang+=i;}*/
cout<<"\nLa suma del rango de "<<n1<< " a "<<n2<<" es "<<sumRang<<endl;



/*for( i=n1;i<=n2;i++){
if(i%2==0){

		contpar++;}}*/


cout<<"\nLa cantidad de numeros pares es: "<<contpar<<endl;



		/*for( i=n1;i<=n2;i++){
	if(i%2!=0){
	
		contimpar++;
}
}*/
cout << "\nLa cantidad de numeros impares es de " << contimpar<<endl;

}
//si el primer numero es mayor que el segundo
else{
	
	
cout<<"\nEl rango de "<<n1<< " hasta "<<n2<< " es: "<<endl;
for (  i =n2;i <=n1;i++ ){
	
cout<<i<<endl;
}
cout<<"\nLa suma del rango de "<<n1<< " a "<<n2<<" es "<<sumRang<<endl;

cout <<"\nLa cantidad de numeros pares es de " <<contpar<< endl;
	/*for( i=n2;i<=n1;i++){
	if(i%2==0)
	
		contpar++;}*/
	
/*
		for( i=n2;i<=n1;i++){
	if(i%2!=0)
	
		contimpar++;}

*/
	cout <<"\nLa cantidad de numeros impares es de " << contimpar<<endl;
}
}


int main()
{ 
setlocale(LC_ALL, "spanish");

ParImpar Rango;
 Rango.Leer();
Rango.Funsum();
 Rango.FunPar();
 Rango.Funimpar();
 Rango.FuncuPar();
 Rango.FuncuImpar();
 Rango.Mostrar();
system("pause");
return 1; }







