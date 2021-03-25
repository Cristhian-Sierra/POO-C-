#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
class Mat{
	private:
		int i=0;
		int j=0;
		int k=0;
		int l=0;
		int aux;
		int vtam=0;
		int tammatf;
		int tammatc;
		int **mat;
		
	public:
		void Entrada();
		void Proceso(int **,int,int);
		void Salida(int **,int,int);
	
};
	void Mat::Entrada(){
		int **mat,tammatf,tammatc;
		cout<< " Digite tamaño de filas de la matriz  "<<endl;
		cin>>tammatf;
		cout<< " Digite tamaño de columnas la matriz  "<<endl;
		cin>>tammatc;
		mat = new int *[tammatf];
		if(mat==NULL){
			cout<< " Error 1 "<<endl;
		}
		for( j=0;j<tammatf;j++){
			mat[j]=new int[tammatc];
		if(mat[j]==NULL)
			cout<<" Error 2 "<<endl;  
	}

	for( i=0;i<tammatf;i++){
		for(j=0;j<tammatc;j++){
			cout<<" Digite posicion ["<<i<<"]["<<j<<"]"<<" de la matriz "<<endl;
			cin>>mat[i][j];
	
		}
		
	}

	Proceso(mat,tammatf,tammatc);
	
	}
	//Salida( tammatf, tammatc, **mat);
	void Mat::Proceso(int **matriz,int tammatf,int tammatc){
	

 //ordeno la matriz de menor a mayor
     for(i=0; i<tammatf; i++)
     {
        for( j=0; j<tammatc; j++)
        {
            for(k=0; k<tammatf;k++)
            {
                for( l=0; l<tammatc; l++)
                {
                    if(mat[i][j]<mat[k][l])
                    {
                        aux=mat[i][j];
                        mat[i][j]=mat[k][l];
                        mat[k][l]=aux;
                    }
 
                }
            }
         }
    }
    Salida(mat,tammatf,tammatc);	
}
	void Mat::Salida(int **mat,int tammatf,int tammatc){
	/*cout<<"\nLa matriz original es "<<endl;
		for(i=0;i<tammatf;i++){
			for(j=0;j<tammatc;j++){
				cout<<mat[i][j]<<"\t";
			}
				cout<<"\n";
			}*/
			cout<<"\nMatriz original queda "<<endl;
for( i=0;i<tammatf;i++){
		for(j=0;j<tammatc;j++){
			cout<<mat[i][j]<<"\t";
		}
	cout<<"\n";}

 cout<<"\nLos Datos De La Matriz Fueron Ordenados de Menor a Mayor:"<<endl;
    for( i=0; i<tammatf; i++)
    {
        for(j=0; j<tammatc; j++)
        {
            cout<<mat[i][j]<<"\t ";
        }
        cout<<endl;
    }
    
    cout<<endl;	
}
int main(){


setlocale(LC_ALL, "spanish");
//código del programa
Mat m;
m.Entrada();

system("pause");
return 1; 
}
