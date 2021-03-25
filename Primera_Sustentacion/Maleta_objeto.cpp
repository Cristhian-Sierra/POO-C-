#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class Maleta{
private: 
char color[10];
char marca[10];
char material[10];
int precio;
int lote;
int costomal;
int cosmaterial;
int costaccesorios;
int manobra;
int servicios;
int valmaleta;
 int costototalpro,costototalventa,valimpu,per,costdismat,costdisman,costdisacc,costdisser;
public: 
void Entrada();
void proceso();
void Salida();
Maleta();
	~Maleta();

};
Maleta::Maleta(){
	 lote= 380;
 costomal=78000;
cosmaterial=31200;
 costaccesorios=6240;
 manobra=23400;
servicios=17160;
 valmalet=129000;
	
}
	Maleta::~Maleta(){
	}
void Maleta::Entrada (){

cout<<" Digite el color de la maleta "<<endl;
gets (color);


cout<<" Digite la marca de la maleta "<<endl;
gets (marca);
cout<<" Digite el material de la maleta "<<endl;
gets (material);
cout<<" Digite el precio de la maleta "<<endl;
cin>> precio;


}


void Maleta::proceso(){

costototalpro=lote*costomal;
costototalventa= valmalet*lote;

 costdismat= cosmaterial*lote;
costdisacc=costaccesorios*lote;
costdisman=manobra*lote;
costdisser=servicios*lote;
valimpu= costototalventa*0.19;
per= costototalventa-costototalpro;


}
void Maleta:: Salida(){

cout<< "\nEl color de la maleta es "<< color<<endl;
cout<< "\nLa marca  de la maleta es "<< marca<<endl;
cout<< "\nEl material de la maleta es "<< material<<endl;
cout<< "\nEl precio de la maleta es "<< precio<<endl;

cout<<"\n El costo total de produccion es: "<<costototalpro<<endl;
cout<<"\nEl costo total de venta es: "<<costototalventa<<endl;
cout<<"\nEl costo total de discrimino  es: "<<endl;
 cout<<"\nPara material: "<< costdismat<<endl;
 cout<<"\nPara accesorios: " <<costdisacc<<endl;
 cout<<"\nPara mano de obra: " <<costdisman<<endl;
 cout<<"\nPara resto de servicios: " <<costdisser<< endl;
cout<<"\nEl costo total de impuesto  es: "<<valimpu<<endl;
cout<< "\nLa utilidad o perdida es de: "<<per<<endl;
}
int main(){

Maleta morral;
morral.Entrada();
morral.proceso();
morral.Salida();
}
