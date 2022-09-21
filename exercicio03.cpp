#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>
using namespace std;

int num1, num2, resto;

int main(){
	setlocale(LC_ALL, "");
	cout << "Insira o primeiro número: " << endl;
	cin >> num1;
	cout << "Insira o segundo número: " << endl;
	cin >> num2;
	resto = num1 % num2; 
	cout << "o resto da divisão é:" << resto << endl;
}