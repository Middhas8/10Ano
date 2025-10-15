#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N;
	char sair = 'n';
	string nomes[5];
	string apelidos[5];

	
 
	for (int i = 0; i < 5; i++ ) {
		cout << "Me de o nome da " << i+1 << "º pessoa \n";
		cin >> nomes[i];
	}
	for (int ii = 0; ii < 5; ii++) {
		cout << "Me de o apelido de " << nomes[ii] <<"\n";
		cin >> apelidos[ii];
	}

	while (sair == 'n') {
	cout << "Diz um número para saber a pessoa e a seu apelido carinhoso: ";
	cin >> N;
	cout << "A pessoa é " << nomes[N-1] << ", tendo o apelido " << apelidos[N-1];
	cout << "\n\nDeseja sair (s/n)";
	cin >> sair;
	}
}