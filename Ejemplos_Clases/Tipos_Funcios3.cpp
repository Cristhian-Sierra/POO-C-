#include <iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;
class uno{
	public:
	void Entrada(int a[][3],int);
	int Proceso(int b[][3],int);
	void Salida(int c[][3],int,int);
};
void uno::Entrada(int a[3][3],int x){
	for(int i=0;i<x;i++){
	for(int j=0;j<x;j++){
			cout<<" Digite numero " <<i<<j<<endl;
	cin>>a[i][j];
	}

	}
}
	int uno::Proceso(int b[3][3],int n){
		int s=0;
		for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
			s+=b[i][j];
		}}
		return s;
}
	void uno::Salida(int c[3][3],int x,int res){
		cout<<"\nLos datos ingresados son "<<endl;
	
			for(int i=0;i<x;i++){
					for(int j=0;j<x;j++){
		cout<<c[i][j]<< "\t ";
		}
		cout<<"\n";}
		cout<<"\nY su respectiva suma de elementos es "<< res<<endl;
		
}
	int main(){
		uno u;
		int datos [3][3],r;
		u.Entrada(datos,3);
		r=u.Proceso(datos,3);
		u.Salida(datos,3,r);
		
	}
