#include<iostream>
using namespace std;
class uno{
	public:
		void ver(void);
};
void uno::ver(void)
{
	int x=153;
	int *p;
	cout<<"valor de x desde x "<<x<<endl;
	p=&x;
	cout<<"direccion de p "<<p<<endl;
	cout<<"valor de x desde p "<<*p<<endl;
	cout<<"direccion de p desde p "<<&p<<endl;
	*p=53;
	cout<<"nuevo valor de x desde x "<<x<<endl;
	cout<<"nuevo valor de x desde p "<<*p<<endl;
	cout<<"direccion de x desde x "<<&x<<endl;
}
int main(){
	uno u;
	u.ver();
}
