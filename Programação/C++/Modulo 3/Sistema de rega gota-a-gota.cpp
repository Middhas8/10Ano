#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int VMin, VMax, Int[2], i, j, Dias, aux = 0, DMin = 0, DMax = 0, DAde = 0;//Val[0]=Valor Minimo/Val[1]=Máximo; Int[0]=Intervalo Minimo/Int[1] Máximo
	string Gotas;
	cin >> VMin >> VMax >> Int[0] >> Int[1] >> Dias;
	for ( i = 0; i < Dias; i++) {
		aux = 0;
		cin >> Gotas;
		for ( j = 0; j < Gotas.size(); j++) {
			if (Gotas[j] == '1') {
				aux++;
			}
		}
		if (aux < VMin) {
			DMin++;
		} else if (aux > VMax) {
			DMax++;
		}
		else if (aux >= Int[0] && aux <= Int[1]) {
			DAde++;
		}
	}
	cout << DMin << " " << DMax << " " << DAde;
	return 0;
}
