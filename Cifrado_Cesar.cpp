#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
#include <cstring>
using namespace std; 
class CifCesar{
		
	private:
		char p[100];
	int j,i;
	 char alf[100];
		public:
	void Entrada();
	void Proceso();
	void Salida();
	CifCesar();
	~CifCesar();

};
CifCesar::CifCesar(){
	cout<<" Construyendo "<<endl;
	i=0;
	j=0;
char alf[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	}
	CifCesar::~CifCesar(){
		cout<<" Destruyendo "<<endl;
	
	}
	void CifCesar::Entrada(){
		 cout<<"ingrese palabra "<<endl;
cin.getline(p,100,'\n');
		
	}
void CifCesar::Proceso(){
	
 for( i=0;i<strlen(p);i++){
  j=0;
  while(j<52){
   if(p[i]==alf[j] && (j<23||(j>=26 &&j<49))){
    p[i]=alf[j+3];
    j=52;
      }
   if(p[i]==alf[j] && (j>=23 && j<26)){
       if(p[i]=='x'){
        p[i]='a';
    }
    if(p[i]=='y'){
        p[i]='b';
    }
    if(p[i]=='z'){
        p[i]='c';
    }
    j=52;
   }
   if(p[i]==alf[j] && (j>=49 && j<52)){
       if(p[i]=='X'){
        p[i]='A';
    }
    if(p[i]=='Y'){
        p[i]='B';
    }
    if(p[i]=='Z'){
        p[i]='C';
    }
    j=52;
   }
      j++;
  }
 }
}
void CifCesar::Salida(){

	 for( i=0;i<strlen(p);i++){
  j=0;
  while(j<52){
   if(p[i]==alf[j] && (j<23||(j>=26 &&j<49))){
    p[i]=alf[j+3];
    j=52;
      }
   if(p[i]==alf[j] && (j>=23 && j<26)){
       if(p[i]=='x'){
        p[i]='a';
    }
    if(p[i]=='y'){
        p[i]='b';
    }
    if(p[i]=='z'){
        p[i]='c';
    }
    j=52;
   }
   if(p[i]==alf[j] && (j>=49 && j<52)){
       if(p[i]=='X'){
        p[i]='A';
    }
    if(p[i]=='Y'){
        p[i]='B';
    }
    if(p[i]=='Z'){
        p[i]='C';
    }
    j=52;
   }
      j++;
  }
  

  
 }
 	cout<<"\nElcifrado cesar es "<<endl;
   cout<<p<<endl;
	
}


using namespace std ;
int main(){
CifCesar cc;
cc.Entrada();
cc.Proceso();
cc.Salida();


system("pause");
return 1; 
}
