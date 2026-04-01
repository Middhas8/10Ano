#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N;
	string nomes[5] = {};
	string notas[5] = {};
 
	for (int i = 0; i < 5; i++ ) {
		cout << "Me de o nome de 1 pessoa \n";
		cin >> nomes[i];
	}
	for (int ii = 0; ii < 5; ii++) {
		cout << "Me de a nota de 1 pessoa \n";
		cin >> notas[ii];
	}
 
	cout << "Diz um número para saber a pessoa e a sua nota: ";
	cin >> N;
	cout << "A pessoa é " << nomes[N] << " tendo a nota " << notas[N];
}