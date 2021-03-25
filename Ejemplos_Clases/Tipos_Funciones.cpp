#include <iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;
class uno{
	public:
	void Entrada(int a[],int);
	int Proceso(int b[],int);
	void Salida(int c[],int,int);
};
void uno::Entrada(int a[],int x){
	for(int i=0;i<x;i++){
	
	cout<<" Digite numero " <<i<<endl;
	cin>>a[i];
	}
}
	int uno::Proceso(int b[],int n){
		int s=0;
		for(int i=0;i<n;i++){
			s+=b[i];
		}
		return s;
	}
	void uno::Salida(int c[],int m,int n){
		cout<<" Loas datos ingresados son "<<endl;
	
			for(int i=0;i<m;i++){
		cout<<c[i]<< " ";
		}
		cout<<" Y su respectiva suma de elementos es "<< n<<endl;
		
	}
	int main(){
		uno u;
		int datos [10],r;
		u.Entrada(datos,10);
		r=u.Proceso(datos,10);
		u.Salida(datos,10,r);
		
	}
