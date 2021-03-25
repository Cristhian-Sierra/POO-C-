#include<iostream>
using namespace std;
class memoria{
	int *a,i,s,n;
	public:
	memoria();
	~memoria();
	void leer(void);
	void sumar(void);
	void ver(void);
};
memoria::memoria()
{
	i=s=n=0;
	cout<<"digite el valor de a "<<endl;
	cin>>n;
	a=new int[n];
	if(a==NULL){
	cout<<"error"<<endl;}
	for(i=0;i<n;i++)
	a[i]=0;
}
memoria::~memoria()
{
	cout<<"destruyendo"<<endl;
	delete a;
}
void memoria::leer(){
	for(i=0;i<n;i++){
		cout<<"de dato "<<i<<endl;
		cin>>a[i];
	}
}
void memoria::sumar()
{
	for(i=0;i<n;i++)
	s=s+a[i];
}
void memoria::ver()
{
	cout<<"sus datos"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" "<<endl;
	cout<<"suma= "<<s<<endl;
}
int main(){
	memoria m;
	m.leer();
	m.sumar();
	m.ver();
}
	
