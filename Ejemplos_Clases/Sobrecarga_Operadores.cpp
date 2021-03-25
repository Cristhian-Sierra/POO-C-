/*#include <iostream>
#include <string.h>
using namespace std;
class uno{
	char frase[200];
	public: uno(char *);
	void proceso(char *);
	void sacar(char);
	void ver();
};
uno::uno(char *m){
	strcpy(frase,m);
}
void uno::proceso(char *p){
	strcat(frase,p);
}
void uno::sacar(char letra){
	char aux[200];
	int i,j;
	
for(i=0,j=0;frase[i];i++){
	if(frase[i]!=letra)
	aux[j++]=frase[i];
}
aux[j++]=NULL;
strcpy(frase,aux);	
	
}
void uno::ver(){
	cout<<" Datos "<<endl;
	cout<<frase<<endl;
	
}
int main(){
	uno u("\nProgramacion por objetos ");
	u.ver();
	u.proceso("\nSobrecarga de operadores en c++ ");
	u.ver();
	u.sacar('r');
	u.ver();
}*/
#include<iostream>
#include<string.h>
using namespace std;
class cad{
	char num[200];
	public:
		cad(char *);
		void operator+(char *);
		void operator-(char );
		void mostrar();
};
cad::cad(char *n){
	strcpy(num,n);
}
void cad::operator+(char *q){
	strcat(num,q);
}
void cad::operator-(char l){
	char temp[200];
	int i,j;
	for(i=0,j=0;num[i];i++){
		if(num[i] != l)
		temp[j++]=num[i];
	}
	temp[j++]=NULL;
	strcpy(num,temp);
}
void cad::mostrar(){
	cout<<"Sus datos: "<<endl;
	cout<<num;
}
main(){
	cad frase("\nProgramacion orientada a objetos\n");
	frase.mostrar();
	frase+"\nSobrecarga de operadores:\n";
	frase.mostrar();
	frase-'r';
	frase.mostrar();
}
