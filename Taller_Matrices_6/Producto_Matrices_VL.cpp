#include <iostream>
#include <stdlib.h>
#include <locale.h> 
using namespace std;
class ProMat{
public:
void  Entrada();
void Proceso(int **,int**,int **,int,int,int);
void Salida(int **,int **,int**,int,int,int);
};

void  ProMat::Entrada(){
	
int i=0;
int j=0;

int tammatf1,tammatc1,tammatc2;
int **mat,**mat2, **mat3;
cout <<" Digite tamaño de filas y columnas de la  primera matriz " <<endl;
cin>> tammatf1>>tammatc1;
while(tammatf1&&tammatc1<=0){

cout<<" Error digite tamaños mayor que 0 " <<endl;
cin>> tammatf1>>tammatc1;}

cout <<" Digite tamaño de columnas de segunda matriz, sabiendo que el tamaño obligado de filas de esta matriz es  " << tammatc1 <<endl;
cin>>tammatc2;
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
	//ADM matriz 2
	mat2 = new int *[tammatc1];
		if(mat2==NULL){
			cout<< " Error 1 "<<endl;
		}
		for( j=0;j<tammatc1;j++){
			mat2[j]=new int[tammatc2];
		if(mat2[j]==NULL)
			cout<<" Error 2 "<<endl; } 
			//ADM matriz 3
				mat3= new int *[tammatf1];
		if(mat3==NULL){
			cout<< " Error 1 "<<endl;
		}
		for( j=0;j<tammatf1;j++){
			mat3[j]=new int[tammatc2];
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
	cout<<"\n Datos segunda matriz "<<endl;
	for( i=0;i<tammatc1;i++){
		for(j=0;j<tammatc2;j++){
			cout<<" Digite posicion ["<<i<<"]["<<j<<"]"<< " de la  segunda matriz "<<endl;
			cin>>mat2[i][j];
		}
	}
Proceso(mat,mat2,mat3,tammatf1,tammatc1,tammatc2);	
}

void ProMat::Proceso(int **mat,int **mat2,int **mat3,int tammatf1,int tammatc1,int tammatc2){
int i=0;
int j=0;
int z=0;
for(  i=0;i<tammatf1;i++){
	for(j=0;j<tammatc2;j++){
		for(z=0;z<tammatc1;z++){
	mat3[i][j]+=mat[i][z]*mat2[z][j];
	
	}
	}
}
	Salida(mat,mat2,mat3,tammatf1,tammatc1,tammatc2);
}

void ProMat::Salida(int ** mat,int **mat2,int **mat3,int tammatf1,int tammatc1,int tammatc2){
int i=0;
int j=0;
	cout<<"\nLa primera matriz queda "<<endl;
	for( i=0;i<tammatf1;i++){
		for(j=0;j<tammatc1;j++){
		cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\nLa segunda matriz queda "<<endl;
	for( i=0;i<tammatc1;i++){
		for(j=0;j<tammatc2;j++){
		
			cout<<mat2[i][j]<<"\t";
		}
		cout<<"\n";
	}

cout<< "\nEl  producto de las matrices  es: "<<endl;
for(  i=0;i<tammatf1;i++){
	for(j=0;j<tammatc2;j++){	
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


