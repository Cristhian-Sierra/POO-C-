//Nombre: andres santiago monsalve salinas
//codigo: 20172578027
//el siguiente algoritmo da solucion a un problema de cifrado por trasposocion con una palabra clave.
//la palabra clave sera la encargada de dar la cantidad de columnas que tendra la matriz a trasponer..
//Se usan 3 matrices auxiliares para  pasar datos de una funcion a otra ya que el ejercicio se realizo con matrices dinamicas..
#include<iostream>
#include<fstream>
using namespace std;
class cifrado{
	public:
		int tamano(char *);
		void iniciar(char *,char*);
		void pedirp(char*,char*);
		void llenarmatriz(char**,char*,int,int);
        void copiarmatriz(char**,char**,int,int);
        void copiarmatriz2(char**,char**,int,int);
        void copiarmatriz3(char**,char**,int,int);
		void cifrarmatriz(char **,char**,int,int);
        void desifrar(char**,char**,int,int);
        void mostrarm(char**,int,int);
        void mostrartras(char**,int,int);
        void generartexto1(char**,int,int);
        void generartexto2(char**,int,int);
        void generartexto3(char**,int,int);
};
int cifrado::tamano(char *A){
    int s;
	for(int i=0;A[i];i++){
		s++;
	}
	return s;
}
void cifrado::iniciar(char *A,char *B){
	int tam1,tam2;
	do{
		cout<<"De tamaño de la clave: "<<endl;
		cin>>tam1;
	}while(tam1<0);
	A=new char[tam1];
	if(A==NULL)
	cout<<"Error.."<<endl;
	else
	for(int i=0;i<tam1;i++)
	A[i]=' ';
    do{
		cout<<"De tamaño de la frase a encriptar:  "<<endl;
		cin>>tam2;
	}while(tam2<0);
    B=new char[tam2];
	if(B==NULL)
	cout<<"Error.."<<endl;
	else
	for(int i=0;i<tam2;i++)
	B[i]=' ';
	pedirp(A,B);
}
void cifrado::pedirp(char *A,char*B){
	int f,c,tt;
	char **C;
	cout<<"De clave: "<<endl;
	gets(A);
    gets(A);
	cout<<"De frase a encriptar: "<<endl;
	gets(B);
	c=tamano(A);
	tt=tamano(B);
	if(tt%2==0)
	f=tt/c;
	else
	f=(tt/c)+1;
    C=new char *[f];
	if(C==NULL)
	cout<<"Error.."<<endl;
	for(int j=0;j<f;j++){
		C[j]=new char[c];
	if(C[j]==NULL)
	cout<<"Error 2.."<<endl;	
	}
	llenarmatriz(C,B,f,c);	
}
void cifrado::llenarmatriz(char **A,char *B,int fil, int col){
	int k=0;
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			if(B[k]==' '||B[k]=='\0'){
				A[i][j]='@';
			k++;
			}
			else{
			A[i][j]=B[k];
			k++;
		    }
	}
  }
  cout<<"La matriz original: "<<endl;
  mostrarm(A,fil,col);
}
void cifrado::mostrarm(char **A,int fil,int col){
	char **AUX;
	AUX=new char *[fil];
	if(AUX==NULL)
	cout<<"Error 1"<<endl;
	else
	for(int k=0;k<fil;k++){
		AUX[k]=new char[col];
		if(AUX[k]==NULL)
		cout<<"Error 2"<<endl;
	}
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	copiarmatriz(AUX,A,fil,col);
}
void cifrado::copiarmatriz(char**A,char**B,int fil,int col){
	char **C;
	C=new char *[col];
	if(C==NULL)
	cout<<"Error 1"<<endl;
	else
	for(int k=0;k<col;k++){
		C[k]=new char[fil];
		if(C[k]==NULL)
		cout<<"Error 2"<<endl;
	}
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			A[i][j]=B[i][j];
		}
	}
	generartexto1(B,fil,col);
	cifrarmatriz(A,C,fil,col);
}
void cifrado::cifrarmatriz(char **A,char **B,int fil,int col){
	char **C;
	C=new char *[col];
	if(C==NULL)
	cout<<"Error 1"<<endl;
	else
	for(int k=0;k<col;k++){
		C[k]=new char[fil];
		if(C[k]==NULL)
		cout<<"Error 2"<<endl;
	}
	char **D;
	D=new char *[col];
	if(D==NULL)
	cout<<"Error 1"<<endl;
	else
	for(int k=0;k<col;k++){
		D[k]=new char[fil];
		if(D[k]==NULL)
		cout<<"Error 2"<<endl;
	}
	for(int i=0;i<col;i++){
		for(int j=0;j<fil;j++){
			B[i][j]=A[j][i];
		}
	}
	for(int i=0;i<col;i++){
		for(int j=0;j<fil;j++){
			D[i][j]=B[i][j];
		}
	}
	cout<<"La matriz encriptada es: "<<endl;
	for(int i=0;i<col;i++){
		for(int j=0;j<fil;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	generartexto2(D,fil,col);
	copiarmatriz2(B,C,fil,col);
}
void cifrado::copiarmatriz2(char **A,char **B,int fil,int col){
	char **C;
	C=new char*[col];
	if(C==NULL)
	cout<<"Error 1"<<endl;
	else
	for(int k=0;k<col;k++){
		C[k]=new char[fil];
		if(C[k]==NULL)
		cout<<"error 2.."<<endl;
	}
	for(int i=0;i<col;i++){
		for(int j=0;j<fil;j++){
			B[i][j]=A[i][j];
		}
	}
	desifrar(B,C,fil,col);
}
void cifrado::desifrar(char **A,char **B,int fil,int col){
	char **C;
	C=new char*[fil];
	if(C==NULL)
	cout<<"Error 1"<<endl;
	else
	for(int k=0;k<fil;k++){
		C[k]=new char[col];
		if(C[k]==NULL)
		cout<<"Error 2"<<endl;
	}
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			B[i][j]=A[j][i];
		}
	}
	copiarmatriz3(B,C,fil,col);
}
void cifrado::copiarmatriz3(char **A,char **B,int fil,int col){
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			B[i][j]=A[i][j];
		}
	}
	cout<<"La matriz desencrpitada es: "<<endl;
	mostrartras(B,fil,col);
}
void cifrado::mostrartras(char **A,int fil,int col){
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	generartexto3(A,fil,col);
}
void cifrado::generartexto1(char **A,int fil,int col){
	ofstream crear1("Original.txt");
    crear1<<"La frase original es: "<<endl;
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
	        if(A[i][j]=='@')
			crear1<<" ";
			else	
			crear1<<A[i][j];
		}
	}
}
void cifrado::generartexto2(char **A,int fil,int col){
	ofstream crear1("Cifrado.txt");
    crear1<<"La frase cifrada es: "<<endl;
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			crear1<<A[i][j];
		}
	}
}
void cifrado::generartexto3(char **A,int fil,int col){
	ofstream crear3("Desencriptado.txt");
    crear3<<"La frase desencriptada es: "<<endl;
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			if(A[i][j]=='@')
			crear3<<" ";
			else	
			crear3<<A[i][j];
		}
	}
}
main(){
		setlocale(LC_ALL,"spanish");
	cifrado o;
	char *A,*B;
	o.iniciar(A,B);
}
