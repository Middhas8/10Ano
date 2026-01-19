#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>

using namespace std;

int IniciarEcran(int Saldo);

void Deposito(int Saldo) {
	system("CLS");
	int Deposito;
	cout << "Qual quantidade vai depositar? : ";
	cin >> Deposito;
	Saldo += Deposito;
	if (Deposito >= 2000) {
		int NRand = (rand() % 4) + 1;
	switch (NRand)
			{
	case 1:
		cout << "Uau! Ainda vais preso!\n";
		break;
	case 2:
		cout << "Cuidado para não afundares o banco com tanto dinheiro!\n";
		break;
	case 3:
		cout << "A nadar em dinheiro, ahn?\n";
		break;
	case 4: 
		cout << "Já vi que finalmente tomaste banho e foste a casa da madrinha\n";
		break;
			}
	}
	IniciarEcran(Saldo);
}

void Débito(int Saldo) {
	system("CLS");
	int Débito;
	cout << "Qual e a quantidade deseja retirar? : ";
	cin >> Débito;
	if (Saldo < Débito) {
		cout << "Quantidade maior que o saldo, clique em enter para voltar ao menu...";
	}
	else {
		Saldo -= Débito;
	}
	IniciarEcran(Saldo);
}

void VerificarSaldo(int Saldo) {
	system("CLS");
	cout << "O seu saldo e : "<<Saldo<<endl;
	IniciarEcran(Saldo);
}

void EnviarDinheiro(int Saldo) {
	system("CLS");
	string Fake;
	int Quantidade;
	cout << "Qual a quantidade que voce deseja enviar :";
	cin >> Quantidade;
	Saldo = Saldo - Quantidade;
	IniciarEcran(Saldo);
}

int IniciarEcran(int Saldo) {
	srand(time(0));
	Sleep(2000);
	system("CLS");
	string Bar1 = "==============================\n", Bar2 = "\n------------------------------\n";
	int Escolha=0;
	

	cout << Bar1 <<"      CAIXA MULTIBANCO"<<Bar2;
	cout << "  Escolha uma das opções"<<Bar2;
	cout << "1 - Verificar saldo\n";
	cout << "2 - Deposito\n";
	cout << "3 - Débito\n";
	cout << "4 - Enviar dinheiro"<<Bar2<<Bar1;
	cin >> Escolha;
	switch (Escolha) {
	default:
		cout << "Opção invalida, ";
		break;
	case 1: 
		VerificarSaldo(Saldo);
		break;
	case 2:
		Deposito(Saldo);
		break;
	case 3:
		Débito(Saldo);
		break;
	case 4:
		EnviarDinheiro(Saldo);
		break;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int Saldo = 1000;
	IniciarEcran(Saldo);
  return 0;
}
