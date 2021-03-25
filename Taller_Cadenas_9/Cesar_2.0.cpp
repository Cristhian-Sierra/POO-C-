#include<conio.h>
#include<stdio.h>>
#include<iostream>
#include <stdlib.h>
#include<locale.h>


using namespace std;
class Cesar{
	public:
	void Entrada(char[]);
	void cifrado_cesar(char[]);
	void descifradocesar(char[]);
	void Salida(char);
};

void Cesar::cifrado_cesar(char m[]){
	char alf[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ"};
	int op;

	//fflush(stdin);
	cout<<"Ingrese mensaje a cifrar:"<<endl;
		cin.getline(m,100);
		
		cout<<"\nIngrese posiciones para el cifrado "<<endl;
		cin>>op;
while(op<=0){
	cout<<"\nDigite posicion mayor que 0 "<<endl;
	cin>>op;
}
	for(int i=0; i<100;i++){
		if(m[i]!= 52){
			for(int j=0;j<52;j++){
				if(m[i]==alf[j]){
					int aux=(j+op)%49;
					m[i]=alf[aux];
					break;
				}
			}	
		}		
	}
	cout<<"\nEl mensaje cifrado es: "<<m<<endl<<endl;
	descifradocesar(m); 
}

void Cesar::descifradocesar(char m[]){
	char alf[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ"};
		int op;
fflush(stdin);
	cout<<"\nIngrese mensaje a descifrar:"<<endl;
	cin.getline(m,100);
	while(op<=0){
	cout<<"\npDigite posicion mayor que 0 "<<endl;
	cin>>op;
}
	cout<<"\nIngrese posiciones para el descifrado "<<endl;
		cin>>op;
	for(int i=0; i<100;i++){
		if(m[i]!= 52){
			for(int j=0;j<52;j++){
				if(m[i]==alf[j]){
					int aux;
					if((j-op)<0){
						aux=26+(j-op);
					}
					else{
						aux=(j-op)%49;
					}
					m[i]=alf[aux];
					break;
				}
			}	
		}		
	}
	cout<<"\nEl mensaje descifrado es: "<<m<<endl<<endl;
}


int main(){
	Cesar c;
	char m[100];
	setlocale(LC_ALL, "spanish");
	
 c.cifrado_cesar(m); 

		return 0;		
	}
	
