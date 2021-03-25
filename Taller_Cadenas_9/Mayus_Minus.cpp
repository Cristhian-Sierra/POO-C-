#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std;


class Mayus_Minus{
	private:
		char cadena[100],mayus[100],minus[100];
		int i;
		public:
			void Entrada();
			void Proceso();
			void Salida();
			Mayus_Minus();
			~Mayus_Minus();
			
};
	Mayus_Minus::Mayus_Minus(){
			cout<< " Construyendo... "<<endl;
		
			i=0;
	}

			Mayus_Minus::~Mayus_Minus(){
				cout<<" Destruyendo... "<<endl;
			}
			void Mayus_Minus::Entrada(){
				
				cout<<" Digite cadena "<<endl;
				cin.getline(cadena,100,'\n');
				
			}
			void Mayus_Minus::Proceso(){
				for(i=0;i<100;i++){
				
				if(cadena[i]>='A'&& cadena[i]<='Z'){
					minus[i]=cadena[i]+=32;
				}else{
					mayus[i]=cadena[i]-=32;
					
					
				}}
			}
			void Mayus_Minus::Salida(){
				cout<<" La cadena queda "<<endl;
				for(i=0;i<100;i++){
					cout<< cadena[i];
				}
			
					/*cout<<" La cadena cambiada es "<<endl;
				for(i=0;i<100;i++){
						if(cadena[i]>='A'&& cadena[i]<='Z'){
					cout<<minus[100];
				}else{
					cout<<mayus[100];
				}}
				
				
			}*/}

int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
Mayus_Minus MayMin;
MayMin.Entrada();
MayMin.Proceso();
MayMin.Salida();	
system("pause");
return 1; 
}
