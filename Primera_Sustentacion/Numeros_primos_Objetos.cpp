#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
/* Programa que halla dos numeros primos hasta un n dato*/
class Primo{
	private:
	int n1;
	  int c,c2,res,nc;
	public:
	void FunEntr();
void FunPrim ();
void FunMosRang();
void Funcualprim();	
void FunMostrar();
Primo();
~Primo();
};

Primo::Primo(){
	cout<<" Construyendo "<<endl;
		   c=0,c2=0,res=0,nc=0;
}
Primo::~Primo(){
	cout<<" Destruyendo "<<endl;
}
int main(){
setlocale (LC_ALL, "spanish");
Primo RangPrim;
 RangPrim.FunEntr();
 RangPrim.FunPrim ();
RangPrim.Funcualprim();
RangPrim.FunMostrar();

system ("pause");
return 0;
}
void Primo::FunEntr(){
	
	
	cout<< " Digite el valor  hasta donde quiere hallar sus números primos"<<endl;
	cin>> n1;
}
void Primo::FunPrim() {
	
while(n1<=1){
	cout<< " Error número primo es un número natural mayor que 1" <<endl;
	cin>> n1;
}	

}
void Primo::FunMosRang(){
	
	for(int i=2; i<= n1;i++){
	

}

}
void Primo::Funcualprim(){
/*
int cont=0;
	cout << "  \nLos números primos hasta " <<n1<< " son:"<<endl;
	for( int  i=2;i<=n1;i++){

		if(i%i==0){
	cont++;
}
	
	if(cont==2){
	cout<<i <<  " Es primo "<<endl;}
else{cout <<i<< " No es primo "<<endl;
}}
	}
*/


  for(c=1;c<=n1;c++)
  {
    for(c2=1;c2<=c;c2++)
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
     
    }
    nc=0;
  }

}

void Primo::FunMostrar(){
		cout<< "\Los números hasta " << n1<<" son: "<<endl;
	for(int i=2; i<= n1;i++){
		cout<<"\n";
cout <<i;
}
  cout<< "\nLos números primos son: " <<endl;
  for(c=1;c<=n1;c++)
  {
    for(c2=1;c2<=c;c2++)
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      cout<<" "<<c;
    }
    nc=0;
  }
  cout<<"\n";
}

