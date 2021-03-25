#include<iostream>
using namespace std;

class uno{
	int a[10],b[10],i,j,aux;
	
	public:
		uno();
		~uno();
		void leer(void);
		void hacer(void);
		void ver(void);		
};
uno::uno(){
	cout<<"construyendo..."<<endl;
	i=j=aux=0;

	for(i=0;i<10;i++)
	a[i]=0;
	b[i]=0;
}
uno::~uno(){
	cout<<"destruyendo..."<<endl;
	
}
void uno::leer(void){
	for(i=0;i<10;i++){
		cout<<"de numero"<< i <<endl;
		cin>>a[i];
		b[i]=a[i];
	}
}
void uno::hacer(void){
	aux=0;
	for(i=0;i<10;i++)
	for(j=i;j<10;j++)
if(a[i]>a[j]){
	aux=a[i];
	a[i]=a[j];
	a[j]=aux;
}
	
}
void uno::ver(void){
	cout<<"\ndatos"<<endl;
	for(i=0;i<10;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
		for(i=0;i<10;i++)
	cout<<b[i]<<"\t";
	cout<<endl;
}
int main()
{
uno objeto;
objeto.leer();
objeto.hacer();
objeto.ver();
}
