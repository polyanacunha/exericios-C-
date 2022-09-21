#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>
using namespace std;

int num1, num2, soma;

int main()
{
    setlocale(LC_ALL, "");
	cout << "Insira o primeiro número: " << endl;
	cin >> num1;
	cout << "Insira o segundo número: " << endl;
	cin >> num2;
	soma = num1 + num2;
	
	if(soma >= 10){
		cout << soma << endl;
	}else {
		cout << "o valor da soma é menor que 10";
	}
}