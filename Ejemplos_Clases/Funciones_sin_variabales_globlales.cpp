#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
class ejemplo{
	public:
		void leer(int *, int*, int*);
		void proceso(int *,int *, int*, float*);
			void salida (int *,int *, int*, float*);
	
};
	void ejemplo::leer(int *x, int*y, int *z){
		cout<<" Digite los tres numeros "<<endl;
		cin>>*x>>*y>>*z;
		
	}
		void ejemplo::proceso(int *x, int*y, int *z,float *res){
		cout<<" Digite los tres numeros "<<endl;
		*res=0.0;
	*res=*x+*y+*z;
		
	}
		void ejemplo::salida(int *x, int*y, int *z, float *res){
cout<< " La suma de "<<*x<<" + "<<*y<<" + "<<*z<<" = "<< *res<<endl;
	
	
		
	}
	int main(){
		ejemplo e;
		int a,b,c;
		float r;
		e.leer(&a,&b,&c);
			e.proceso(&a,&b,&c,&r);
			e.salida(&a,&b,&c,&r);
			system ("pause ");
			return 0;
	}
