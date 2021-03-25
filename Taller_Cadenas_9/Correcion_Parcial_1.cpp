#include<iostream>
#include <stdlib.h>
using namespace std;

class deferencia{
             int *v,*d,i,t,tem,sum_to;
      public:
             deferencia();
             ~deferencia();
             void Entrada();
             void diferen();
             void salida();
};
deferencia::deferencia(){
      i=sum_to=0;
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
      
}
deferencia::~deferencia(){
       cout<<"Destruyendo..."<<endl; 
       delete v;
	   delete d;        
}
void deferencia::Entrada(){
     for(i=0;i<t;i++){
          cout<<"\nDigite numero"<<endl;
          cin>>v[i];
     }
}
void deferencia::diferen(){
     for(i=0;i<t-1;i++){
          tem=i+1;
          d[i]=v[i]-v[tem];
          sum_to=sum_to+d[i];
     }
}
void deferencia::salida(){
     cout<<"\nEl vector ingreado"<<endl;
     for(i=0;i<t;i++){
          cout<<v[i]<<"\t";
     }
     cout<<endl;
     for(i=0;i<t-1;i++){
          tem=i+1;
          cout<<"\nDiferencia entre "<<v[i]<<" y "<<v[tem]<<" es :"<<d[i]<<endl;
     }
     cout<<"\nSumatoria total:"<<sum_to<<endl;
     cout<<"\nTem"<<endl;
     for(i=0;i<t-1;i++){
	cout<<v[tem]<<"\t";
}
}



int main(){
	setlocale(LC_ALL, "spanish" );
    deferencia d;
    d.Entrada();
    d.diferen();
    d.salida();
    system("pause");
    return 0;
}
