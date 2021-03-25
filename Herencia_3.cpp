#include <iostream>
#include <stdlib.h>
#include<locale.h>
using namespace std;
class pantalla{
	protected:
		long long recibototc=0;
			long long recibototb=0;
	char op;
	int tamp19;
	int tamp24;
	int resxc,resyc;
	int resxb,resyb;
double tipopb;
double tipopc;
long long prectotpb=0;
long long prectotpc=0;
	
	public:
	
		pantalla(){
			tamp19=150000;
			tamp24=550000;
			tipopc= 250000;//"LED"
			tipopb=100000;//"LCD"
		}
	void leerp(){
	
		
	
cout<<"\n ¿Desea adquirir un pantalla? \n1)Para si \n2)Para no"<<endl;
	cin>>op;
		switch(op){
		case '1':
			prectotpb=tamp19+tipopb;
			prectotpc=tamp24+tipopc;
			break;
			case '2':
				break;
				default:
					cout<<"\nOpción no valida "<<endl;}
				
	}
	
	void verp();
	};

class tarjeta{
	protected:
	char op2,op3,op4;
	double procesadorb,procesadorc;
	double ramb,ramc;
	double marcatc,marcatb;
long double totaramb,totaramc=0;
long double totproc,totprob=0;
long long tottargc,tottargb=0;
	public:
		tarjeta(){
		ramb=115000; //4 gb
		ramc=590000; //16 gb
		procesadorb=  270000;//INTEL G4560 3.5 G $
		procesadorc=1790000;//AMD RYZEN TREADRIPPER 1900x $ 
		marcatc=198000;//GIGABYTE H110M MH $ 
		marcatb= 1799000;//ASUS X399 ROG ZENITH EXTREME $ 1.799.000
	}
	void leert(){
		cout<<"\n ¿Desea adquirir una targeta ram? \n1)Para si \n2)Para no"<<endl;
	cin>>op2;
		switch(op2){
		case '1':
			 totaramb+=ramb;
			 totaramc+=ramc;
			break;
			case '2':
				break;
				default:
					cout<<"\nOpción no valida "<<endl;}
				
	
	
	cout<<"\n ¿Desea adquirir un procesador \n1)Para si \n2)Para no"<<endl;
	cin>>op3;
		switch(op3){
		case '1':
			 totproc+=procesadorc;
			 totprob+=procesadorb;
			break;
			case '2':
				break;
				default:
					cout<<"\nOpción no valida "<<endl;}
					
	cout<<"\n ¿Desea adquirir un targeta grafica? \n1)Para si \n2)Para no"<<endl;
	cin>>op4;
		switch(op4){
		case '1':
			 tottargc+=marcatc;
			 tottargb+=marcatb;
			break;
			case '2':
				break;
				default:
					cout<<"\nOpción no valida "<<endl;}
	}
	void vert();
	
};
class computador:public pantalla,public tarjeta{
	protected:
		
	double ddc;
	double ddb;
	char op5;
long double totddb;
long double totddc;
	public:
		computador(){
	ddc=770000;// 500 GB SSD M.2 SAMSUNG 960EVO $ 770.000
	ddb=155000;// 1 TB 7200 RPM 64B TOSHIBA O SEGUATE$ 155.000
}
		void entrada(){
			cout<<"\n ¿Desea adquirir un disco duro de almacenamiento? \n1)Para si \n2)Para no"<<endl;
	cin>>op5;
		switch(op5){
		case '1':
			 totddc+=ddc;
			 totddb+=ddb;
			break;
			case '2':
				break;
				default:
					cout<<"\nOpción no valida "<<endl;}
	}	
		
		void cotizar(){
		
			recibototc=totddc+totaramc+totproc+prectotpc;
				recibototb=totddb+totaramb+totprob+prectotpb;
		}
		void salida(){
			cout<<"El total del cotizado con productos más costosos es "<<recibototc<<endl;
			cout<<"El total del cotizado con productos más economicos es "<<recibototb<<endl;
		}
};
int main(){
	setlocale(LC_ALL,"spanish");
	computador pc;
	pc.leerp();
//	pc.verp();
	pc.leert();
//	pc.vert();
	pc.entrada();
	pc.cotizar();
	pc.salida();
}
