#include <iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class datos{
	
	
	public:
		void entrada();
		void leer();
		
};
void datos::entrada(){
	
	ofstream nuevo("gr303.txt");
		char frase[60];
	/*nuevo<<"c mas mas ";
	nuevo<< "programando archivos " <<endl;
	nuevo<< "planos en procesamiento "<<endl;
	nuevo<< "secuencial... " <<endl;
	nuevo<<"Creando con ofstream "<<endl;
*/
	cout<<"digite frase "<<endl;
	gets (frase);
	nuevo<<frase;
}
void datos::leer(){
	ifstream ver("gr303.txt");
	/*char x[60],y[60],z[60];
	ver>>x;
	ver>>y;
	ver>>z;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	char x[60];
	while(!ver.eof()){
		ver>>x;
		cout<<x<< " ";
		
		char letra;
		while(!ver.eof()){
	letra=ver.get();
		cout<<letra<< " ";*/
		char x [60];
	while(!ver.eof()){
ver.getline(x,sizeof(x));
		cout<<x<< endl;
	}
}
int main(){
	datos d;
	d.entrada();
	d.leer();
	return 0;
	
}

