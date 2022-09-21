#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>
using namespace std;

float salarioBruto, inss, ir, filiacao, dependentes, totalDeDescontos, totalDeAcrescimo, salarioLiquido, restante;

int main ()
{
	setlocale(LC_ALL, "");
	cout << " Digite o salário bruto : " << endl;
	cin >> salarioBruto;
	cout << " Digite a quantidade de filhos : " << endl;
	cin >> dependentes;
	inss = (8/100) * salarioBruto;
	ir = (10/100) * salarioBruto;
	restante = (salarioBruto - inss) + (salarioBruto - ir);
	filiacao = (0.5/ 100) * restante;
	totalDeDescontos = (inss + ir + filiacao);
	totalDeAcrescimo = (dependentes * 150);
	salarioLiquido = (salarioBruto - (inss + ir + filiacao));
	cout << " o valor do total de descontos é de : " << totalDeDescontos << endl;
    cout << " o valor do total de acréscimos é de : " << totalDeAcrescimo << endl;
	cout << " o valor do total do salário líquido é de : " << salarioLiquido << endl;
}