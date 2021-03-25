#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
class Matriz{
	private: int i,j,tam,  Mat[100][100];
	int Sumf,Sumcol,SumDig,SumDig2;
	public:
		void Entrada();
		void Proceso();
		void Salida();
	Matriz();
	~Matriz();
	
};
	Matriz::Matriz(){
		cout<<" Construyendo "<<endl;
i=0;
j=0;
tam=0;
Sumf=0;
Sumcol=0;
SumDig=0;
SumDig2=0;
	}
		Matriz::~Matriz(){
			cout<<" Destruyendo "<<endl;
		}
	void Matriz::Entrada(){
		cout<<"\nDigite tamaño de la matriz "<<endl;
		cin>>tam;
		while(tam<=0){
			cout<<"\nError, digite tamaño mayor que 0 "<<endl;
			cin>>tam;
		}
	}
	void Matriz::Proceso(){
		
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
	
	}
	void Matriz::Salida(){
			cout<<"\nsu respectiva matriz es: "<<endl;
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
	
}
	
int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
Matriz OpMat;
OpMat.Entrada();
	OpMat.Proceso();
	OpMat.Salida();
system("pause");
return 1; 
}
