#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);     
	cin.tie(NULL);
	//Codigo abaixo
	int TamanhoFloresta_N, TamanhoBanco_K;
	string FlorestaAtual;
	bool podeBanco = false;
	cin >> TamanhoFloresta_N >> TamanhoBanco_K;
	for (int i = 0; i < TamanhoFloresta_N; i++)
	{
		int EspacoLivre = 0;
		cin >> FlorestaAtual;
		for (int ii = 0; ii < TamanhoFloresta_N; ii++)
		{
			if (FlorestaAtual[ii] == '#')
				EspacoLivre = 0;
			else if (FlorestaAtual[ii] == '.')
				EspacoLivre++;
			if (EspacoLivre >= TamanhoBanco_K)
				podeBanco = true;
		}
	}
	cout << podeBanco << endl;
	//Codigo acima
	return 0;
}