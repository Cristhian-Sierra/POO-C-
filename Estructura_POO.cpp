#include <iostream>
#include <stdlib.h>
#include<locale.h>

using namespace std;
class uno{
	public: 
	struct Estudiante{
		char nom[40];
		float nota;
		int cod;
	}	pilo;

	void leer();
	void ver();
};

	void uno::leer(){
		cout<<" Estudiante digite su nombre "<<endl;
	gets(pilo.nom);
	cout<<" Estudiante  digite su codigo "<<endl;
	cin>>pilo.cod;
		cout<<" Estudiante digite su nota"<<endl;
	cin>>pilo.nota;
		
	}
	void uno::ver(){
	cout<<" Estudiante su nombre es "<<pilo.nom<<endl;
	cout<<" Estudiante su codigo es "<<pilo.cod<<endl;
	cout<<" Estudiante  su nota es "<<pilo.nota<<endl;

			
	}
	int main(){
		uno u;
		u.leer();
		u.ver();
	}
