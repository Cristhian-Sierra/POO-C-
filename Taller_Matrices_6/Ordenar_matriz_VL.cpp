#include<iostream>
#include<stdio.h>
using namespace std;
class ordenarmatriz{
	public:
		ordenarmatriz();
		~ordenarmatriz();
		void entrada(int **,int);
		void proceso(int **,int);
		void salida(int **,int);
};


ordenarmatriz::~ordenarmatriz(){
	cout<<"Destruyendo"<<endl;
}
ordenarmatriz::ordenarmatriz(){
	int **matriz;
	int dimension;
	cout<<"Ingrese la dimension"<<endl;
	cin>>dimension;
	matriz=new int*[dimension];
	for(int x=0;x<dimension;x++){
		matriz[x]=new int[dimension];
	}
	entrada(matriz,dimension);
}

void ordenarmatriz::entrada(int **matriz,int dimension){
	for(int x=0;x<dimension;x++){
		for(int z=0;z<dimension;z++){
			cout<<"Ingrese el numero "<<x+1<<","<<z+1<<endl;
			cin>>matriz[x][z];
		}
	}
	cout<<"Entrada"<<endl;
	for(int x=0;x<dimension;x++){
		for(int z=0;z<dimension;z++){
			cout<<matriz[x][z]<<"\t";
		}
		cout<<endl;
	}
	proceso(matriz,dimension);
}

void ordenarmatriz::proceso(int **matriz,int dimension){
	int auxiliar=0;
	for(int x=0;x<dimension;x++){
		for(int y=0;y<dimension;y++){
			for(int z=0;z<dimension;z++){
				for(int w=0;w<dimension;w++){
					if(matriz[x][y]<matriz[z][w]){
					//cout<<"Ingreso"<<endl;
			   		auxiliar=matriz[x][y];
			   		matriz[x][y]=matriz[z][w];
			   		matriz[z][w]=auxiliar;
					}
				}	
			}
		}
	}
	salida(matriz, dimension);
}

void ordenarmatriz::salida(int **matriz,int dimension){
	cout<<"Matriz ordenada"<<endl;
	for(int x=0;x<dimension;x++){
		for(int z=0;z<dimension;z++){
			cout<<matriz[x][z]<<"\t";
		}
		cout<<endl;
	}
}

int main(){
	ordenarmatriz m1;
}

