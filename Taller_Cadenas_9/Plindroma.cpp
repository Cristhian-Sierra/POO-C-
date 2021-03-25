#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
#define MAX 25
using namespace std; 
class Palindroma{

		public:
			void Entrada();
			void Proceso(char[],char);
			void Salida(char[],char);
			
			
};
	
			void Palindroma::Entrada(){
				char cadena[MAX];
				char caracter;
		cout<<"\nDigite palabra "<<endl;
		cin>>caracter;
		
	Proceso(cadena,caracter);

		}
				void Palindroma::Proceso(char cadena[],char caracter){
					int i=0;
				while(i<MAX&&caracter!='.')	{
					cadena[i]=caracter;
					i++;
		cin>>caracter;
				}
				int pi=0;
	int	pf=i-1;
				
				while(  pi<pf &&cadena[pi]==cadena[pf]){
					pi++;
					pf--;
				}
					if(pi>=pf){
		cout<<"\nLa palabra  es palindroma "<<endl;
			
			}else{
			
			cout <<"\nLa palabra no es  palindroma "<<endl;
			}
				}

		/*	for(i=0;i<30;i++){
		cadena[i];
		
			}
				for(i=30;i>=0;i--){
		j=cadena[i];
		
			}
			
				/*	j=cadena[i]-1;
	
		mitad=j/2;
		while(cadena[i]==cadena[j]){
			if(mitad==i){
				cout<<" La palabra es palindroma "<<endl;
			}
			j--;
			j++;
		}
		if(mitad!=i)
		{cout<<" No lo es "<<endl;
		}

}*/
	//void Palindroma::Salida(){}
				
int main() 
{ 
setlocale(LC_ALL, "spanish");
//código del programa
Palindroma p;
p.Entrada();

//p.Salida();
system("pause");
return 1; 
}
