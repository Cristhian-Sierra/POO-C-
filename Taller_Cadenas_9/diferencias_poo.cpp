#include<iostream>
#include <stdlib.h>
using namespace std;

class deferencia{
           
      public:
           
             void Entrada();
             void diferen(  int *,int *,int,int );
             void salida(  int *,int *,int,int );
};
     

void deferencia::Entrada(){
	
	   int i=0;
	   int sum_to=0;
	   int t;
	   int *v,*d;
      cout<<"Digite tamaño del vector"<<endl;
      cin>>t;
      while(t<=0){
      	cout<< " Error, digite tamaño mayor que 0 "<<endl;
      	cin>>t;
      }
      v=new int[t];
      if(t==NULL){
      	cout<<" Error en la asignacion dinamica de memoria " <<endl;
      }
      for(i=0;i<t;i++){
      	v[i]=0;
      }
      d=new int[t-1];
       for(i=0;i<t-1;i++){
      	d[i]=0;
      }
	
	
     for(i=0;i<t;i++){
          cout<<"\nDigite numero"<<endl;
          cin>>v[i];
     }
     diferen(v,d,t,sum_to);
}
void deferencia::diferen(int *v,int *d,int t,int sum_to){
     for(int i=0;i<t-1;i++){
          int tem=i+1;
          d[i]=v[i]-v[tem];
          sum_to=sum_to+d[i];
     }
     salida(v,d,t,sum_to);
}
void deferencia::salida(int *v,int *d,int t,int sum_to){
	 
     cout<<"\nEl vector ingreado"<<endl;
     for(int i=0;i<t;i++){
          cout<<v[i]<<"\t";
     }
     cout<<endl;
     for(int i=0;i<t-1;i++){
          int tem=i+1;
          cout<<"\nDiferencia entre "<<v[i]<<" y "<<v[tem]<<" es :"<<d[i]<<endl;
     }
     cout<<"\nSumatoria total:"<<sum_to<<endl;
     cout<<"\nTem"<<endl;
     for(int i=0;i<t-1;i++){
     	 int tem=i+1;
	cout<<v[tem]<<"\t";
}
  delete v;
	   delete d;   
}



int main(){
	setlocale(LC_ALL, "spanish" );
    deferencia d;
    d.Entrada();

    system("pause");
    return 0;
}
