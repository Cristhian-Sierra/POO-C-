#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 

class clave{
	
	
private:	 
int n1,contra, i;
	public:
		void Entrada();
		void Proceso();
		void Salida();
		clave();
		~clave();
};
clave::clave(){
	cout<<" Construyendo "<<endl;
	contra=320;
	i=0;

}
		clave::~clave(){
			cout<<" Destruyendo "<<endl;
		}
			void clave::Entrada(){
				cout<<" Usuario, digite la contraseña, que cree, que es la correcta "<<endl;
				cin>>n1;
			}
			void clave::Proceso(){
				
		while(i<4){
			
			if(n1==contra){
			
				break;}
				
				else{
				
				
					i++;
				}
			if(i==4)	{
			
			}
			}
		}



void clave::Salida(){
	
		while(i<4){
			
			if(n1==contra){
				cout<<" La clave "<<n1<<" es correcta "<<endl;
				break;}
				
				else{
					cout<<" La clave "<<n1<<" es incorrecta "<<endl;
					cin>>n1;
					i++;
				}
			if(i==4)	{
				cout<<" Ha superado el numero de intentos "<<endl;
			}
			}
		}
	

	
	

int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
clave CLVE;
CLVE.Entrada();
//CLVE.Proceso();
CLVE.Salida();
system("pause");
return 1; 
}
