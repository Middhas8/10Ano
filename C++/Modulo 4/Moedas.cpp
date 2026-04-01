#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int TrocosEmMoedas[8] = {0};

int VerificarMoedas(int i, int MoedaAtual[], int Quantidade) {
	int Valor;
	Valor = MoedaAtual[i] * Quantidade;
	return Valor;
}

int VerificarTroco(int i, int MoedaAtual[], int Troco) {
	if (Troco>=MoedaAtual[i])
	{
		do {
			Troco -= MoedaAtual[i];
			TrocosEmMoedas[i] += 1;
		} while (Troco >= MoedaAtual[i]);
	}
return Troco;
}

bool VerificarPagamento(int ValorParaPagar, int ValorPago) {
	if (ValorParaPagar > ValorPago) {
		return false;
	}
	else {
		return true;
	}
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int i, Euros, Centimos, MoedaAtual[8]{ 200,100,50,20,10,5,2,1 }, Moedas[8]{ 0 }, Quantidade, Pagar, Troco = 0;
	float Valor = 0;
	bool Vendeu;
	cin >> Euros >> Centimos;
	Euros = Euros * 100;
	Pagar = Euros + Centimos;

	for ( i = 0; i < 8; i++) {
		cin >> Quantidade;
	Moedas[i] =	VerificarMoedas(i, MoedaAtual, Quantidade);
	Valor += Moedas[i];
	}

	Vendeu = VerificarPagamento(Pagar, Valor);
	if (Vendeu == true) {
		Troco = Valor - Pagar;
		for ( i = 0; i < 8; i++) {
			Troco = VerificarTroco(i, MoedaAtual, Troco);
			cout << TrocosEmMoedas[i] << " ";
		}
	}else {
		cout << " Toma seu dinheiro de volta \n";
		for ( i = 0; i < 8; i++) {
			cout << Moedas[i] / 100;
		}
	}

	return 0;
}
