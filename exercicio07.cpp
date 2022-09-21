#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>
using namespace std;

#include <string>
using std::string;

int compras, desconto;

int main(){
	setlocale(LC_ALL, "");
	cout << "Insira o valor da compra do cliente : " << endl;
	cin >> compras;
	
	if(compras <= 100 ){
		desconto = (0.05 * compras);
		cout << "o valor do desconto desse cliente é de : " << desconto << endl; 
	} else if (compras > 100 && compras < 200 ){
		desconto = (0.1* compras);
		cout << "o valor do desconto desse cliente é de : " << desconto << endl;
	} else if(compras > 200){
		desconto = (0.2 * compras);
		cout << "o valor do desconto desse cliente é de : " << desconto << endl;
	} else {
		cout << "Insira um valor válido.";
	}
	
}