#include <iostream>
#include<locale.h>
using namespace std;
class persona{
string nom;
	int id,edad;
	public:
		void leer(){
cout<<"--------------------------------------"<<endl;
cout<<"\n\nDigite su nombre"<<endl;
	cin>>nom;
			cout<<"\nDigite su identificacion"<<endl;
			cin>>id;
			cout<<"\nDigite su edad"<<endl;
			cin>>edad;	
	
		}
		void ver(){
	
	cout<<"\n\nSu nombre es "<<nom<<endl;
	cout<<"\nSu identificación es "<<id<<endl;
	cout<<"\nSu edad es "<<edad<<endl;
	

		}
		
		
};
class estudiante:public persona{
	int cod;
	int i=0;
	float nota[5];
	float not1=0.0;
float not2=0.0;
	float not3=0.0;
	float not4=0.0;
	float not5=0.0;
	float pond=0.0;
	public:
		void captura(){
			cout<<"\nDigite su codigo estudiantil "<<endl;
			cin>>cod;
			for(i=0;i<5;i++){
				cout<<"\nDigite nota "<<i+1<<endl;
				cin>>nota[i];
			}
		}
		void calcular(){
			for(i=0;i<5;i++){
					not1=nota[0]*0.35;
				not2=nota[1]*0.20;
					not3=nota[2]*0.15;
						not4=nota[3]*0.10;
							not5=nota[4]*0.20;	
			}
	
		
			pond=not1+not2+not3+not4+not5;
		}
		void imprimir(){
			cout<<"\nSu nota final del ponderado es "<<pond<<endl;
			
		}
};


class trabajador:public persona{

long double salario,codt;

		long double saltot;

	long double horord;
	
	int ched,chen,chedf,chenf,salud,pens;
		int thed,then,thedf,thenf;
	public:
		void entrada(){

		cout<<"\nDigite codigo de trabajo"<<endl;
		cin>>codt;
		cout<<"\nDigite salario ganado en trabajo"<<endl;
		cin>>salario;
		horord=salario/240;
		}
		
		
		
void proceso(){

	
cout<<"\nDigite la cantidad de horas extras diurnas trabajadas "<<endl;
cin>>ched;
cout<<"\nDigite la cantidad de horas extras nocturnas trabajadas "<<endl;
cin>>chen;
cout<<"\nDigite la cantidad de horas extras diurnas festivas trabajadas "<<endl;
cin>>chedf;
cout<<"\nDigite la cantidad de horas extras nocturnas festivas trabajadas "<<endl;
cin>>chenf;
if(ched&&chen&&chedf&&chenf>12){
	cout<<"\nError,la cantidad de horas extras no puede ser superior a 12 horas "<<endl;

}
	
thed=horord*0.25;
then=horord*0.75;
thedf=horord*0.75;
thenf=horord*1;
salud=salario*0.04;
pens=salario*0.04;
saltot=salario+thed+then+thedf+thenf-salud-pens;

}
			
		
	
	void salida(){
	cout<<"-------------------------------------------------------------------------------- "<<endl;
			cout<<"\nSu codigo de trabajo es "<<codt<<endl;
		cout<<"\nSu salario base es "<<salario<<endl;
	
		cout<<"\nSu cantidad de horas extras diurnas trabajadas es de "<<ched<<endl;
		cout<<"\nSu cantidad de horas extras nocturnas trabajadas es de "<<chen<<endl;
		cout<<"\nSu cantidad de horas extras diurnas festivas trabajadas es de "<<chedf<<endl;
		cout<<"\nSu cantidad de horas extras nocturnas festivas trabajadas es de "<<chen<<endl;
	cout<<"\nSu salario total con horas extras y deducciones es de "<<saltot<<endl;

	
		
	}};



int main(){
		setlocale(LC_ALL,"spanish");
estudiante e;
trabajador t;
e.leer();
e.captura();
e.calcular();
e.ver();
e.imprimir();

t.leer();
t.entrada();
t.proceso();
t.ver();
t.salida();

return 0;
	
	
	
}



