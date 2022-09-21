#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>

using namespace std;

float deposito, taxaJuros, juros, rendimento, valorFinal;

int main()
{
	setlocale(LC_ALL, "");
	cout << "Insira o valor do depósito: " << endl;
	cin >> deposito;
	cout << "Insira o valor da taxa de juros: " << endl;
	cin >> taxaJuros;
	juros = ((taxaJuros / 100) * deposito);
	valorFinal = deposito + juros;
	cout << "o valor do rendimento foi de: " << juros << endl;
	cout << "o valor total depois do rendimento é de: " << endl; 
}