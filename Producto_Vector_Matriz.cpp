#include <iostream>
#include <stdlib.h>
#include <locale.h> 
using namespace std;
class ProMat{
public:
void  Entrada();
void Proceso(int **,int*,int **,int,int,int);
void Salida(int **,int *,int**,int,int,int);
};

void  ProMat::Entrada(){
	
int i=0;
int j=0;

int tammatf1,tammatc1,tamvec;

int **mat,*vec, **mat3;
cout <<" Digite tamaño de filas de la primera matriz " <<endl;
cin>> tammatf1;

while(tammatf1<=0){

cout<<" Error digite tamaños mayor que 0 " <<endl;
cin>> tammatf1;}
cout <<" Digite tamaño de columnas de la matriz " <<endl;
cin>> tammatc1;

while(tammatc1<=0){

cout<<" Error digite tamaños mayor que 0 " <<endl;
cin>> tammatc1;}


//ADM matriz 1
mat = new int *[tammatf1];
		if(mat==NULL){
			cout<< " Error 1 "<<endl;
		}
		for( j=0;j<tammatf1;j++){
			mat[j]=new int[tammatc1];
		if(mat[j]==NULL)
			cout<<" Error 2 "<<endl;  
	}
	//ADM vector
	tamvec=tammatc1;
 vec= new int[tamvec];
 if(vec==NULL){
 	cout<<" Error,01 "<<endl;
 }
			//ADM matriz 3
				mat3= new int *[tammatf1];
		if(mat3==NULL){
			cout<< " Error 1 "<<endl;
		}
		for( j=0;j<tammatf1;j++){
			mat3[j]=new int[tamvec];
		if(mat3[j]==NULL)
			cout<<" Error 2 "<<endl;  
}
//Llenamiento de matriz
cout<<"\nDatos primera matriz "<<endl;
	for( i=0;i<tammatf1;i++){
		for(j=0;j<tammatc1;j++){
			cout<<" Digite posicion ["<<i<<"]["<<j<<"]"<< " de la  primera matriz "<<endl;
			cin>>mat[i][j];
		}
	}
	cout<<"\n Datos del vector "<<endl;
	for(i=0;i<tamvec;i++){
		cout<<" Digite dato posicion "<<i<<endl;
		cin>>vec[i];
	}
Proceso(mat,vec,mat3,tammatf1,tammatc1,tamvec);	
}

void ProMat::Proceso(int **mat,int *vec,int **mat3,int tammatf1,int tammatc1,int tamvec){
int i=0;
int j=0;
int z=0;
for(  i=0;i<tammatf1;i++){
	for(j=0;j<tamvec;j++){
		for(z=0;z<tammatc1;z++){
	mat3[i][j]+=mat[i][z]*vec[z];
	
	}
	}
}
	Salida(mat,vec,mat3,tammatf1,tammatc1,tamvec);
}

void ProMat::Salida(int ** mat,int *vec,int **mat3,int tammatf1,int tammatc1,int tamvec){
int i=0;
int j=0;
	cout<<"\nLa matriz queda "<<endl;
	for( i=0;i<tammatf1;i++){
		for(j=0;j<tammatc1;j++){
		cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\nEl vector queda "<<endl;
		for(i=0;i<tamvec;i++){

		cout<<vec[i]<<endl;
	}

cout<< "\nEl  producto del vector y la matriz es  es: "<<endl;
for(  i=0;i<tammatf1;i++){
	for(j=0;j<tamvec;j++){	
		 cout << "\nPosicion ["<<i<<"]["<<j<<"]"<<" = " << mat3[i][j]<<endl;
	}
}

}
int main(){
setlocale(LC_ALL, "spanish");
ProMat pm;
pm.Entrada();
system ("pause");
return 0;
}
			
/*int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
VecMat VM;
VM.Entrada();
VM.Proceso();
VM.Salida();
system("pause");
return 1; 
}
#include<iostream>
#include <vector>
using namespace std;
 
#define MAX_ROWS 4 // m
#define MAX_COLS 4 // n
 
typedef int tMatriz[MAX_ROWS][MAX_COLS]; // mxn
typedef vector <int> tVector; // n
 
void Matriz_x_Vector(tMatriz, tMatriz, tVector );
void MostrarMatriz(tMatriz);
void Inicializar(tMatriz, tVector &);
 
int main()
{
  tMatriz m1 , m2;
  tVector v;
 
  Inicializar(m1,v);
  MostrarMatriz(m1);
  Matriz_x_Vector(m1, m2, v);
  cout << "---------------------------" << endl;
  MostrarMatriz(m2);
  cin.get();
  return 0;
}
 
void Inicializar(tMatriz m, tVector &v)
{
  int x = 1;
  for(int r = 0; r < MAX_ROWS; r++) {
    v.push_back(r+1);
    for(int c = 0; c < MAX_COLS; c++)
       m[r][c] = x++;
  }
}
 
void Matriz_x_Vector(tMatriz source, tMatriz target, tVector vec)
{
  for(int r = 0; r < MAX_ROWS; r++)
    for(int c = 0; c < MAX_COLS; c++)
      target[r][c] = source[r][c] * vec[r];
}
 
void MostrarMatriz(tMatriz mat)
{
  for(int r = 0; r < MAX_ROWS; r++ ) {
    for(int c = 0; c < MAX_COLS; c++)
      cout << mat[r][c] << '\t';
    cout << endl << endl;
  }
}*/
