#include <iostream>
using namespace std;

int main() {
 // your code goes here
 int I = 0;
 string palabra;
 cout<<" Digite frase para saber si es palindroma "<<endl;
 
 cin >> palabra;
 int J = palabra.length() - 1;
 int mitad = J / 2;
 while(palabra[I] == palabra[J]){
  if(mitad == I){
   cout <<" La palabra "<<palabra<<  " Es palindroma "<<endl;
   break;
  }
 J--;
 I++;
 }
 if(mitad != I)
 cout << "No es palindromo";
 return 0;
}


