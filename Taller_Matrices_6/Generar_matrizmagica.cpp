#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
class crearmatrizmagica{
	
	public:
		crearmatrizmagica();
		void generarmatriz(int);
		void mostrarmatriz(int**,int);
};

crearmatrizmagica::crearmatrizmagica(){
	int dimension=0;
	cout<<"Ingrese la dimension de la matriz "<<endl;
	cin>>dimension;
	generarmatriz(dimension);
}
void crearmatrizmagica::generarmatriz(int dimension){
	int **matriz;
	matriz=new int *[dimension];
	for(int x=0;x<dimension;x++){
		matriz[x]=new int [dimension];
	}
    int i, j, x;
  	int contador = 1;
  	if(dimension%2!=0){
  		for(i=0; i<dimension; i++){
    		for(j=0; j<dimension; j++){
          		matriz[i][j] = 0;
          	}
      	}
	  }
	x = dimension*dimension;
  	i=0;
  	j=dimension/2;
  	matriz[i][j] = 1;
  	while(contador < x){
    	   if((i-1)>=0){
        	   if((j+1)<(dimension)){
            	   if(matriz[i-1][j+1]==0){
                   i -= 1;
                   j += 1;
                   //cout<<"1"<<endl;
                   //cout<<"i="<<i<<","<<"j="<<j<<",Clotador:"<<contador<<endl;
                   contador += 1;
                   matriz[i][j] = contador;
                }else{
                   i += 1;
                   contador += 1;
                   //cout<<"2"<<endl;
                   //cout<<"i="<<i<<","<<"j="<<j<<",Clotador:"<<contador<<endl;
                   matriz[i][j] = contador;
               }
           }else{
               if(matriz[i-1][0]==0){
                   i -= 1;
                   j = 0;
                   contador += 1;
                   //cout<<"3"<<endl;
                   //cout<<"i="<<i<<","<<"j="<<j<<",Clotador:"<<contador<<endl;
                   matriz[i][j] = contador;
               }
               else{
                   i += 1;
                   contador += 1;
                   //cout<<"4"<<endl;
                   //cout<<"i="<<i<<","<<"j="<<j<<",Clotador:"<<contador<<endl;
                   matriz[i][j] = contador;
               }
           }
       }else{
           if(((j+1)<(dimension))){
               if (matriz[dimension-1][j+1]==0){
                   i = dimension-1;
                   j += 1;
                   contador += 1;
                   //cout<<"5"<<endl;
                   //cout<<"i="<<i<<","<<"j="<<j<<",Clotador:"<<contador<<endl;
                   matriz[i][j] = contador;
               }
               else{
                   i += 1;
                   contador += 1;
                   //cout<<"6"<<endl;
                   //cout<<"i="<<i<<","<<"j="<<j<<",Clotador:"<<contador<<endl;
                   matriz[i][j] = contador;
               }
           }
           else{
               i += 1;
               contador += 1;
               //cout<<"7"<<endl;
               //cout<<"i="<<i<<","<<"j="<<j<<",Clotador:"<<contador<<endl;
               matriz[i][j] = contador;
           }
 
       }
 
    }
    
    mostrarmatriz(matriz, dimension);
 
}

void crearmatrizmagica::mostrarmatriz(int **matriz,int dimension){
	for(int i=0; i<dimension; i++){
    	for(int j=0; j<dimension; j++){
    		cout<<matriz[i][j]<<"\t";
		}
    	cout<<endl;
  }
}

int main(){
	crearmatrizmagica m1;
}

