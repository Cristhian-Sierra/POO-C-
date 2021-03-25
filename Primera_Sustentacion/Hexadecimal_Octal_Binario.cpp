#include<iostream>
#include<cstdlib>
#include <stdlib.h>
using namespace std;
 class BiHexOct{
	
	private: 
int nro;
int x,y;
int i,j;
	char hexa[8];
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	public:
		

		void Entrada();
		void binario(int );
		void octal(int  );
		void Hexadecimal();
		void salida();
		BiHexOct();
		~BiHexOct();
};
	BiHexOct::BiHexOct(){
		cout<<" Construynedo..."<<endl;
		x=0;
		y=0;
		i=0;
		j=0;
	}
		BiHexOct::~BiHexOct(){
			cout<<" Destruyendo"<<endl;
		}
	void BiHexOct::Entrada(){
	    do{
            cout<<" INGRESE NUMERO: ";
            cin>>nro;
            if(nro<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(nro<0);	
		
}
void BiHexOct::binario(int){
    if(x>1)      
	binario(x/2);
   x%2;}
   void BiHexOct::octal(int){
    if(y>7)      
	octal(y/8);
   y%8;}
   void BiHexOct::Hexadecimal(){

	while(nro>=16){
		hexa[i]=hex[nro%16];
	nro=nro/16;
		i++;
	}
   		hexa[i]=hex[nro];
  }
void BiHexOct::salida(){
	

    cout<<"\n El numero en Binario es:";
binario(x);
   
   cout<<endl;
 
    cout<<"\n El numero en Octal es :";
 octal(y);
   cout<<"\n";
   	hexa[i]=hex[nro];
	cout<<"El numero hexadecimal es:\n";
	j=0;
	for(j=i;j>=0;j--){
	cout<<hexa[j]<<endl;
	}
	
}    
int main(){

BiHexOct BHO;
BHO.Entrada();
//BHO.binario(int x);
//BHO.octal(int y);
BHO.Hexadecimal();
BHO.salida();





system("pause");
return 0;
}
 
   

 
 
 


