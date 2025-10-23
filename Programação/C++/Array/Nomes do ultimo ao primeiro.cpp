#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0)); //Ignore, nao e utilizado neste codigo
	string No[5]; //No=Nome
	char Es = 'N'; //Es=Escolha
    do {
    for (int i = 0; i < 5; i++) {
	cout << "Me de o " << i+1 << "º nome : ";
	cin >> No[i];
	    }
	for (int i = 4; i >= 0; i--) {
	cout << No[i] << endl;
	    }
	cout << "Deseja sair (S/N)";
	cin >> Es;
    } while (Es != 'S');
	return 0;
}
