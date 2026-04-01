#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);     
	cin.tie(NULL);
	//Codigo abaixo

	int Altura_A, Largura_L, Comprimento_C;
	cin >> Altura_A >> Largura_L >> Comprimento_C;

		if (Altura_A >= 3 && Altura_A * Largura_L * Comprimento_C >= 50)
		cout << 1 << endl;
	else
		cout << 0 << endl;

	//Codigo acima
	return 0;
}