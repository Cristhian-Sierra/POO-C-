#include <iostream>
#include <stdlib.h>
using namespace std;
class datos{

	public:
		
		void Leer();
		
};


void datos::Leer(){
	int a=153;
	int *p;
	cout<<" El valor de a desde "<<a<<endl;
	p=&a;
		cout<<" E valor de a  "<<*p<<endl;

		cout<<" direccion de a "<<p<<endl;
	
		cout<<" direccion de  "<<&a<<endl;
	*p=53;
	cout<<" Nuevo valor de a desde "<<a<<endl;
	cout<<"............ " <<*p<<endl;
}

int manin(){
	
	datos d;
	d.Leer();

	system("pause");
	return 0;
}
