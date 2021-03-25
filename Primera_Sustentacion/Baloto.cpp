#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
#include<time.h>
#include <cstdlib>
using namespace std; 

class baloto{
	
	private: int x,a,b,c,d,f,q,w,e,r,y,z;
	public: void Entrada();
	void Proceso();
	void Salida();
	baloto();
	~baloto();
	
};
	baloto::baloto(){
		cout<<" Construyendo... "<<endl;
		srand((unsigned) time(NULL));
	}
	baloto::~baloto(){
		cout<<" Destruyendo... "<<endl;
	}
	void baloto::Entrada(){
		
		cout<<" Ingrese los numeros, por casilla de numero "<<endl;
		cout<<" Casilla 1:"<<endl;
		cin>>q;
			cout<<" Casilla 2:"<<endl;
		cin>>w;
			cout<<" Casilla 3:"<<endl;
		cin>>e;
			cout<<" Casilla 4:"<<endl;
		cin>>r;
			cout<<" Casilla 5:"<<endl;
		cin>>y;
			cout<<" Casilla 6:"<<endl;
		cin>>z;
		
		
	}
	void baloto::Proceso(){
		
		x=1+rand()%45;
		a=1+rand()%45;
		b=1+rand()%45;
		c=1+rand()%45;
		d=1+rand()%45;
		e=1+rand()%16;
	
			cout<<"\nSus acietos son:"<<endl;
		if(x==q){
		cout<<" Casilla 1: ha acertado "<<endl;
		
		}else
		{
			cout<<" Casilla 1: No ha acertado ninguno "<<endl;
		}
			if(a==w){
		cout<<" Casilla 2: ha acertado "<<endl;
		
		}else
		{
			cout<<" Casilla 2: No ha acertado ninguno "<<endl;
		}
			if(b==e){
		cout<<" Casilla 3: ha acertado "<<endl;
		
		}else
		{
			cout<<" Casilla 3: No ha acertado ninguno "<<endl;
		}
			if(c==r){
		cout<<" Casilla 4: ha acertado "<<endl;
		
		}else
		{
			cout<<" Casilla 4: No ha acertado ninguno "<<endl;
		}
			if(d==y){
		cout<<" Casilla 5: ha acertado "<<endl;
		
		}else
		{
			cout<<" Casilla 5: No ha acertado ninguno "<<endl;
		}
			if(e==z){
		cout<<" Casilla 6: ha acertado "<<endl;
		
		}else
		{
			cout<<" Casilla 6: No ha acertado ninguno "<<endl;
		}
	}
void baloto::Salida(){
	cout<<"\nLos numeros ingresados son:\n";
	cout<<q<<endl;
	cout<<w<<endl;
	cout<<e<<endl;
	cout<<r<<endl;
	cout<<y<<endl;
	cout<<z<<endl;

cout<<" Los numeros que cayeron en el juego fueron "<<endl;
		cout<<x<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
}
int main() { 
setlocale(LC_ALL, "spanish");
//código del programa
baloto Bal;
Bal.Entrada();
Bal.Proceso();
Bal.Salida();

system("pause");
return 1; 
}
