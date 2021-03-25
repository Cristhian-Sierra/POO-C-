
 #include <iostream>
using namespace std;
class conversion{
	private:
	int num;
	int i;
	int a[100];
	int j;
	int suma;
	int base;
	int res;
	int c;
	int dec;
	int rem;
	int d;
	public:
conversion();
~conversion();
	void entrada(void);
	void binario(void);
	void octal(void);
	void hexadecimal(void);
	void salida(void);	
};
conversion::conversion(){
cout<<"construyendo.."<<endl;
	i=0;
	c=0;
	base=1;
    suma=0;
    dec=0;
	rem=0;
}
conversion::~conversion(){
cout<<"destruyendo.."<<endl;
}
void conversion::entrada(){
	cout<<"Ingrese un numero decimal : ";
	cin>>num;
}
void conversion::binario(){ 
    c=num;
   while(c>0){
   	a[i]=c%2;
   	c /= 2;
   	i++;
   }
}
void conversion::octal(){
    d=num;
	 do{
    res=d % 8;
    d=d / 8;
    suma=suma+res*base;
    base=base*10;
    } while(d > 0);
}
void conversion::hexadecimal(){
	 cout<<"La conversion de numero decimal a numero hexadecimal es:"<<endl;
 while (num>0) {
        rem=num%16;
        if (num>9) {
            switch (rem){
               case 10: cout << "A"; break;
               case 11: cout << "B"; break;
               case 12: cout << "C"; break;
               case 13: cout << "D"; break;
               case 14: cout << "E"; break;
               case 15: cout << "F"; break;
            }
        }
        else {
            cout<<rem;
        }
        num = num / 16;
    }
    cout<<endl;
}
void conversion::salida(){
	cout<<"La conversion de numero decimal a numero binario es:"<<endl;
	for(j=i-1;j>=0;--j){
		cout<<a[j];
	}
	cout<<endl;
	cout<<"La conversion de numero decimal a numero octal es:"<<endl<<suma<<endl;

}
int main(){
	conversion cosa;
	cosa.entrada();
	cosa.binario();
	cosa.octal();
	cosa.hexadecimal();
	cosa.salida();

return 0;
}
