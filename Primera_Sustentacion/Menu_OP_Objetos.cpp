#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
class Menuob{
	private:
	double n1,n2,Sum,Rest,Multi;
		double Div;
	
	char op;
	
	public:
		void Entrada();
		void Proceso();
		void Salida();
		Menuob();
		~Menuob();
};

Menuob::Menuob(){
	cout<<" Construyendo...  " <<endl;
	Sum=0.0;
	Rest=0.0;
	Multi=0.0;
	Div=0.0;
}
		Menuob::~Menuob(){
				cout<<" Destruyendo...  " <<endl;
		}
		
void Menuob::Entrada(){
	cout<<" Digite primer numero " <<endl;
	cin>> n1;
	cout<<" Digite segundo numero "<<endl;
	cin>>n2;

	

}

		void  Menuob::Proceso(){
			
			switch (op){
			
			case '1':
				Sum= n1+n2;
					
				break;
					case '2':
			Rest= n1-n2;
			
				break;
					case '3':
				Multi= n1*n2;
				
				break;
					case '4':
						if(n2<0){
						break;
						}
						else{
						Div=n1/n2;
						}
			
						
				break;
					case '5':		
				break;
		}
		}

	void Menuob::Salida(){
		do{
		cout<< "\n1. Sumar los dos n�meros "<<endl;
		cout<< "\n2. Restar los dos n�meros "<<endl;
		cout<< "\n3. Multiplicar los dos n�meros "<<endl;
		cout<< "\n4. Dividir los dos n�meros "<<endl;
		cout<< "\n5. Salir"<<endl;
cout<<"\nPor favor escoja opcion"<<endl;
cin>>op;
			switch (op){
			
			case '1':
			Sum= n1+n2;
					
					cout<<"\nLa suma de los numeros es "<<Sum<<endl;	
				break;
					case '2':
			Rest= n1-n2;
					cout<<"\nLa Resta de los numeros es "<<Rest<<endl;	
				break;
				
					case '3':
				Multi= n1*n2;
				cout<<"\nLa multipliacacion de los numeros es "<<Multi<<endl;	
				break;
					case '4':
						if(n2==0){
							cout<<" La division entre 0 no se puede hacer "<<endl;
					}else{cout<<" La division es "<<Div<<endl;
					Div=n1/n2;
					}

				break;
					case '5':
						
				break;
				
				default:
				cout<< "\nError, opcion no valida "<<endl;
		}}
		while(op!='5');
}
int main() 
{ 
setlocale(LC_ALL, "spanish");
//c�digo del programa

Menuob OB;
OB.Entrada();
OB.Proceso();
OB.Salida();
system("pause");
return 1; 
}
