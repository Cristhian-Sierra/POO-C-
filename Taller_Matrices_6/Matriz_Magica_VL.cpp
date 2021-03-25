#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
	class Matriz {
	public:
		void Entrada();
		void Proceso(int **,int,int,int,int,int);
		void Salida(int **,int,int,int,int,int );
};

	void Matriz::Entrada(){
int i=0;
int j=0;
int tam=0;
int **Mat;
int Sumf;
int Sumcol;
int SumDig;
int SumDig2;
		cout<<"\nDigite tamaño de la matriz "<<endl;
		cin>>tam;
		while(tam<=0){
			cout<<"\nError, digite tamaño mayor que 0 "<<endl;
			cin>>tam;
		}
		
	Mat =new int *[tam];
		if(Mat==NULL){
			cout<< " Error 1 "<<endl;
		}
		for( j=0;j<tam;j++){
			Mat[j]=new int[tam];
		if(Mat[j]==NULL)
			cout<<" Error 2 "<<endl;  
	}
	Proceso(Mat,tam,Sumf,Sumcol,SumDig,SumDig2);	
	}
	void Matriz::Proceso(int **Mat,int tam,int Sumf,int Sumcol, int SumDig, int SumDig2){
		int i=0;
		int j=0;
		SumDig=0;
		SumDig2=0;
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
		cout<<"\nDigite posicion ["<<i<<"]["<<j<<"]"<<endl;
		cin>> Mat[i][j];
	}}
	

		for(i=0;i<tam;i++){
			Sumf=0;	
	for(j=0;j<tam;j++){
		Sumf+=Mat[i][j];
	
	}
	
	}

		for(j=0;j<tam;j++){
				Sumcol=0;
			for(i=0;i<tam;i++){
				Sumcol+=Mat[i][j];
	}

	}
	
		for(i=0;i<tam;i++){
		
			for(j=0;j<tam;j++){
				if(i==j){
				
				SumDig+=Mat[i][j];}
	}}
	
		for(i=0;i<tam;i++){
		
			for(j=0;j<tam;j++){
				if(i+j==tam-1){
				
				SumDig2+=Mat[i][j];}
	}}
	Salida(Mat,tam,Sumf,Sumcol,SumDig,SumDig2);
	}
	void Matriz::Salida(int **Mat,int tam,int Sumf,int Sumcol, int SumDig, int SumDig2){
int i=0;
int j=0;

cout<<"\nSu respectiva matriz es: "<<endl;
for(i=0;i<tam;i++){
			
for(j=0;j<tam;j++){
cout<<Mat[i][j]<<"\t";}
	cout<<"\n";		
	}

for(i=0;i<tam;i++){
			Sumf=0;	
	for(j=0;j<tam;j++){
		Sumf+=Mat[i][j];
	
	}
	
		cout<<"\nLa suma de la fila " << i << " es:  "<< Sumf<<endl;
	}

		for(j=0;j<tam;j++){
				Sumcol=0;
			for(i=0;i<tam;i++){
				Sumcol+=Mat[i][j];
	}
		cout<<"\nLa suma de la columna " << j << " es:  "<< Sumcol<<endl;
	}
	
	cout<<"\nLa suma de su diagonal principal es "<<SumDig<<endl;
	cout<<"\nLa suma de su diagonal secundaria es "<<SumDig2<<endl;
if(Sumf==Sumcol&&SumDig==SumDig2){
	cout<<"\nSuma de filas -> "<<Sumf<< " = "<<Sumcol<<" <- suma de columnas "<<endl;
cout<<" la suma de diagonal principal "<< SumDig<< "="<<SumDig2<<"<- suma diagonal secundaria"<<endl;
cout<<" Por lo tanto la matriz es magica "<<endl;
	}
	else{
		cout<<"\nSuma de filas -> "<<Sumf<< " != "<<Sumcol<<" <- suma de columnas "<<endl;
cout<<"\nLa suma de diagonal principal "<< SumDig<< " != "<<SumDig2<<"<- suma diagonal secundaria"<<endl;
cout<<"\nPor lo tanto la matriz no es magica "<<endl;	
	}
	
	for(i=0;i<tam;i++){
		delete Mat;
	}	
}
	
int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
Matriz OpMat;
OpMat.Entrada();
system("pause");
return 1; 
}

