#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 

void Funnum(int , int );
int Funsum();
int FunPar();
int Funimpr();
int FuncuPar();
int FuncuImpr();
int main()
{ 
int num1,num2;
int sumRang=0;
int contpar=0;
int contimpar=0;

setlocale(LC_ALL, "spanish");
// Pedir los dos numeros al usuario
cout << " Digite  primer numero    " <<endl;

cin >>num1;

cout <<" Digite segundo numero " <<endl;

cin>>num2;
//si el primer numero es menor que el segundo
if(num1<num2){


// Mostrar el rango de numeros al usuario 

cout<< " El rango de numeros de " << num1 << " hasta " << num2<< " es "<<endl;
for ( int i =num1;i <=num2;i ++){
cout << i<< endl;
// sumando el rango de los numeros

sumRang+=i;

}
cout<<"\n";
cout << " la suma de los números de " << num1 << " a " << num2 << " es " << sumRang<<endl;

//Mostrando la cantidad de pares

cout << " Los  números pares de  " << num1<< " a "<< num2 << " son: "<<endl; 

for ( int i =num1;i <=num2; i ++){

if(i % 2==0)
cout <<i<< endl;


}
//Mostrando la cantidad de impares
cout << " Los  números impares de  " << num1<< " a "<< num2 << " son: "<<endl; 
for ( int i =num1;i <=num2;i ++){
	
if(i % 2!=0)

cout <<i << endl;


}
// Mostrar cantidad de numeros pares

for(int i=num1;i<=num2;i++){
	if(i%2==0){	contpar++;
	}else{
	contimpar++;}
}
cout<<"\n";
cout << " La cantidad de numeros pares es de " << contpar<<endl;
cout<<" La cantidad de numeros impares es " <<contimpar<<endl;}




//si el primer numero es mayor que el segundo
else{


cout<< " El rango de numeros de " << num1 << " hasta " << num2<< " es "<<endl;
for ( int i =num2;i <=num1;i ++){
cout << i<< endl;
// sumando el rango de los numeros

sumRang+=i;

}
cout << " la suma de los números de " << num1 << " a " << num2 << " es " << sumRang<<endl;

//Mostraando los pares

cout << " Los  números pares de  " << num1<< " a "<< num2 << " son: "<<endl; 

for ( int i =num2;i <=num1; i ++){

if(i % 2==0)
cout <<i<< endl;
}
//Mostrando los impares
cout << " Los  números impares de  " << num1<< " a "<< num2 << " son: "<<endl; 
for ( int i =num2;i <=num1;i ++){
	
if(i % 2!=0)

cout <<i << endl;

}

cout<<"\n";

//Mostrando la cantidad de pares e impares
for(int i=num2;i<=num1;i++){
	if(i%2==0){
		contpar++;
	}
	else{
		
	contimpar++;
	}
}
cout<<"\n";

cout << " La cantidad de numeros pares es de " << contpar<<endl;
cout<<"\n";
cout<<" La cantidad de numeros impares es " <<contimpar<<endl;}


system("pause");
return 1; }





