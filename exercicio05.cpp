#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>
using namespace std;

#include <string>
using std::string;

	 int nota1, nota2, nota3, media;

int main(){
	
	 std::string nome;

	    setlocale(LC_ALL, "");
		cout << "Insira seu nome: " << nome << endl;
		cin >> nome;
		cout << "Insira a primeira nota: " << endl;
		cin >> nota1;
		cout << "Insira a segunda nota: " << endl;
		cin >> nota2; 
		cout << "Insira a terceira nota: " << endl;
		cin >> nota3;
		media = (nota1 + nota2 + nota3) / 3; 
		
		if(media >= 6){
			cout << "O aluno "<< nome << " teve sua média de "<< media << "e foi aprovado";
		}else{
				cout << "O aluno "<< nome << " teve sua média de "<< media << "e foi reprovado";
		}
		
		
}