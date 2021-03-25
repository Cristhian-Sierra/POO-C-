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
	
	};	

	void leer(Estudiante);
	void ver(Estudiante);
};

	void uno::leer(Estudiante pilo){
		
		cout<<" Estudiante digite su nombre "<<endl;
	gets(pilo.nom);
	cout<<" Estudiante  digite su codigo "<<endl;
	cin>>pilo.cod;
		cout<<" Estudiante digite su nota"<<endl;
	cin>>pilo.nota;
		ver(pilo);
	}
	void uno::ver(Estudiante pilo){
	cout<<" Estudiante su nombre es "<<pilo.nom<<endl;
	cout<<" Estudiante su codigo es "<<pilo.cod<<endl;
	cout<<" Estudiante  su nota es "<<pilo.nota<<endl;

			
	}
	int main(){
uno::Estudiante p;
		uno u;
			u.leer(p);
	
		//u.ver(p);	
	
	}
