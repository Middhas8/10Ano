#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);     
	cin.tie(NULL);
	//Codigo abaixo

	int NumeroPessoas_N,PessoasAltura_A[100], QuantosConseguemVer = 0;
	cin >> NumeroPessoas_N;
	for (int i = NumeroPessoas_N-1; i >= 0; i--)
		cin >> PessoasAltura_A[i];

	for (int i = 0; i < NumeroPessoas_N; i++)
	{
		int NumDerrotar = NumeroPessoas_N - i -1;
		int VezesQueConsegueVer = 0;
		for (int ii = i; ii < NumeroPessoas_N; ii++)
		{
			if (PessoasAltura_A[i] > PessoasAltura_A[ii])
			{
				VezesQueConsegueVer++;
			}
		}
		if (VezesQueConsegueVer == NumDerrotar)
		{
				QuantosConseguemVer++;
		}
	}

	cout << QuantosConseguemVer << endl;
	//Codigo acima
	return 0;
}