#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
class dato{

	public:
		void Entrada();
		void Proceso(int **,int **, int,int);
		void Salida(int **,int **, int,int);
};

void dato::Entrada(){
	int **matriz;
	int **matriz2;
	int filas,columnas;
	int i=0;
	int j=0;
cout<<" Digite tamaño, de filas "<<endl;
cin>>filas;
while(filas<=0){
	cout<<" Error, digite tamaño mayor a 0 "<<endl;
	cin>>filas;
}
cout<<" Digite tamaño, de columnas "<<endl;
cin>>columnas;
while(columnas<=0){
	cout<<" Error, digite tamaño mayor a 0 "<<endl;
	cin>>columnas;
}

//ADM MATRIZ1
matriz= new int *[filas];
if(matriz==NULL)
cout<<" Error 1 "<<endl;
for(j=0;j<filas;j++)
{
matriz[j]= new int [columnas];
if(matriz[j]==NULL)
cout<<" Error 2 "<<endl;}


//ADM MATRIZ 2
matriz2= new int *[filas];
if(matriz2==NULL)
cout<<" Error 1 "<<endl;
for(j=0;j<filas;j++)
{
matriz2[j]= new int [columnas];
if(matriz2[j]==NULL)
cout<<" Error 2 "<<endl;}


for(i=0;i<filas;i++){
for(j=0;j<columnas;j++){
cout<<" Digite numero de posición [" <<i<<"]["<<j<<"]"<<endl;
cin>>matriz[i][j];
}}
Proceso(matriz,matriz2,filas,columnas);
}

void dato::Proceso(int **matriz,int **matriz2, int filas,int columnas){
	int i=0;
	int j=0;
		//Trasposicion	
			for(i=0;i<columnas;i++){		
				
				for(j=0;j<filas;j++){
				matriz2[j][i]=matriz[j][i];}
				
				}
					Salida(matriz,matriz2,filas,columnas);
	}
		
		void dato::Salida(int **matriz,int **matriz2, int filas,int columnas){
			int i=0;
			int j=0;
			cout<<"\nLa matriz original es  "<<endl;
						for(i=0;i<filas;i++){		
						
				for(j=0;j<columnas;j++){
				
				cout<< matriz[i][j]<<"\t ";}
				cout<<"\n";
				}
					cout<<"\nLa matriz traspuesta es  "<<endl;
						for(i=0;i<columnas;i++){		
						
				for(j=0;j<filas;j++){
				cout<< matriz2[j][i]<< "\t ";}
				cout<<"\n";
				}
			
				}
				
		
		int main(){
		setlocale(LC_ALL, "spanish");
			dato d;
			d.Entrada();
		
			
			
			return 0;
		}
