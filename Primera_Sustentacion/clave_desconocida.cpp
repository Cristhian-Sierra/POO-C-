
#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 

#include <cstdlib>
using namespace std; 

class clave{
	
	private: int q,x,i;
	public: void Entrada();
	void Proceso();
	void Salida();
	clave();
	~clave();
	
};
	clave::clave(){
		cout<<" Construyendo... "<<endl;
		i=0;
		x=1+rand()%100;
			
	}
	clave::~clave(){
		cout<<" Destruyendo "<<endl;
	}
	void clave::Entrada(){
		
		cout<<" Ingrese los numeros, para la clave "<<endl;
		cin>>q;
	
		
	}
	void clave::Proceso(){

					
		while(i<4){
			
			if(q==x){
			
				break;}
				
				else{
				
				if(q>x){
					
				}
				else{
				}
					i++;
				}
			if(i==4)	{
			
			}
			}}

		
void clave::Salida(){
	
	while(i<4){
			
			if(q==x){
				cout<<" La clave "<<q<<" es correcta "<<endl;
				break;}
				
				else{
					if(q>x)
					{
							cout<<" La clave "<<q<<" es incorrecta, digite numero menor "<<endl;
					cin>>q;
					}else{
						cout<<" La clave " <<q<< " es incorrecta, digite numero mayor  "<<endl;
						cin>>q;
					}
				
					i++;
		}}
			if(i==4)	{
				cout<<" Ha superado el numero de intentos "<<endl;
			}
			
	cout<<" La clave coorrecta es "<<x<<endl;
}
int main() { 
setlocale(LC_ALL, "spanish");
//código del programa
clave Bal;
Bal.Entrada();
//Bal.Proceso();
Bal.Salida();

system("pause");
return 1; 
}
