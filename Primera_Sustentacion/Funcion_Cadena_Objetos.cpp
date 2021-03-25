//strchr (RTS, 0)// Especifica donde esta cada letra
//strlen devuelve el número de caracteres s, sin contar el nulo terminación de carácter.
/*Programa que lee una cadena, que diga cuantos caracteres tiene,cuantas palabras tiene cuantos espacios en blanco,cuantas vocales.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
class Cadena{
	private:
char	Leer[100];
int z, espacios=0,letras=0;
int i=0;
	int contpal=0;
	int longitud;
	
	
int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
public:
void FunLeer( );
void FunCaracter();
void FunPalabras();
void FunEspacios();
void FunVocal() ;
void FunMostrar();	
};


int main(){
Cadena ProCadena;
	 ProCadena.FunLeer( );
 ProCadena.FunCaracter( );
 ProCadena.FunEspacios ();
 ProCadena.FunVocal( );
 	ProCadena.FunPalabras( );
 	ProCadena.FunMostrar();
	system("pause");
	return 0;
}

void Cadena::FunLeer( ){

	cout<< " Digite cadena "<<endl;
cin.getline( Leer,100,'\n');
	cout<<"\n";
}

void Cadena::FunEspacios(){
espacios=0;
	for(i=0;i<z;i++){
	if(Leer[i]== ' '){
	espacios++;	
	}
	}
	
}

void Cadena::FunCaracter(){
	letras=0;
	z = strlen(Leer);
		for(i=0;i<z;i++){
	if(Leer[i]== ' '){
	espacios++;	
	} else{
		letras = z -espacios;
	}
	}
	
}
	
	void Cadena::FunVocal(){
	
		for(i=0;i<100;i++){
			switch (Leer[i]){
		case 'a': 
		vocal_a++;
		 break;
			
	case'e':
	 vocal_e++; 
	 break;
		case'i':
		vocal_i++; 
		break;
		case'o':
		vocal_o++;
		 break;
			case'u':
			vocal_u++;
			 break;
			}
		}
	
	}

	
	void Cadena::FunPalabras() 
	{
     
     for( i=1; Leer[i]!='\0';++i)   
         if(Leer[i-1]==' '&& isalpha(Leer[i]))
             ++contpal;
         if(isalpha(Leer[0])) 
		 ++contpal;

         }
	
void Cadena::FunMostrar(){

	cout<< "\nla cantidad de espacios en blanco es " <<espacios<<endl;	
	cout<< "\nLa cantidad de letras es de "<< letras<<endl;
		cout<<"\n";
		cout<< " Vocal 'a': ha sido encontrada  " << vocal_a<< " veces"<<endl;
		cout<< " Vocal 'e': ha sido encontrada  " << vocal_e<< " veces"<<endl;
		cout<< " Vocal 'i': ha sido encontrada  " << vocal_i<< " veces"<<endl;
		cout<< " Vocal 'o': ha sido encontrada  " << vocal_o<< " veces"<<endl;
		cout<< " Vocal 'u': ha sido encontrada  " << vocal_u<< " veces"<<endl;
			cout<< "\nLa cantidad de palabras es " << contpal<<endl;
}

