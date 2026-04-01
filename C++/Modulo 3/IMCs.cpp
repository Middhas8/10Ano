#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>//Sleep == Não usei isto para nada :/
using namespace std;

//Função para classificar o imc selecionado
void classificar_imc(float x) {
	if (x < 19) {
		cout << "baixo peso";
	}
	else if (x < 25) {
		cout << "peso normal";
	}
	else if (x < 30) {
		cout << "excesso de peso";
	}
	else if (x < 35) {
		cout << "obesidade";
	}
	else {
		cout << "obesidade extrema";
	}
}
//Função para deixar o codigo mais bonito
void bar() {
	cout << "===============================\n";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	float num = 0, imc[10], alt[10], pes[10];
			cout << "ex: 1.68, ";
	for (i = 0; i < 10; i++)
	{
		cout << "Altura(cm): ";
		cin >> alt[i];
		cout << "Peso(kg) : ";
		cin >> pes[i];
			bar();
		imc[i] = pes[i] / (alt[i] * alt[i]);
		if (i == 9) {
			bar();
		}
	}
	cout << "Qual usuario quer saber o imc?(1-10)";
	cin >> i;
	cout << "O IMC do usuario " << i << " é igual a " << imc[i-1] << ", sendo classificado como ";
	classificar_imc(imc[i-1]); cout << endl;
	bar();
	for (i = 0; i < 10; i++) {
		num = num + imc[i];
		if (i == 9) {
			num = num / 10;
			cout << "A média dos IMCs e de ";
			classificar_imc(num); bar();
		}
	}
	return 0;
}
