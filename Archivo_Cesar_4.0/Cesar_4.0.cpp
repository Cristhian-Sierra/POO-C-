#include<iostream>
#include<fstream>
using namespace std;
class Cesar {
public:
void Entradacif (char []);
void Entradades (char []);
void cifrado_cesar (char []);
void descifradocesar (char []);
};
void Cesar::Entradacif (char p []) {
		ofstream nuevo0("fraseci.txt");
			char alf[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
cout<<"\nIngrese mensaje a cifrar:"<<endl;
cin.getline(p,100);
nuevo0<<"El mensaje original para cifrar es "<<endl;
		    nuevo0<<p<<endl;
		      ifstream ver0("fraseci.txt");
		
	 while(!ver0.eof()){

		ver0>>p[100];	

	
	 
}


cifrado_cesar(p);}
void Cesar::cifrado_cesar (char p []) {
		
char alf[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
int op;
fflush(stdin);
ofstream nuevo("cifrado.txt");
cout<<"\nIngrese posiciones para el cifrado "<<endl;
cin>>op;
while(op<0){
	cout<<"\nDigite posición positiva"<<endl;
	cin>>op;}


for (int i=0;i<100;i++){
  int j=0;
  int k;
  while(j<52) {
   if(p[i]==alf[j] && (j<23||(j>=26 &&j<49))) {
    p[i]=alf[j+op];
    j=52;}
   if(p[i]==alf[j] && (j>=23 && j<26)) {
       if(p[i]=='x') {
        p[i]='a';}
    if(p[i]=='y') {
        p[i]='b';}
    if(p[i]=='z') {
        p[i]='c';}
    j=52;}
   if(p[i]==alf[j] && (j>=49 && j<52)) {
       if(p[i]=='X') {
        p[i]='A';}
    if(p[i]=='Y') {
        p[i]='B';}
    if(p[i]=='Z') {
        p[i]='C';}
    j=52;}
      j++;}}
      nuevo<<"\nEl mensaje cifrado es "<<endl;
    nuevo<<p<<endl;
	cout<<"\nEl mensaje cifrado es: "<<p<<endl<<endl;
 ifstream ver("cifrado.txt");
	while (! ver.eof ()) {
	for (int i=0; i<100; i++) {
		ver>>p;}}
Entradades(p);
} void Cesar::Entradades (char p []) {
fflush(stdin);
cout<<"\nIngrese mensaje a descifrar:"<<endl;	
descifradocesar(p);}
void Cesar::descifradocesar(char p[]){
ofstream nuevo2("descifrado.txt");
char alf[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
int op;
cin. getline(p,100);
cout<<"\nIngrese posiciones para el descifrado "<<endl;
cin>>op;
while(op<0) {
cout<<"\nDigite posición positiva"<<endl;
cin>>op;
}
for (int i=0; i<100; i++) {
	if(p[i]!= 52) {
	for (int j=0; j<52; j++) {
		if(p[i]==alf[j]) {
		int aux;
		if((j-op) <0) {
			aux=26+(j-op);}
	else {
		aux=(j-op) %49;}
	p[i]=alf[aux];
break;}}}}
nuevo2<<"El mensaje descifrado es "<<endl;
nuevo2<<p<<endl;
cout<<"\nEl mensaje descifrado es: "<<p<<endl<<endl;
 ifstream ver2("descifrado.txt");
	while (! ver2.eof ()) {
	for (int i=0; i<100; i++) {
		ver2>>p;	}}}
int main () {
	Cesar c;
	char m [100];
	setlocale (LC_ALL, "spanish");
	
c.Entradacif(m);

		return 0;		
	}

