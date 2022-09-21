#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>
using namespace std;

#include <string>
using std::string;

 int valor1, valor2, soma, calculo;
 
int main(){
	 setlocale(LC_ALL, "");
	 
	 cout << "Insira o primeiro valor:" << endl;
	 cin >> valor1;
	 cout << "Insira o segundo valor:" << endl;
	 cin >> valor2;
	 soma = valor1 + valor2 ;
	 
	 if(soma >= 11){
	 	calculo = soma + 7 ;
	 	cout <<"o valor somado é maior que 11 e somado a 7 é igual a : "<< calculo << endl;
	 	
	 }else if(soma < 11){
	 	calculo = soma - 7; 
	 	cout << "o valor somado é menor que 11 e subtraido a 7 é igual a : " << calculo << endl;
	 } else {
	 	cout << "Insira um valor válido" << endl;
	 }
	
}