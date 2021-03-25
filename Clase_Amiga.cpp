#include <iostream>
#include <stdlib.h>
using namespace std;
class B;
class C;
class A{
	char nom[30];
	long double id;
	float nota;
	public:
		void entrada(){
			cout<<"\nDigite su nombre "<<endl;
			gets(nom);
			cout<<"\nDigite su nota final "<<endl;
			cin>>nota;
			
		}
		friend void final(A,B,C);
};

class B{
	char nom[30];
	long double id;
	float nota;
		public:
		void entrada(){
			cout<<"\nDigite su nombre "<<endl;
			gets(nom);
			cout<<"\nDigite su nota final "<<endl;
			cin>>nota;
			
		}
		friend void final(A,B,C);
};
class C{
		char nom[30];
	long double id;
	float nota;
		public:
		void entrada(){
			cout<<"\nDigite su nombre "<<endl;
			gets(nom);
			cout<<"\nDigite su nota final "<<endl;
			cin>>nota;
			
		}
			friend void final(A,B,C);
		
};
		void final(Ax,By,Cz){
			float pr=0.0;
			pr=(x.nota+y.nota+z.nota)/3.0;
			cout<<"El promedio de las notas son "<<pr<<endl;
			
		}

int main(){
	A uno;
	B dos;
	C tres;
	uno.entrada();
	dos.entrada();
	tres.entrada();
		final(uno,dos,tres);
	
}
