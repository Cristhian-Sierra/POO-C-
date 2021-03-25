#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
class dato{
	float **matriz;
	int filas,columnas,i,j,s;
	public:
		void Entrada();
		void Proceso();
		void Salida();
		dato();
		~dato();
};
	dato::dato(){
		cout<<" Construyendo... "<<endl;
		cout<<" Digite tamaño, de filas "<<endl;
		cin>>filas;
			cout<<" Digite tamaño, de columnas "<<endl;
		cin>>columnas;
		matriz= new float *[filas];
		if(matriz==NULL)
		cout<<" Error 1 "<<endl;
		s=0;
		for(j=0;j<filas;j++){
matriz[j]= new float [columnas];
if(matriz[j]==NULL)
cout<<" Error 2 "<<endl;			
			
		}
	}
		dato::~dato(){
			
			cout<<" Destruyendo " <<endl;
			for(i=0;i<filas;i++)
		delete matriz[i];
		}
		void dato::Entrada(){
			
			for(i=0;i<filas;i++){
			
				for(j=0;j<columnas;j++){
					cout<<" Digite numero " <<i<<j<<endl;
					cin>>matriz[i][j];
				}
		}
		
		}
		void dato::Proceso(){
			for(i=0;i<filas;i++)
				for(j=0;j<columnas;j++)
			s+=matriz[i][j];
		}
		void dato::Salida(){
			cout<<" La matriz es  "<<endl;
						for(i=0;i<filas;i++)
				for(j=0;j<columnas;j++)
				cout<< matriz[i][j]<< " ";
				cout<<endl;
				cout<< " suma "<<s;
		}
		int main(){
		setlocale(LC_ALL, "spanish");
			dato d;
			d.Entrada();
			d.Proceso();
			d.Salida();
			
			
			return 0;
		}
